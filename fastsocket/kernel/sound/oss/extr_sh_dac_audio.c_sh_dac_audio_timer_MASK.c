
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static enum hrtimer_restart FUNC_2(struct hrtimer *VAR_10)
{
 if (!VAR_7) {
  FUNC_1(*VAR_4, VAR_1);
  VAR_4++;

  if (VAR_4 == VAR_6 + VAR_0)
   VAR_4 = VAR_6;
  if (VAR_4 == VAR_5)
   VAR_7 = 1;
 }

 if (!VAR_7)
  FUNC_0(&VAR_8, VAR_9, VAR_2);

 return VAR_3;
}
