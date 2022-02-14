
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lzh_stream {struct lzh_dec* ds; } ;
struct TYPE_4__ {int len_size; int len_bits; int len_avail; int* freq; int* bitlen; int max_bits; } ;
struct lzh_br {int dummy; } ;
struct lzh_dec {int state; int literal_pt_len_size; int literal_pt_len_bits; int reading_position; int loop; int pos_pt_len_size; int pos_pt_len_bits; int error; TYPE_1__ pt; TYPE_1__ lt; void* blocks_avail; int w_pos; struct lzh_br br; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct lzh_br*,int) ;
 int FUNC_1 (struct lzh_br*,int) ;
 int FUNC_2 (struct lzh_br*,int) ;
 int FUNC_3 (struct lzh_stream*,struct lzh_br*,int) ;
 int FUNC_4 (struct lzh_stream*,struct lzh_br*,int) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (struct lzh_stream*,int ) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*) ;
 void* FUNC_9 (struct lzh_stream*,int,int) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct lzh_stream *VAR_3, int VAR_4)
{
 struct lzh_dec *VAR_5 = VAR_3->ds;
 struct lzh_br *VAR_6 = &(VAR_5->br);
 int VAR_7 = 0, VAR_8;
 unsigned VAR_9;

 for (;;) {
  switch (VAR_5->state) {
  case 136:







   if (!FUNC_4(VAR_3, VAR_6, 16)) {
    if (!VAR_4)

     return (VAR_2);
    if (FUNC_2(VAR_6, 8)) {






     goto failed;
    }
    if (VAR_5->w_pos > 0) {
     FUNC_6(VAR_3, VAR_5->w_pos);
     VAR_5->w_pos = 0;
     return (VAR_2);
    }


    return (VAR_0);
   }
   VAR_5->blocks_avail = FUNC_0(VAR_6, 16);
   if (VAR_5->blocks_avail == 0)
    goto failed;
   FUNC_1(VAR_6, 16);




   VAR_5->pt.len_size = VAR_5->literal_pt_len_size;
   VAR_5->pt.len_bits = VAR_5->literal_pt_len_bits;
   VAR_5->reading_position = 0;

  case 131:



   if (!FUNC_3(VAR_3, VAR_6, VAR_5->pt.len_bits)) {
    if (VAR_4)
     goto failed;
    VAR_5->state = 131;
    return (VAR_2);
   }
   VAR_5->pt.len_avail = FUNC_0(VAR_6, VAR_5->pt.len_bits);
   FUNC_1(VAR_6, VAR_5->pt.len_bits);

  case 130:
   if (VAR_5->pt.len_avail == 0) {

    if (!FUNC_3(VAR_3, VAR_6,
        VAR_5->pt.len_bits)) {
     if (VAR_4)
      goto failed;
     VAR_5->state = 130;
     return (VAR_2);
    }
    if (!FUNC_7(&(VAR_5->pt),
        FUNC_0(VAR_6, VAR_5->pt.len_bits)))
     goto failed;
    FUNC_1(VAR_6, VAR_5->pt.len_bits);
    if (VAR_5->reading_position)
     VAR_5->state = 137;
    else
     VAR_5->state = 135;
    break;
   } else if (VAR_5->pt.len_avail > VAR_5->pt.len_size)
    goto failed;
   VAR_5->loop = 0;
   FUNC_10(VAR_5->pt.freq, 0, sizeof(VAR_5->pt.freq));
   if (VAR_5->pt.len_avail < 3 ||
       VAR_5->pt.len_size == VAR_5->pos_pt_len_size) {
    VAR_5->state = 128;
    break;
   }

  case 129:
   VAR_5->loop = FUNC_9(VAR_3, VAR_5->loop, 3);
   if (VAR_5->loop < 3) {
    if (VAR_5->loop < 0 || VAR_4)
     goto failed;

    VAR_5->state = 129;
    return (VAR_2);
   }

   if (!FUNC_3(VAR_3, VAR_6, 2)) {
    if (VAR_4)
     goto failed;
    VAR_5->state = 129;
    return (VAR_2);
   }
   VAR_7 = FUNC_0(VAR_6, 2);
   FUNC_1(VAR_6, 2);
   if (VAR_7 > VAR_5->pt.len_avail - 3)
    goto failed;
   for (VAR_8 = 3; VAR_7-- > 0 ;)
    VAR_5->pt.bitlen[VAR_8++] = 0;
   VAR_5->loop = VAR_8;

  case 128:
   VAR_5->loop = FUNC_9(VAR_3, VAR_5->loop,
       VAR_5->pt.len_avail);
   if (VAR_5->loop < VAR_5->pt.len_avail) {
    if (VAR_5->loop < 0 || VAR_4)
     goto failed;

    VAR_5->state = 128;
    return (VAR_2);
   }
   if (!FUNC_8(&(VAR_5->pt)))
    goto failed;
   if (VAR_5->reading_position) {
    VAR_5->state = 137;
    break;
   }

  case 135:
   if (!FUNC_3(VAR_3, VAR_6, VAR_5->lt.len_bits)) {
    if (VAR_4)
     goto failed;
    VAR_5->state = 135;
    return (VAR_2);
   }
   VAR_5->lt.len_avail = FUNC_0(VAR_6, VAR_5->lt.len_bits);
   FUNC_1(VAR_6, VAR_5->lt.len_bits);

  case 134:
   if (VAR_5->lt.len_avail == 0) {

    if (!FUNC_3(VAR_3, VAR_6,
        VAR_5->lt.len_bits)) {
     if (VAR_4)
      goto failed;
     VAR_5->state = 134;
     return (VAR_2);
    }
    if (!FUNC_7(&(VAR_5->lt),
        FUNC_0(VAR_6, VAR_5->lt.len_bits)))
     goto failed;
    FUNC_1(VAR_6, VAR_5->lt.len_bits);
    VAR_5->state = 132;
    break;
   } else if (VAR_5->lt.len_avail > VAR_5->lt.len_size)
    goto failed;
   VAR_5->loop = 0;
   FUNC_10(VAR_5->lt.freq, 0, sizeof(VAR_5->lt.freq));

  case 133:
   VAR_8 = VAR_5->loop;
   while (VAR_8 < VAR_5->lt.len_avail) {
    if (!FUNC_3(VAR_3, VAR_6,
        VAR_5->pt.max_bits)) {
     if (VAR_4)
      goto failed;
     VAR_5->loop = VAR_8;
     VAR_5->state = 133;
     return (VAR_2);
    }
    VAR_9 = FUNC_0(VAR_6, VAR_5->pt.max_bits);
    VAR_7 = FUNC_5(&(VAR_5->pt), VAR_9);
    if (VAR_7 > 2) {





     FUNC_1(VAR_6, VAR_5->pt.bitlen[VAR_7]);
     VAR_7 -= 2;
     VAR_5->lt.freq[VAR_7]++;
     VAR_5->lt.bitlen[VAR_8++] = VAR_7;
    } else if (VAR_7 == 0) {
     FUNC_1(VAR_6, VAR_5->pt.bitlen[VAR_7]);
     VAR_5->lt.bitlen[VAR_8++] = 0;
    } else {

     int VAR_10 = (VAR_7 == 1)?4:9;
     if (!FUNC_3(VAR_3, VAR_6,
          VAR_5->pt.bitlen[VAR_7] + VAR_10)) {
      if (VAR_4)
       goto failed;
      VAR_5->loop = VAR_8;
      VAR_5->state = 133;
      return (VAR_2);
     }
     FUNC_1(VAR_6, VAR_5->pt.bitlen[VAR_7]);
     VAR_7 = FUNC_0(VAR_6, VAR_10);
     FUNC_1(VAR_6, VAR_10);
     VAR_7 += (VAR_10 == 4)?3:20;
     if (VAR_8 + VAR_7 > VAR_5->lt.len_avail)
      goto failed;
     FUNC_10(&(VAR_5->lt.bitlen[VAR_8]), 0, VAR_7);
     VAR_8 += VAR_7;
    }
   }
   if (VAR_8 > VAR_5->lt.len_avail ||
       !FUNC_8(&(VAR_5->lt)))
    goto failed;

  case 132:




   VAR_5->pt.len_size = VAR_5->pos_pt_len_size;
   VAR_5->pt.len_bits = VAR_5->pos_pt_len_bits;
   VAR_5->reading_position = 1;
   VAR_5->state = 131;
   break;
  case 137:
   return (100);
  }
 }
failed:
 return (VAR_5->error = VAR_1);
}
