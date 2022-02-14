
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_hal_channel {scalar_t__ maxTxPow; scalar_t__* targetPowers; } ;



__attribute__((used)) static void
FUNC_0(struct mwl_hal_channel *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->maxTxPow = VAR_0->targetPowers[VAR_1];
 for (VAR_1++; VAR_1 < VAR_2; VAR_1++)
  if (VAR_0->targetPowers[VAR_1] > VAR_0->maxTxPow)
   VAR_0->maxTxPow = VAR_0->targetPowers[VAR_1];
}
