
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lithium_t ;
struct TYPE_4__ {scalar_t__ negative; int rfield; TYPE_2__* lfield; } ;
typedef TYPE_1__ ad1843_gain_t ;
struct TYPE_5__ {int nbits; } ;


 int FUNC_0 (int *,int,TYPE_2__*,int*,int ,int*) ;

__attribute__((used)) static int FUNC_1(lithium_t *VAR_0, const ad1843_gain_t *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned short VAR_4 = (1 << VAR_1->lfield->nbits) - 1;

 FUNC_0(VAR_0, 2, VAR_1->lfield, &VAR_2, VAR_1->rfield, &VAR_3);
 if (VAR_1->negative) {
  VAR_2 = VAR_4 - VAR_2;
  VAR_3 = VAR_4 - VAR_3;
 }
 VAR_2 = (VAR_2 * 100 + (VAR_4 >> 1)) / VAR_4;
 VAR_3 = (VAR_3 * 100 + (VAR_4 >> 1)) / VAR_4;
 return VAR_2 << 0 | VAR_3 << 8;
}
