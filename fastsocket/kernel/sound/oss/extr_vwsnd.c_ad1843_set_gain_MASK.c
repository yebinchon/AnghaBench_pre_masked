
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lithium_t ;
struct TYPE_5__ {int rfield; TYPE_2__* lfield; scalar_t__ negative; } ;
typedef TYPE_1__ ad1843_gain_t ;
struct TYPE_6__ {int nbits; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__ const*) ;
 int FUNC_1 (int *,int,TYPE_2__*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(lithium_t *VAR_1,
      const ad1843_gain_t *VAR_2,
      int VAR_3)
{
 unsigned short VAR_4 = (1 << VAR_2->lfield->nbits) - 1;

 int VAR_5 = VAR_3 >> 0 & 0xFF;
 int VAR_6 = VAR_3 >> 8;
 if (VAR_5 < 0 || VAR_5 > 100 || VAR_6 < 0 || VAR_6 > 100)
  return -VAR_0;
 VAR_5 = (VAR_5 * VAR_4 + (VAR_4 >> 1)) / 100;
 VAR_6 = (VAR_6 * VAR_4 + (VAR_4 >> 1)) / 100;
 if (VAR_2->negative) {
  VAR_5 = VAR_4 - VAR_5;
  VAR_6 = VAR_4 - VAR_6;
 }
 FUNC_1(VAR_1, 2, VAR_2->lfield, VAR_5, VAR_2->rfield, VAR_6);
 return FUNC_0(VAR_1, VAR_2);
}
