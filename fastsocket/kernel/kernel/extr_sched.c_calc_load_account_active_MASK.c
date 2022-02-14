
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {long nr_running; long calc_load_active; scalar_t__ nr_uninterruptible; } ;


 int FUNC_0 (long,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct rq *VAR_1)
{
 long VAR_2, VAR_3;

 VAR_2 = VAR_1->nr_running;
 VAR_2 += (long) VAR_1->nr_uninterruptible;

 if (VAR_2 != VAR_1->calc_load_active) {
  VAR_3 = VAR_2 - VAR_1->calc_load_active;
  VAR_1->calc_load_active = VAR_2;
  FUNC_0(VAR_3, &VAR_0);
 }
}
