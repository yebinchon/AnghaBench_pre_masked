
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
typedef TYPE_1__ Lock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 Lock *VAR_6;

 VAR_6 = (Lock *)VAR_5;
 if ((VAR_6->lock & VAR_2) == 0)
  FUNC_1(&VAR_6->lock, -VAR_0);
 else {
  FUNC_0(VAR_4 > 0);
  FUNC_1(&VAR_6->lock, -VAR_2);
  if (FUNC_2(&VAR_4, -1) == 1)
   FUNC_3(VAR_1, &VAR_3, ((void*)0));
 }
}
