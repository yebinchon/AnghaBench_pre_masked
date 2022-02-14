
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int dummy; } ;
typedef scalar_t__ flex_uint32_t ;
typedef int flex_int8_t ;
typedef scalar_t__ flex_int32_t ;
typedef int flex_int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct yytbl_data*) ;
 int FUNC_2 (struct yytbl_data*,scalar_t__) ;

__attribute__((used)) static size_t FUNC_3 (struct yytbl_data *VAR_2)
{
 flex_uint32_t VAR_3, VAR_4;
 flex_int32_t VAR_5 = 0;

 VAR_4 = FUNC_1 (VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  flex_int32_t VAR_6;

  VAR_6 = FUNC_0 (FUNC_2 (VAR_2, VAR_3));

  if (VAR_6 > VAR_5)
   VAR_5 = VAR_6;
 }

 if (VAR_5 <= VAR_1)
  return sizeof (flex_int8_t);
 else if (VAR_5 <= VAR_0)
  return sizeof (flex_int16_t);
 else
  return sizeof (flex_int32_t);
}
