
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ lithium_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(lithium_t *VAR_3, int VAR_4, int VAR_5)
{
 FUNC_2(&VAR_3->lock);
 {
  if (FUNC_0(VAR_3) == 0) {
   FUNC_1(VAR_3, VAR_2, VAR_5);
   FUNC_1(VAR_3, VAR_1, VAR_0 | VAR_4);
  }
 }
 FUNC_3(&VAR_3->lock);
}
