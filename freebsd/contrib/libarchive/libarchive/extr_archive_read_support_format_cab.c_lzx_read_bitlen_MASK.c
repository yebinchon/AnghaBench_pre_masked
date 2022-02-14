
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lzx_stream {struct lzx_dec* ds; } ;
struct TYPE_2__ {int max_bits; int* bitlen; } ;
struct lzx_br {int dummy; } ;
struct lzx_dec {int loop; TYPE_1__ pt; struct lzx_br br; } ;
struct huffman {int* freq; int len_size; int* bitlen; } ;


 int FUNC_0 (struct lzx_br*,int) ;
 int FUNC_1 (struct lzx_br*,int) ;
 int FUNC_2 (struct lzx_stream*,struct lzx_br*,int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct lzx_stream *VAR_0, struct huffman *VAR_1, int VAR_2)
{
 struct lzx_dec *VAR_3 = VAR_0->ds;
 struct lzx_br *VAR_4 = &(VAR_3->br);
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 VAR_6 = VAR_3->loop;
 if (VAR_6 == 0)
  FUNC_4(VAR_1->freq, 0, sizeof(VAR_1->freq));
 VAR_8 = 0;
 if (VAR_2 < 0)
  VAR_2 = VAR_1->len_size;
 while (VAR_6 < VAR_2) {
  VAR_3->loop = VAR_6;
  if (!FUNC_2(VAR_0, VAR_4, VAR_3->pt.max_bits))
   goto getdata;
  VAR_10 = FUNC_0(VAR_4, VAR_3->pt.max_bits);
  VAR_5 = FUNC_3(&(VAR_3->pt), VAR_10);
  switch (VAR_5) {
  case 17:
   if (!FUNC_2(VAR_0, VAR_4, VAR_3->pt.bitlen[VAR_5]+4))
    goto getdata;
   FUNC_1(VAR_4, VAR_3->pt.bitlen[VAR_5]);
   VAR_9 = FUNC_0(VAR_4, 4) + 4;
   if (VAR_6 + VAR_9 > VAR_2)
    return (-1);
   FUNC_1(VAR_4, 4);
   for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    VAR_1->bitlen[VAR_6++] = 0;
   break;
  case 18:
   if (!FUNC_2(VAR_0, VAR_4, VAR_3->pt.bitlen[VAR_5]+5))
    goto getdata;
   FUNC_1(VAR_4, VAR_3->pt.bitlen[VAR_5]);
   VAR_9 = FUNC_0(VAR_4, 5) + 20;
   if (VAR_6 + VAR_9 > VAR_2)
    return (-1);
   FUNC_1(VAR_4, 5);
   FUNC_4(VAR_1->bitlen + VAR_6, 0, VAR_9);
   VAR_6 += VAR_9;
   break;
  case 19:
   if (!FUNC_2(VAR_0, VAR_4,
       VAR_3->pt.bitlen[VAR_5]+1+VAR_3->pt.max_bits))
    goto getdata;
   FUNC_1(VAR_4, VAR_3->pt.bitlen[VAR_5]);
   VAR_9 = FUNC_0(VAR_4, 1) + 4;
   if (VAR_6 + VAR_9 > VAR_2)
    return (-1);
   FUNC_1(VAR_4, 1);
   VAR_10 = FUNC_0(VAR_4, VAR_3->pt.max_bits);
   VAR_5 = FUNC_3(&(VAR_3->pt), VAR_10);
   FUNC_1(VAR_4, VAR_3->pt.bitlen[VAR_5]);
   VAR_5 = (VAR_1->bitlen[VAR_6] - VAR_5 + 17) % 17;
   if (VAR_5 < 0)
    return (-1);
   for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    VAR_1->bitlen[VAR_6++] = VAR_5;
   VAR_1->freq[VAR_5] += VAR_9;
   break;
  default:
   FUNC_1(VAR_4, VAR_3->pt.bitlen[VAR_5]);
   VAR_5 = (VAR_1->bitlen[VAR_6] - VAR_5 + 17) % 17;
   if (VAR_5 < 0)
    return (-1);
   VAR_1->freq[VAR_5]++;
   VAR_1->bitlen[VAR_6++] = VAR_5;
   break;
  }
 }
 VAR_8 = 1;
getdata:
 VAR_3->loop = VAR_6;
 return (VAR_8);
}
