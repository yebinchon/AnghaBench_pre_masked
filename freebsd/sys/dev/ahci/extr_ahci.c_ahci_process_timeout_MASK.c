
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_channel {int numslots; TYPE_1__* slot; int mtx; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahci_channel *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->mtx, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->numslots; VAR_4++) {

  if (VAR_3->slot[VAR_4].state < VAR_1)
   continue;
  FUNC_0(&VAR_3->slot[VAR_4], VAR_0);
 }
}
