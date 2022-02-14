
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ u_long ;
struct name_table {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,struct name_table*,scalar_t__*,int*) ;

__attribute__((used)) static bool
FUNC_2(FILE *VAR_0, struct name_table *VAR_1, u_long VAR_2, u_long *VAR_3)
{
 uintmax_t VAR_4;
 bool VAR_5;

 if (VAR_2 == 0) {
  FUNC_0("0", VAR_0);
  if (VAR_3 != ((void*)0))
   *VAR_3 = 0;
  return (1);
 }

 VAR_5 = 0;
 VAR_4 = VAR_2;
 FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
 return (VAR_5);
}
