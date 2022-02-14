
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bgx {TYPE_1__* lmac; } ;
struct TYPE_2__ {int dmac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgx*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct bgx *VAR_2, int VAR_3)
{
 uint64_t VAR_4;

 while (VAR_2->lmac[VAR_3].dmac > 0) {
  VAR_4 = ((VAR_2->lmac[VAR_3].dmac - 1) * sizeof(uint64_t)) +
      (VAR_3 * VAR_1 * sizeof(uint64_t));
  FUNC_0(VAR_2, 0, VAR_0 + VAR_4, 0);
  VAR_2->lmac[VAR_3].dmac--;
 }
}
