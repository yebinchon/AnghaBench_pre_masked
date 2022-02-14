
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t_op {char const* op_text; int op_num; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct t_op *VAR_1, const struct t_op *VAR_2, const char *VAR_3)
{
 while (VAR_1 != VAR_2) {
  if (VAR_3[0] == VAR_1->op_text[0] && VAR_3[1] == VAR_1->op_text[1])
   return VAR_1->op_num;
  VAR_1++;
 }
 return VAR_0;
}
