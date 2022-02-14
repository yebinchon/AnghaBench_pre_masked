
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockNo; int * inUse; int blockCRC; scalar_t__ state_out_pos; scalar_t__ numZ; scalar_t__ nblock; } ;
typedef int Int32 ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static
void FUNC_1 ( EState* VAR_1 )
{
   Int32 VAR_2;
   VAR_1->nblock = 0;
   VAR_1->numZ = 0;
   VAR_1->state_out_pos = 0;
   FUNC_0 ( VAR_1->blockCRC );
   for (VAR_2 = 0; VAR_2 < 256; VAR_2++) VAR_1->inUse[VAR_2] = VAR_0;
   VAR_1->blockNo++;
}
