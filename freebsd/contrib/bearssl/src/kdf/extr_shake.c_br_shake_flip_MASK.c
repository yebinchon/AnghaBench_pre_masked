
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dptr; int rate; int* dbuf; int A; } ;
typedef TYPE_1__ br_shake_context ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int ,int*,int) ;

void
FUNC_2(br_shake_context *VAR_0)
{





 if ((VAR_0->dptr + 1) == VAR_0->rate) {
  VAR_0->dbuf[VAR_0->dptr ++] = 0x9F;
 } else {
  VAR_0->dbuf[VAR_0->dptr ++] = 0x1F;
  FUNC_0(VAR_0->dbuf + VAR_0->dptr, 0x00, VAR_0->rate - VAR_0->dptr - 1);
  VAR_0->dbuf[VAR_0->rate - 1] = 0x80;
  VAR_0->dptr = VAR_0->rate;
 }
 FUNC_1(VAR_0->A, VAR_0->dbuf, VAR_0->rate);
}
