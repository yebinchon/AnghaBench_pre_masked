
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lzh_stream {struct lzh_dec* ds; } ;
struct TYPE_4__ {int len_bits; } ;
struct TYPE_3__ {scalar_t__ cache_avail; scalar_t__ cache_buffer; } ;
struct lzh_dec {int error; unsigned int w_size; int w_mask; int pos_pt_len_size; int pos_pt_len_bits; int literal_pt_len_bits; TYPE_2__ pt; TYPE_2__ lt; TYPE_1__ br; int literal_pt_len_size; scalar_t__ state; scalar_t__ w_pos; int * w_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lzh_dec* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int
FUNC_4(struct lzh_stream *VAR_5, const char *VAR_6)
{
 struct lzh_dec *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5->ds == ((void*)0)) {
  VAR_5->ds = FUNC_0(1, sizeof(*VAR_5->ds));
  if (VAR_5->ds == ((void*)0))
   return (VAR_1);
 }
 VAR_7 = VAR_5->ds;
 VAR_7->error = VAR_0;
 if (VAR_6 == ((void*)0) || VAR_6[0] != 'l' || VAR_6[1] != 'h')
  return (VAR_0);
 switch (VAR_6[2]) {
 case '5':
  VAR_8 = 13;
  break;
 case '6':
  VAR_8 = 15;
  break;
 case '7':
  VAR_8 = 16;
  break;
 default:
  return (VAR_0);
 }
 VAR_7->error = VAR_1;


 VAR_7->w_size = 1U << 17;
 VAR_7->w_mask = VAR_7->w_size -1;
 if (VAR_7->w_buff == ((void*)0)) {
  VAR_7->w_buff = FUNC_2(VAR_7->w_size);
  if (VAR_7->w_buff == ((void*)0))
   return (VAR_1);
 }
 VAR_9 = 1U << VAR_8;
 FUNC_3(VAR_7->w_buff + VAR_7->w_size - VAR_9, 0x20, VAR_9);
 VAR_7->w_pos = 0;
 VAR_7->state = 0;
 VAR_7->pos_pt_len_size = VAR_8 + 1;
 VAR_7->pos_pt_len_bits = (VAR_8 == 15 || VAR_8 == 16)? 5: 4;
 VAR_7->literal_pt_len_size = VAR_4;
 VAR_7->literal_pt_len_bits = 5;
 VAR_7->br.cache_buffer = 0;
 VAR_7->br.cache_avail = 0;

 if (FUNC_1(&(VAR_7->lt), VAR_3, 16)
     != VAR_2)
  return (VAR_1);
 VAR_7->lt.len_bits = 9;
 if (FUNC_1(&(VAR_7->pt), VAR_4, 16)
     != VAR_2)
  return (VAR_1);
 VAR_7->error = 0;

 return (VAR_2);
}
