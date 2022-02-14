
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_acl_entry {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct mac_acl_entry**,int*,int,int *) ;
 int FUNC_5 (struct mac_acl_entry**,int*,int *) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int FUNC_7 (struct mac_acl_entry*,int,int,int ) ;
 int FUNC_8 (int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3,
           struct mac_acl_entry **VAR_4, int *VAR_5)
{
 FILE *VAR_6;
 char VAR_7[128], *VAR_8;
 int VAR_9 = 0;
 u8 VAR_10[VAR_0];
 int VAR_11;

 VAR_6 = FUNC_3(VAR_3, "r");
 if (!VAR_6) {
  FUNC_8(VAR_1, "MAC list file '%s' not found.", VAR_3);
  return -1;
 }

 while (FUNC_2(VAR_7, sizeof(VAR_7), VAR_6)) {
  int VAR_12 = 0;

  VAR_9++;

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
  VAR_8 = VAR_7;
  if (VAR_7[0] == '-') {
   VAR_12 = 1;
   VAR_8++;
  }

  if (FUNC_6(VAR_8, VAR_10)) {
   FUNC_8(VAR_1, "Invalid MAC address '%s' at "
       "line %d in '%s'", VAR_8, VAR_9, VAR_3);
   FUNC_1(VAR_6);
   return -1;
  }

  if (VAR_12) {
   FUNC_5(VAR_4, VAR_5, VAR_10);
   continue;
  }
  VAR_11 = 0;
  VAR_8 = VAR_7;
  while (*VAR_8 != '\0' && *VAR_8 != ' ' && *VAR_8 != '\t')
   VAR_8++;
  while (*VAR_8 == ' ' || *VAR_8 == '\t')
   VAR_8++;
  if (*VAR_8 != '\0')
   VAR_11 = FUNC_0(VAR_8);

  if (FUNC_4(VAR_4, VAR_5, VAR_11, VAR_10) < 0) {
   FUNC_1(VAR_6);
   return -1;
  }
 }

 FUNC_1(VAR_6);

 if (*VAR_4)
  FUNC_7(*VAR_4, *VAR_5, sizeof(**VAR_4), VAR_2);

 return 0;
}
