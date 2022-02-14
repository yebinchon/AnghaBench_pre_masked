
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hapd_interfaces {int ctrl_iface_group; } ;
struct group {int gr_gid; } ;


 int VAR_0 ;
 struct group* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct hapd_interfaces *VAR_1,
     const char *VAR_2)
{

 struct group *VAR_3;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_0, "Unknown group '%s'", VAR_2);
  return -1;
 }
 VAR_1->ctrl_iface_group = VAR_3->gr_gid;

 return 0;
}
