
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_filter {scalar_t__ perturb_period; int perturb_timer; int hashrnd; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct flow_filter *VAR_2 = (struct flow_filter *)VAR_1;

 FUNC_0(&VAR_2->hashrnd, 4);
 if (VAR_2->perturb_period)
  FUNC_1(&VAR_2->perturb_timer, VAR_0 + VAR_2->perturb_period);
}
