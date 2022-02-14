
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* select_adc_source ) (struct hw*,int ) ;scalar_t__ (* is_adc_source_selected ) (struct hw*,int ) ;} ;
struct ct_atc {struct hw* hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_2(struct ct_atc *VAR_1)
{
 struct hw *VAR_2 = VAR_1->hw;

 if (VAR_2->is_adc_source_selected(VAR_2, VAR_0))
  return 0;

 VAR_2->select_adc_source(VAR_2, VAR_0);

 return 0;
}
