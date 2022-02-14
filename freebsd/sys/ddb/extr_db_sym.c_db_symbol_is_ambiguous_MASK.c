
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c_db_sym_t ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const**,int ) ;
 int * VAR_2 ;

__attribute__((used)) static bool
FUNC_2(c_db_sym_t VAR_3)
{
 const char *VAR_4;
 int VAR_5;
 bool VAR_6 = 0;

 if (!VAR_1)
  return (0);

 FUNC_1(VAR_3, &VAR_4, 0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(&VAR_2[VAR_5], VAR_4)) {
   if (VAR_6)
    return (1);
   VAR_6 = 1;
  }
 }
 return (0);
}
