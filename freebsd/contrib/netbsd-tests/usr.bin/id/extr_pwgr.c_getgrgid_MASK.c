
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; void* gr_name; } ;
typedef int gid_t ;


 struct group VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (struct group*,int ,int) ;

struct group *
FUNC_2(gid_t VAR_1)
{
 struct group *VAR_2 = &VAR_0;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 if (VAR_1 == 0) {
  VAR_2->gr_name = FUNC_0("wheel");
  VAR_2->gr_gid = 0;
 } else if (VAR_1 == 100) {
  VAR_2->gr_name = FUNC_0("users");
  VAR_2->gr_gid = 100;
 } else
  VAR_2 = ((void*)0);

 return VAR_2;
}
