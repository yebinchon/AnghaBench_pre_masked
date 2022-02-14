
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef int mchunkptr ;
typedef int Void_t ;
struct TYPE_5__ {int mutex; int stat_lock_wait; int stat_lock_direct; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(Void_t* VAR_0)
{
  mstate VAR_1;
  mchunkptr VAR_2;

  FUNC_3("cvmx_free(%p)\n", VAR_0);


  if (VAR_0 == 0)
    return;

  VAR_2 = FUNC_4(VAR_0);


  VAR_1 = FUNC_1(VAR_2);
  FUNC_2(VAR_1);
  (void)FUNC_5(&VAR_1->mutex);

  FUNC_0(VAR_1, VAR_0);
  (void)FUNC_7(&VAR_1->mutex);
}
