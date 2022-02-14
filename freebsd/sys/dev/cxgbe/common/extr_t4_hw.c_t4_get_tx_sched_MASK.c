
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,unsigned int*,int,unsigned int,int) ;

void FUNC_2(struct adapter *VAR_2, unsigned int VAR_3, unsigned int *VAR_4,
       unsigned int *VAR_5, bool VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_4) {
  VAR_8 = VAR_0 - VAR_3 / 2;
  FUNC_1(VAR_2, &VAR_7, 1, VAR_8, VAR_6);
  if (VAR_3 & 1)
   VAR_7 >>= 16;
  VAR_9 = (VAR_7 >> 8) & 0xff;
  VAR_10 = VAR_7 & 0xff;
  if (!VAR_10)
   *VAR_4 = 0;
  else {
   VAR_7 = (VAR_2->params.vpd.cclk * 1000) / VAR_10;
   *VAR_4 = (VAR_7 * VAR_9) / 125;
  }
 }
 if (VAR_5) {
  VAR_8 = VAR_1 - VAR_3 / 2;
  FUNC_1(VAR_2, &VAR_7, 1, VAR_8, VAR_6);
  if (VAR_3 & 1)
   VAR_7 >>= 16;
  VAR_7 &= 0xffff;
  *VAR_5 = (10000 * VAR_7) / FUNC_0(VAR_2);
 }
}
