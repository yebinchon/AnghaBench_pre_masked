
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_domain {int dummy; } ;
typedef int ktime_t ;
typedef scalar_t__ async_cookie_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct async_domain*) ;
 int FUNC_4 (char*,int ,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(async_cookie_t VAR_5, struct async_domain *VAR_6)
{
 ktime_t VAR_7, VAR_8, VAR_9;

 if (!VAR_6)
  return;

 if (VAR_3 && VAR_4 == VAR_0) {
  FUNC_4("async_waiting @ %i\n", FUNC_5(VAR_2));
  VAR_7 = FUNC_0();
 }

 FUNC_6(VAR_1, FUNC_3(VAR_6) >= VAR_5);

 if (VAR_3 && VAR_4 == VAR_0) {
  VAR_9 = FUNC_0();
  VAR_8 = FUNC_1(VAR_9, VAR_7);

  FUNC_4("async_continuing @ %i after %lli usec\n",
   FUNC_5(VAR_2),
   (long long)FUNC_2(VAR_8) >> 10);
 }
}
