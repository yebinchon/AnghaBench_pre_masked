
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lzh_stream {struct lzh_dec* ds; } ;
struct TYPE_2__ {int* bitlen; int * freq; } ;
struct lzh_br {int dummy; } ;
struct lzh_dec {TYPE_1__ pt; struct lzh_br br; } ;


 int* VAR_0 ;
 int FUNC_0 (struct lzh_br*,int) ;
 int FUNC_1 (struct lzh_br*,int) ;
 int FUNC_2 (struct lzh_stream*,struct lzh_br*,int) ;

__attribute__((used)) static int
FUNC_3(struct lzh_stream *VAR_1, int VAR_2, int VAR_3)
{
 struct lzh_dec *VAR_4 = VAR_1->ds;
 struct lzh_br *VAR_5 = &(VAR_4->br);
 int VAR_6, VAR_7;

 for (VAR_7 = VAR_2; VAR_7 < VAR_3; ) {
  if (!FUNC_2(VAR_1, VAR_5, 3))
   return (VAR_7);
  if ((VAR_6 = FUNC_0(VAR_5, 3)) == 7) {
   if (!FUNC_2(VAR_1, VAR_5, 13))
    return (VAR_7);
   VAR_6 = VAR_0[FUNC_0(VAR_5, 13) & 0x3FF];
   if (VAR_6)
    FUNC_1(VAR_5, VAR_6 - 3);
   else
    return (-1);
  } else
   FUNC_1(VAR_5, 3);
  VAR_4->pt.bitlen[VAR_7++] = VAR_6;
  VAR_4->pt.freq[VAR_6]++;
 }
 return (VAR_7);
}
