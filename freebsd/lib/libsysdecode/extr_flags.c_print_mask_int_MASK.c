
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct name_table {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct name_table*,int*,int*) ;

__attribute__((used)) static bool
FUNC_1(FILE *VAR_0, struct name_table *VAR_1, int VAR_2, int *VAR_3)
{
 uintmax_t VAR_4;
 bool VAR_5;

 VAR_5 = 0;
 VAR_4 = (unsigned)VAR_2;
 FUNC_0(VAR_0, VAR_1, &VAR_4, &VAR_5);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
 return (VAR_5);
}
