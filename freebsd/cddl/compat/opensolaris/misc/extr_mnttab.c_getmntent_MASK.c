
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct mnttab {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,struct mnttab*) ;
 int FUNC_3 () ;

int
FUNC_4(FILE *VAR_4, struct mnttab *VAR_5)
{
 struct statfs *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = (int)FUNC_1(FUNC_0(VAR_4), 0, VAR_0);
 if (VAR_8 == -1)
  return (VAR_2);

 if (VAR_8 == 0 || VAR_3 == ((void*)0)) {
  VAR_7 = FUNC_3();
  if (VAR_7 != 0)
   return (VAR_7);
 }
 if (VAR_8 >= VAR_1)
  return (-1);
 FUNC_2(&VAR_3[VAR_8], VAR_5);
 if (FUNC_1(FUNC_0(VAR_4), 1, VAR_0) == -1)
  return (VAR_2);
 return (0);
}
