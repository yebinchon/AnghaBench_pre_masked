
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_mem; int gr_gid; int gr_passwd; int gr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct group *VAR_4)
{
 VAR_4->gr_name = VAR_2;
 VAR_4->gr_passwd = VAR_3;
 VAR_4->gr_gid = VAR_0;
 VAR_4->gr_mem = VAR_1;

 return;
}
