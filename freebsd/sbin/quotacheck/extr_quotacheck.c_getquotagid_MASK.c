
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; } ;


 struct group* FUNC_0 (int ) ;
 int VAR_0 ;

int
FUNC_1(void)
{
 struct group *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) != ((void*)0))
  return (VAR_1->gr_gid);
 return (-1);
}
