
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lzx_stream {struct lzx_dec* ds; } ;
struct TYPE_2__ {int len_size; size_t* bitlen; int * freq; } ;
struct lzx_br {int dummy; } ;
struct lzx_dec {int loop; TYPE_1__ pt; struct lzx_br br; } ;


 size_t FUNC_0 (struct lzx_br*,int) ;
 int FUNC_1 (struct lzx_br*,int) ;
 int FUNC_2 (struct lzx_stream*,struct lzx_br*,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct lzx_stream *VAR_0)
{
 struct lzx_dec *VAR_1 = VAR_0->ds;
 struct lzx_br *VAR_2 = &(VAR_1->br);
 int VAR_3;

 if (VAR_1->loop == 0)
  FUNC_3(VAR_1->pt.freq, 0, sizeof(VAR_1->pt.freq));
 for (VAR_3 = VAR_1->loop; VAR_3 < VAR_1->pt.len_size; VAR_3++) {
  if (!FUNC_2(VAR_0, VAR_2, 4)) {
   VAR_1->loop = VAR_3;
   return (0);
  }
  VAR_1->pt.bitlen[VAR_3] = FUNC_0(VAR_2, 4);
  VAR_1->pt.freq[VAR_1->pt.bitlen[VAR_3]]++;
  FUNC_1(VAR_2, 4);
 }
 VAR_1->loop = VAR_3;
 return (1);
}
