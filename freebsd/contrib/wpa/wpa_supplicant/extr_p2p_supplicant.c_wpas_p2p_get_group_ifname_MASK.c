
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char* ifname; int p2p_group_idx; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,size_t,char*,char*,...) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,scalar_t__) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_2,
          char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_2->ifname;

 if (FUNC_3(VAR_2->ifname, VAR_1,
         FUNC_2(VAR_1)) == 0) {
  VAR_5 = FUNC_4(VAR_2->ifname, '-') + 1;
 }

 FUNC_0(VAR_3, VAR_4, "p2p-%s-%d", VAR_5, VAR_2->p2p_group_idx);
 if (FUNC_2(VAR_3) >= VAR_0 &&
     FUNC_2(VAR_2->ifname) < VAR_0) {
  int VAR_6;


  VAR_6 = FUNC_0(VAR_3, VAR_4, "p2p-%d", VAR_2->p2p_group_idx);
  if (FUNC_1(VAR_4, VAR_6) && VAR_4)
   VAR_3[VAR_4 - 1] = '\0';
 }
}
