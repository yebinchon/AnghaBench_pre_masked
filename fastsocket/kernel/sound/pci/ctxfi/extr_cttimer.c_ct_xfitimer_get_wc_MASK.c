
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {unsigned int (* get_wc ) (struct hw*) ;} ;
struct ct_timer {TYPE_1__* atc; } ;
struct TYPE_2__ {struct hw* hw; } ;


 unsigned int FUNC_0 (struct hw*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct ct_timer *VAR_0)
{
 struct hw *VAR_1 = VAR_0->atc->hw;
 return VAR_1->get_wc(VAR_1);
}
