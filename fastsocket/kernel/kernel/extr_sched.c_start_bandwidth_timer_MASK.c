
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct hrtimer*,int ,unsigned long,int ,int ) ;
 scalar_t__ FUNC_1 (struct hrtimer*) ;
 int FUNC_2 (struct hrtimer*) ;
 int FUNC_3 (struct hrtimer*,int ,int ) ;
 int FUNC_4 (struct hrtimer*) ;
 int FUNC_5 (struct hrtimer*) ;
 int FUNC_6 (int ,int ) ;
 unsigned long FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct hrtimer *VAR_1, ktime_t VAR_2)
{
 unsigned long VAR_3;
 ktime_t VAR_4, VAR_5, VAR_6;

 for (;;) {
  if (FUNC_1(VAR_1))
   break;

  VAR_6 = FUNC_2(VAR_1);
  FUNC_3(VAR_1, VAR_6, VAR_2);

  VAR_4 = FUNC_5(VAR_1);
  VAR_5 = FUNC_4(VAR_1);
  VAR_3 = FUNC_7(FUNC_6(VAR_5, VAR_4));
  FUNC_0(VAR_1, VAR_4, VAR_3,
      VAR_0, 0);
 }
}
