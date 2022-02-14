
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_lolen; int td_hilen; scalar_t__ td_id; } ;
typedef int flex_int32_t ;


 scalar_t__ VAR_0 ;

flex_int32_t FUNC_0 (const struct yytbl_data *VAR_1)
{
 flex_int32_t VAR_2;


 VAR_2 = VAR_1->td_lolen;
 if (VAR_1->td_hilen > 0)
  VAR_2 *= VAR_1->td_hilen;

 if (VAR_1->td_id == VAR_0)
  VAR_2 *= 2;
 return VAR_2;
}
