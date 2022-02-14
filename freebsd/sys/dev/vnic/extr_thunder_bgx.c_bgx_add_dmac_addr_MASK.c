
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct bgx {TYPE_1__* lmac; int dev; } ;
struct TYPE_2__ {int dmac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bgx*,int,scalar_t__,int) ;
 struct bgx** VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(uint64_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 uint64_t VAR_13;
 struct bgx *VAR_14;





 VAR_11 += VAR_10 * VAR_4;
 VAR_14 = VAR_8[VAR_11];

 if (VAR_14 == ((void*)0)) {
  FUNC_2("BGX%d not yet initialized, ignoring DMAC addition\n",
      VAR_11);
  return;
 }

 VAR_9 = VAR_9 | (1UL << 48) | ((uint64_t)VAR_12 << 49);
 if (VAR_14->lmac[VAR_12].dmac == VAR_5) {
  FUNC_1(VAR_14->dev,
      "Max DMAC filters for LMAC%d reached, ignoring\n",
      VAR_12);
  return;
 }

 if (VAR_14->lmac[VAR_12].dmac == VAR_6)
  VAR_14->lmac[VAR_12].dmac = 1;

 VAR_13 = (VAR_14->lmac[VAR_12].dmac * sizeof(uint64_t)) +
     (VAR_12 * VAR_5 * sizeof(uint64_t));
 FUNC_0(VAR_14, 0, VAR_2 + VAR_13, VAR_9);
 VAR_14->lmac[VAR_12].dmac++;

 FUNC_0(VAR_14, VAR_12, VAR_1,
     (VAR_3 << 3) | (VAR_7 << 1) |
     (VAR_0 << 0));
}
