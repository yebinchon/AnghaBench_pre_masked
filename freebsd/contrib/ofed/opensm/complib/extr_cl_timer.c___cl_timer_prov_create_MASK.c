
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_timer_prov_t ;
typedef int cl_status_t ;
struct TYPE_4__ {int thread; int cond; int mutex; int queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int *,int *) ;

cl_status_t FUNC_8(void)
{
 FUNC_0(VAR_4 == ((void*)0));

 VAR_4 = FUNC_3(sizeof(cl_timer_prov_t));
 if (!VAR_4)
  return (VAR_1);
 else
  FUNC_4(VAR_4, 0, sizeof(cl_timer_prov_t));

 FUNC_2(&VAR_4->queue);

 FUNC_7(&VAR_4->mutex, ((void*)0));
 FUNC_5(&VAR_4->cond, ((void*)0));

 if (FUNC_6(&VAR_4->thread, ((void*)0),
      VAR_3, ((void*)0))) {
  FUNC_1();
  return (VAR_0);
 }

 return (VAR_2);
}
