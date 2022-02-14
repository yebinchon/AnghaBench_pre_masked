
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gen_funcs { ____Placeholder_gen_funcs } gen_funcs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(int VAR_3, char *VAR_4[], enum gen_funcs VAR_5)
{
 if (VAR_5 == VAR_0) {
  if (VAR_3 == 0)
   FUNC_3(VAR_2, 1);
  else {
   for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    if (FUNC_4(VAR_2, VAR_4[VAR_6]))
     FUNC_0(1, "enum not found: %s", VAR_4[VAR_6]);
  }
 } else {
  if (VAR_3 == 0)
   FUNC_1(VAR_2, VAR_5 == VAR_1);
  else {
   for (int VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    if (FUNC_2(VAR_2, VAR_4[VAR_7],
        VAR_5 == VAR_1))
     FUNC_0(1, "enum not found: %s", VAR_4[VAR_7]);
  }
 }
}
