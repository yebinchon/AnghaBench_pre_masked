
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct country_op_class {int dummy; } ;


 size_t FUNC_0 (struct country_op_class*) ;
 struct country_op_class* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 struct country_op_class* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,size_t,struct country_op_class const*) ;
 struct country_op_class* VAR_4 ;
 int VAR_5 ;
 struct country_op_class* VAR_6 ;
 int VAR_7 ;

u8 FUNC_3(const char *VAR_8, u8 VAR_9)
{
 const struct country_op_class *VAR_10;
 size_t VAR_11;
 u8 VAR_12;

 if (FUNC_1(VAR_7, VAR_8)) {
  VAR_10 = VAR_6;
  VAR_11 = FUNC_0(VAR_6);
 } else if (FUNC_1(VAR_3, VAR_8)) {
  VAR_10 = VAR_2;
  VAR_11 = FUNC_0(VAR_2);
 } else if (FUNC_1(VAR_5, VAR_8)) {
  VAR_10 = VAR_4;
  VAR_11 = FUNC_0(VAR_4);
 } else if (FUNC_1(VAR_1, VAR_8)) {
  VAR_10 = VAR_0;
  VAR_11 = FUNC_0(VAR_0);
 } else {




  return VAR_9;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_11,
       VAR_10);





 return VAR_12 ? VAR_12 : VAR_9;
}
