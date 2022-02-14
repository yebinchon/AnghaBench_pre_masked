
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* have_digit_io_switch ) (struct hw*) ;} ;
struct ct_atc {struct hw* hw; } ;


 int FUNC_0 (struct hw*) ;

__attribute__((used)) static int FUNC_1(struct ct_atc *VAR_0)
{
 struct hw *VAR_1 = VAR_0->hw;

 return VAR_1->have_digit_io_switch(VAR_1);
}
