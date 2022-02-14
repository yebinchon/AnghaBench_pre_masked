
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; } ;
typedef int gids ;
typedef int gid_t ;


 struct group* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_2(gid_t VAR_0)
{
 struct group *VAR_1;
 static char VAR_2[10];

 if ((VAR_1 = FUNC_0(VAR_0)) == ((void*)0)) {
  (void)FUNC_1(VAR_2, sizeof(VAR_2), "%u", VAR_0);
  return (VAR_2);
 } else
  return (VAR_1->gr_name);
}
