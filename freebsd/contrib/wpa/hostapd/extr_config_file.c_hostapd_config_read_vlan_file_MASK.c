
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int untagged; int notempty; } ;
struct hostapd_vlan {int vlan_id; struct hostapd_vlan* next; int bridge; int ifname; TYPE_1__ vlan_desc; } ;
struct hostapd_bss_config {struct hostapd_vlan* vlan; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 struct hostapd_vlan* FUNC_5 (int) ;
 int FUNC_6 (char*,char**,int) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct hostapd_bss_config *VAR_4,
      const char *VAR_5)
{
 FILE *VAR_6;
 char VAR_7[128], *VAR_8, *VAR_9, *VAR_10;
 int VAR_11 = 0, VAR_12;
 struct hostapd_vlan *VAR_13;

 VAR_6 = FUNC_2(VAR_5, "r");
 if (!VAR_6) {
  FUNC_7(VAR_2, "VLAN file '%s' not readable.", VAR_5);
  return -1;
 }

 while (FUNC_1(VAR_7, sizeof(VAR_7), VAR_6)) {
  VAR_11++;

  if (VAR_7[0] == '#')
   continue;
  VAR_8 = VAR_7;
  while (*VAR_8 != '\0') {
   if (*VAR_8 == '\n') {
    *VAR_8 = '\0';
    break;
   }
   VAR_8++;
  }
  if (VAR_7[0] == '\0')
   continue;

  if (VAR_7[0] == '*') {
   VAR_12 = VAR_3;
   VAR_8 = VAR_7 + 1;
  } else {
   VAR_12 = FUNC_6(VAR_7, &VAR_8, 10);
   if (VAR_7 == VAR_8 || VAR_12 < 1 ||
       VAR_12 > VAR_1) {
    FUNC_7(VAR_2, "Invalid VLAN ID at "
        "line %d in '%s'", VAR_11, VAR_5);
    FUNC_0(VAR_6);
    return -1;
   }
  }

  while (*VAR_8 == ' ' || *VAR_8 == '\t')
   VAR_8++;
  VAR_9 = VAR_8;
  while (*VAR_9 != ' ' && *VAR_9 != '\t' && *VAR_9 != '\0')
   VAR_9++;

  if (*VAR_9 != '\0')
   *(VAR_9++) = '\0';

  if (*VAR_8 == '\0' || FUNC_4(VAR_8) > VAR_0) {
   FUNC_7(VAR_2, "Invalid VLAN ifname at line %d "
       "in '%s'", VAR_11, VAR_5);
   FUNC_0(VAR_6);
   return -1;
  }

  while (*VAR_9 == ' ' || *VAR_9 == '\t')
   VAR_9++;
  VAR_10 = VAR_9;
  while (*VAR_10 != ' ' && *VAR_10 != '\t' && *VAR_10 != '\0')
   VAR_10++;
  *VAR_10 = '\0';

  VAR_13 = FUNC_5(sizeof(*VAR_13));
  if (VAR_13 == ((void*)0)) {
   FUNC_7(VAR_2, "Out of memory while reading "
       "VLAN interfaces from '%s'", VAR_5);
   FUNC_0(VAR_6);
   return -1;
  }

  VAR_13->vlan_id = VAR_12;
  VAR_13->vlan_desc.untagged = VAR_12;
  VAR_13->vlan_desc.notempty = !!VAR_12;
  FUNC_3(VAR_13->ifname, VAR_8, sizeof(VAR_13->ifname));
  FUNC_3(VAR_13->bridge, VAR_9, sizeof(VAR_13->bridge));
  VAR_13->next = VAR_4->vlan;
  VAR_4->vlan = VAR_13;
 }

 FUNC_0(VAR_6);

 return 0;
}
