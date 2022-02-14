
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvs_channel {TYPE_1__* slot; int mtx; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mvs_channel* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_4)
{
 struct mvs_channel *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 FUNC_1(&VAR_5->mtx, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  if (VAR_5->slot[VAR_6].state < VAR_3)
   continue;
  FUNC_2(&VAR_5->slot[VAR_6], VAR_1);
 }
}
