
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {scalar_t__ state; int state_mutex; int up_cv; } ;
struct icl_conn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct iser_conn*) ;
 int FUNC_1 (int *) ;
 struct iser_conn* FUNC_2 (struct icl_conn*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct icl_conn *VAR_1)
{
 struct iser_conn *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("closing conn %p", VAR_2);

 FUNC_4(&VAR_2->state_mutex);





 if (!FUNC_3(VAR_2) && VAR_2->state == VAR_0)
  FUNC_1(&VAR_2->up_cv);
 FUNC_5(&VAR_2->state_mutex);

}
