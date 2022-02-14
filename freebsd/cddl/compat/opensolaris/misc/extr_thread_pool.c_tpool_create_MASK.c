
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {int tp_minimum; int tp_maximum; int tp_linger; int tp_attr; int tp_waitcv; int tp_workcv; int tp_busycv; int tp_mutex; } ;
typedef TYPE_1__ tpool_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

tpool_t *
FUNC_5(uint_t VAR_4, uint_t VAR_5, uint_t VAR_6,
 pthread_attr_t *VAR_7)
{
 tpool_t *VAR_8;
 int VAR_9;

 if (VAR_4 > VAR_5 || VAR_5 < 1) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }

 VAR_8 = FUNC_0(1, sizeof (*VAR_8));
 if (VAR_8 == ((void*)0)) {
  VAR_3 = VAR_1;
  return (((void*)0));
 }
 (void) FUNC_4(&VAR_8->tp_mutex, ((void*)0));
 (void) FUNC_3(&VAR_8->tp_busycv, ((void*)0));
 (void) FUNC_3(&VAR_8->tp_workcv, ((void*)0));
 (void) FUNC_3(&VAR_8->tp_waitcv, ((void*)0));
 VAR_8->tp_minimum = VAR_4;
 VAR_8->tp_maximum = VAR_5;
 VAR_8->tp_linger = VAR_6;


 (void) FUNC_1(&VAR_8->tp_attr);
 (void) FUNC_2(&VAR_8->tp_attr,
     VAR_2);

 return (VAR_8);
}
