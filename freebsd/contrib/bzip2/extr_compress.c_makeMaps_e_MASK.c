
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nInUse; scalar_t__* unseqToSeq; scalar_t__* inUse; } ;
typedef int Int32 ;
typedef TYPE_1__ EState ;



__attribute__((used)) static
void FUNC_0 ( EState* VAR_0 )
{
   Int32 VAR_1;
   VAR_0->nInUse = 0;
   for (VAR_1 = 0; VAR_1 < 256; VAR_1++)
      if (VAR_0->inUse[VAR_1]) {
         VAR_0->unseqToSeq[VAR_1] = VAR_0->nInUse;
         VAR_0->nInUse++;
      }
}
