
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char* ifname; int mesh_if_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,...) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_1, char *VAR_2,
    size_t VAR_3)
{
 char *VAR_4 = VAR_1->ifname;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, "mesh-%s-%d", VAR_4,
     VAR_1->mesh_if_idx);
 if (FUNC_1(VAR_3, VAR_5) ||
     (FUNC_2(VAR_2) >= VAR_0 &&
      FUNC_2(VAR_1->ifname) < VAR_0)) {

  VAR_5 = FUNC_0(VAR_2, VAR_3, "mesh-%d", VAR_1->mesh_if_idx);
  if (FUNC_1(VAR_3, VAR_5))
   return -1;
 }
 VAR_1->mesh_if_idx++;
 return 0;
}
