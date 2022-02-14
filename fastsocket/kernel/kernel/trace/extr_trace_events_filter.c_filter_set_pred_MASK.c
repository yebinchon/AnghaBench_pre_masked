
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_pred {int fn; scalar_t__ field_name; } ;
typedef int filter_pred_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct filter_pred *VAR_2,
      struct filter_pred *VAR_3,
      filter_pred_fn_t VAR_4)
{
 *VAR_2 = *VAR_3;
 if (VAR_3->field_name) {
  VAR_2->field_name = FUNC_0(VAR_3->field_name, VAR_1);
  if (!VAR_2->field_name)
   return -VAR_0;
 }
 VAR_2->fn = VAR_4;

 return 0;
}
