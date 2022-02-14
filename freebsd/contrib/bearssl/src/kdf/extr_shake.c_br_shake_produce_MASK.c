
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {size_t dptr; size_t rate; unsigned char* dbuf; int * A; } ;
typedef TYPE_1__ br_shake_context ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (int *) ;

void
FUNC_3(br_shake_context *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1;
 VAR_4 = VAR_0->dptr;
 VAR_5 = VAR_0->rate;
 while (VAR_2 > 0) {
  size_t VAR_6;

  if (VAR_4 == VAR_5) {
   unsigned char *VAR_7;
   uint64_t *VAR_8;

   VAR_8 = VAR_0->A;
   VAR_7 = VAR_0->dbuf;
   FUNC_2(VAR_8);
   FUNC_0(VAR_7 + 0, VAR_8[ 0]);
   FUNC_0(VAR_7 + 8, ~VAR_8[ 1]);
   FUNC_0(VAR_7 + 16, ~VAR_8[ 2]);
   FUNC_0(VAR_7 + 24, VAR_8[ 3]);
   FUNC_0(VAR_7 + 32, VAR_8[ 4]);
   FUNC_0(VAR_7 + 40, VAR_8[ 5]);
   FUNC_0(VAR_7 + 48, VAR_8[ 6]);
   FUNC_0(VAR_7 + 56, VAR_8[ 7]);
   FUNC_0(VAR_7 + 64, ~VAR_8[ 8]);
   FUNC_0(VAR_7 + 72, VAR_8[ 9]);
   FUNC_0(VAR_7 + 80, VAR_8[10]);
   FUNC_0(VAR_7 + 88, VAR_8[11]);
   FUNC_0(VAR_7 + 96, ~VAR_8[12]);
   FUNC_0(VAR_7 + 104, VAR_8[13]);
   FUNC_0(VAR_7 + 112, VAR_8[14]);
   FUNC_0(VAR_7 + 120, VAR_8[15]);
   FUNC_0(VAR_7 + 128, VAR_8[16]);
   FUNC_0(VAR_7 + 136, ~VAR_8[17]);
   FUNC_0(VAR_7 + 144, VAR_8[18]);
   FUNC_0(VAR_7 + 152, VAR_8[19]);
   FUNC_0(VAR_7 + 160, ~VAR_8[20]);
   FUNC_0(VAR_7 + 168, VAR_8[21]);
   FUNC_0(VAR_7 + 176, VAR_8[22]);
   FUNC_0(VAR_7 + 184, VAR_8[23]);
   FUNC_0(VAR_7 + 192, VAR_8[24]);
   VAR_4 = 0;
  }
  VAR_6 = VAR_5 - VAR_4;
  if (VAR_6 > VAR_2) {
   VAR_6 = VAR_2;
  }
  FUNC_1(VAR_3, VAR_0->dbuf + VAR_4, VAR_6);
  VAR_4 += VAR_6;
  VAR_3 += VAR_6;
  VAR_2 -= VAR_6;
 }
 VAR_0->dptr = VAR_4;
}
