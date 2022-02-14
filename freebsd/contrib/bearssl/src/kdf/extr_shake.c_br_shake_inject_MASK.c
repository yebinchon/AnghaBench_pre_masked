
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t rate; size_t dptr; int A; scalar_t__ dbuf; } ;
typedef TYPE_1__ br_shake_context ;


 int FUNC_0 (scalar_t__,unsigned char const*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,size_t) ;

void
FUNC_3(br_shake_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1;
 VAR_4 = VAR_0->rate;
 VAR_5 = VAR_0->dptr;
 while (VAR_2 > 0) {
  size_t VAR_6;

  VAR_6 = VAR_4 - VAR_5;
  if (VAR_6 > VAR_2) {
   VAR_6 = VAR_2;
  }
  FUNC_0(VAR_0->dbuf + VAR_5, VAR_3, VAR_6);
  VAR_5 += VAR_6;
  VAR_3 += VAR_6;
  VAR_2 -= VAR_6;
  if (VAR_5 == VAR_4) {
   FUNC_2(VAR_0->A, VAR_0->dbuf, VAR_4);
   FUNC_1(VAR_0->A);
   VAR_5 = 0;
  }
 }
 VAR_0->dptr = VAR_5;
}
