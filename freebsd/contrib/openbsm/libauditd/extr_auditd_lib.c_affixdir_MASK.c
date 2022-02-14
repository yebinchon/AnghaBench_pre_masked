
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_ent {int dirname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char**,char*,int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_5, struct dir_ent *VAR_6)
{
 char *VAR_7 = ((void*)0);




 if (FUNC_1(VAR_5) != VAR_1) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }




 if (VAR_3 > 0)
  FUNC_0(&VAR_7, "%d/%s.%d", VAR_6->dirname, VAR_5, VAR_2);
 else
  FUNC_0(&VAR_7, "%d/%s", VAR_6->dirname, VAR_5);
 return (VAR_7);
}
