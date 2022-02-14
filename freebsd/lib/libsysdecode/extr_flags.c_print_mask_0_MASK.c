
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_table {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,struct name_table*,int,int*) ;

__attribute__((used)) static bool
FUNC_2(FILE *VAR_0, struct name_table *VAR_1, int VAR_2, int *VAR_3)
{

 if (VAR_2 == 0) {
  FUNC_0("0", VAR_0);
  if (VAR_3 != ((void*)0))
   *VAR_3 = 0;
  return (1);
 }
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
}
