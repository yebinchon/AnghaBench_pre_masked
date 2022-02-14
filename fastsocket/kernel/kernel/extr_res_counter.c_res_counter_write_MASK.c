
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* write_strategy_fn ) (char const*,unsigned long long*) ;
struct res_counter {int lock; } ;


 int VAR_0 ;
 unsigned long long* FUNC_0 (struct res_counter*,int) ;
 unsigned long long FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct res_counter *VAR_1, int VAR_2,
        const char *VAR_3, write_strategy_fn VAR_4)
{
 char *VAR_5;
 unsigned long VAR_6;
 unsigned long long VAR_7, *VAR_8;

 if (VAR_4) {
  if (VAR_4(VAR_3, &VAR_7))
   return -VAR_0;
 } else {
  VAR_7 = FUNC_1(VAR_3, &VAR_5, 10);
  if (*VAR_5 != '\0')
   return -VAR_0;
 }
 FUNC_2(&VAR_1->lock, VAR_6);
 VAR_8 = FUNC_0(VAR_1, VAR_2);
 *VAR_8 = VAR_7;
 FUNC_3(&VAR_1->lock, VAR_6);
 return 0;
}
