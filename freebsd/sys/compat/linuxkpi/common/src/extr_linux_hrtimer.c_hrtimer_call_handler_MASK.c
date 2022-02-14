
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int (* function ) (struct hrtimer*) ;int callout; int precision; int expires; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hrtimer*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct hrtimer *VAR_2;
 enum hrtimer_restart VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->function(VAR_2);

 if (VAR_3 == VAR_0) {
  FUNC_1(&VAR_2->callout,
      FUNC_2(VAR_2->expires), FUNC_2(VAR_2->precision), 0);
 } else {
  FUNC_0(&VAR_2->callout);
 }
}
