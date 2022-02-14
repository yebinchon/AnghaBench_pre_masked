
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef int mchunkptr ;
typedef int Void_t ;
struct TYPE_4__ {int mutex; } ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(Void_t* VAR_2, const Void_t *VAR_3)
{
  Void_t *VAR_4 = ((void*)0);
  mstate VAR_5;
  mchunkptr VAR_6;

  if (VAR_2 == 0)
    return;

  VAR_6 = FUNC_3(VAR_2);
  VAR_5 = FUNC_1(VAR_6);
  FUNC_7(VAR_1, VAR_4);
  if(VAR_4 != VAR_0)
    (void)FUNC_5(&VAR_5->mutex);
  FUNC_0(VAR_5, VAR_2);
  if(VAR_4 != VAR_0)
    (void)FUNC_6(&VAR_5->mutex);
}
