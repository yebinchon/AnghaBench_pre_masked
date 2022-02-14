
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lzx_stream {struct lzx_dec* ds; } ;
struct TYPE_3__ {scalar_t__ cache_avail; scalar_t__ cache_buffer; } ;
struct lzx_dec {int error; int w_size; int w_mask; int r0; int r1; int r2; int lt; int mt; int pt; int at; TYPE_1__ br; scalar_t__ state; scalar_t__ w_pos; TYPE_2__* pos_tbl; TYPE_2__* w_buff; } ;
struct TYPE_4__ {int base; int footer_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lzx_dec* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 void* FUNC_4 (int) ;
 int* VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct lzx_stream *VAR_6, int VAR_7)
{
 struct lzx_dec *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14[18];

 if (VAR_6->ds == ((void*)0)) {
  VAR_6->ds = FUNC_0(1, sizeof(*VAR_6->ds));
  if (VAR_6->ds == ((void*)0))
   return (VAR_1);
 }
 VAR_8 = VAR_6->ds;
 VAR_8->error = VAR_0;


 if (VAR_7 < VAR_3 || VAR_7 > VAR_4)
  return (VAR_0);

 VAR_8->error = VAR_1;




 VAR_10 = VAR_8->w_size;
 VAR_11 = VAR_5[VAR_7 - VAR_3];
 VAR_8->w_size = 1U << VAR_7;
 VAR_8->w_mask = VAR_8->w_size -1;
 if (VAR_8->w_buff == ((void*)0) || VAR_10 != VAR_8->w_size) {
  FUNC_1(VAR_8->w_buff);
  VAR_8->w_buff = FUNC_4(VAR_8->w_size);
  if (VAR_8->w_buff == ((void*)0))
   return (VAR_1);
  FUNC_1(VAR_8->pos_tbl);
  VAR_8->pos_tbl = FUNC_4(sizeof(VAR_8->pos_tbl[0]) * VAR_11);
  if (VAR_8->pos_tbl == ((void*)0))
   return (VAR_1);
  FUNC_2(&(VAR_8->mt));
 }

 for (VAR_13 = 0; VAR_13 < 18; VAR_13++)
  VAR_14[VAR_13] = 1 << VAR_13;
 VAR_12 = VAR_13 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  int VAR_15;
  if (VAR_13 == 0)
   VAR_12 = VAR_9;
  else
   VAR_12 += VAR_14[VAR_13];
  if (VAR_13 < 17) {
   VAR_13 = -2;
   for (VAR_15 = VAR_12; VAR_15; VAR_15 >>= 1)
    VAR_13++;
   if (VAR_13 <= 0)
    VAR_13 = 0;
  }
  VAR_8->pos_tbl[VAR_9].base = VAR_12;
  VAR_8->pos_tbl[VAR_9].footer_bits = VAR_13;
 }

 VAR_8->w_pos = 0;
 VAR_8->state = 0;
 VAR_8->br.cache_buffer = 0;
 VAR_8->br.cache_avail = 0;
 VAR_8->r0 = VAR_8->r1 = VAR_8->r2 = 1;


 if (FUNC_3(&(VAR_8->at), 8, 8) != VAR_2)
  return (VAR_1);


 if (FUNC_3(&(VAR_8->pt), 20, 10) != VAR_2)
  return (VAR_1);


 if (FUNC_3(&(VAR_8->mt), 256+(VAR_11<<3), 16)
     != VAR_2)
  return (VAR_1);


 if (FUNC_3(&(VAR_8->lt), 249, 16) != VAR_2)
  return (VAR_1);

 VAR_8->error = 0;

 return (VAR_2);
}
