
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int ih_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct item_head*) ;
 int FUNC_1 (struct item_head*) ;
 int FUNC_2 (struct item_head*) ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(char *VAR_1, struct item_head *VAR_2)
{
 if (VAR_2) {
  FUNC_6(VAR_1,
         (FUNC_3(VAR_2) == VAR_0) ? "*3.6* " : "*3.5*");
  FUNC_5(VAR_1 + FUNC_7(VAR_1), &(VAR_2->ih_key));
  FUNC_4(VAR_1 + FUNC_7(VAR_1), ", item_len %d, item_location %d, "
   "free_space(entry_count) %d",
   FUNC_1(VAR_2), FUNC_2(VAR_2), FUNC_0(VAR_2));
 } else
  FUNC_4(VAR_1, "[NULL]");
}
