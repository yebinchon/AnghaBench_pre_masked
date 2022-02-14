
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum op_type { ____Placeholder_op_type } op_type ;
typedef enum filter_op_type { ____Placeholder_filter_op_type } filter_op_type ;
typedef enum filter_exp_type { ____Placeholder_filter_exp_type } filter_exp_type ;
typedef enum filter_cmp_type { ____Placeholder_filter_cmp_type } filter_cmp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum op_type FUNC_1(const char *VAR_29,
          enum filter_op_type *VAR_30,
          enum filter_cmp_type *VAR_31,
          enum filter_exp_type *VAR_32)
{
 *VAR_30 = VAR_22;
 *VAR_32 = VAR_15;
 *VAR_31 = VAR_6;

 if (FUNC_0(VAR_29, "&&") == 0)
  *VAR_30 = VAR_21;
 else if (FUNC_0(VAR_29, "||") == 0)
  *VAR_30 = VAR_23;
 else if (FUNC_0(VAR_29, "!") == 0)
  return VAR_28;

 if (*VAR_30 != VAR_22)
  return VAR_24;


 if (FUNC_0(VAR_29, "+") == 0) {
  *VAR_32 = VAR_9;
 } else if (FUNC_0(VAR_29, "-") == 0) {
  *VAR_32 = VAR_19;
 } else if (FUNC_0(VAR_29, "*") == 0) {
  *VAR_32 = VAR_14;
 } else if (FUNC_0(VAR_29, "/") == 0) {
  *VAR_32 = VAR_11;
 } else if (FUNC_0(VAR_29, "%") == 0) {
  *VAR_32 = VAR_13;
 } else if (FUNC_0(VAR_29, ">>") == 0) {
  *VAR_32 = VAR_18;
 } else if (FUNC_0(VAR_29, "<<") == 0) {
  *VAR_32 = VAR_12;
 } else if (FUNC_0(VAR_29, "&") == 0) {
  *VAR_32 = VAR_10;
 } else if (FUNC_0(VAR_29, "|") == 0) {
  *VAR_32 = VAR_17;
 } else if (FUNC_0(VAR_29, "^") == 0) {
  *VAR_32 = VAR_20;
 } else if (FUNC_0(VAR_29, "~") == 0)
  *VAR_32 = VAR_16;

 if (*VAR_32 != VAR_15)
  return VAR_26;


 if (FUNC_0(VAR_29, "==") == 0)
  *VAR_31 = VAR_0;
 else if (FUNC_0(VAR_29, "!=") == 0)
  *VAR_31 = VAR_5;
 else if (FUNC_0(VAR_29, "<") == 0)
  *VAR_31 = VAR_4;
 else if (FUNC_0(VAR_29, ">") == 0)
  *VAR_31 = VAR_2;
 else if (FUNC_0(VAR_29, "<=") == 0)
  *VAR_31 = VAR_3;
 else if (FUNC_0(VAR_29, ">=") == 0)
  *VAR_31 = VAR_1;
 else if (FUNC_0(VAR_29, "=~") == 0)
  *VAR_31 = VAR_8;
 else if (FUNC_0(VAR_29, "!~") == 0)
  *VAR_31 = VAR_7;
 else
  return VAR_27;

 return VAR_25;
}
