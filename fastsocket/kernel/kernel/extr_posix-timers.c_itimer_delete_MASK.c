
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {int * it_signal; int list; int it_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct k_itimer*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct k_itimer*) ;
 int FUNC_4 (struct k_itimer*,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct k_itimer *VAR_2)
{
 unsigned long VAR_3;

retry_delete:
 FUNC_2(&VAR_2->it_lock, VAR_3);

 if (FUNC_3(VAR_2) == VAR_1) {
  FUNC_4(VAR_2, VAR_3);
  goto retry_delete;
 }
 FUNC_0(&VAR_2->list);




 VAR_2->it_signal = ((void*)0);

 FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_0);
}
