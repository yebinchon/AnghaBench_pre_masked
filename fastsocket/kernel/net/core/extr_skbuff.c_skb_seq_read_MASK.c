
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct skb_seq_state {unsigned int lower_offset; unsigned int upper_offset; unsigned int stepped_offset; size_t frag_idx; TYPE_3__* cur_skb; TYPE_3__* root_skb; int * frag_data; } ;
struct TYPE_7__ {unsigned int size; int page_offset; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_9__ {struct TYPE_9__* next; int * data; } ;
struct TYPE_8__ {size_t nr_frags; TYPE_3__* frag_list; TYPE_1__* frags; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 unsigned int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;

unsigned int FUNC_6(unsigned int VAR_0, const u8 **VAR_1,
     struct skb_seq_state *VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_0 + VAR_2->lower_offset;
 skb_frag_t *VAR_5;

 if (FUNC_5(VAR_4 >= VAR_2->upper_offset))
  return 0;

next_skb:
 VAR_3 = FUNC_3(VAR_2->cur_skb) + VAR_2->stepped_offset;

 if (VAR_4 < VAR_3 && !VAR_2->frag_data) {
  *VAR_1 = VAR_2->cur_skb->data + (VAR_4 - VAR_2->stepped_offset);
  return VAR_3 - VAR_4;
 }

 if (VAR_2->frag_idx == 0 && !VAR_2->frag_data)
  VAR_2->stepped_offset += FUNC_3(VAR_2->cur_skb);

 while (VAR_2->frag_idx < FUNC_4(VAR_2->cur_skb)->nr_frags) {
  VAR_5 = &FUNC_4(VAR_2->cur_skb)->frags[VAR_2->frag_idx];
  VAR_3 = VAR_5->size + VAR_2->stepped_offset;

  if (VAR_4 < VAR_3) {
   if (!VAR_2->frag_data)
    VAR_2->frag_data = FUNC_0(VAR_5);

   *VAR_1 = (u8 *) VAR_2->frag_data + VAR_5->page_offset +
    (VAR_4 - VAR_2->stepped_offset);

   return VAR_3 - VAR_4;
  }

  if (VAR_2->frag_data) {
   FUNC_1(VAR_2->frag_data);
   VAR_2->frag_data = ((void*)0);
  }

  VAR_2->frag_idx++;
  VAR_2->stepped_offset += VAR_5->size;
 }

 if (VAR_2->frag_data) {
  FUNC_1(VAR_2->frag_data);
  VAR_2->frag_data = ((void*)0);
 }

 if (VAR_2->root_skb == VAR_2->cur_skb && FUNC_2(VAR_2->root_skb)) {
  VAR_2->cur_skb = FUNC_4(VAR_2->root_skb)->frag_list;
  VAR_2->frag_idx = 0;
  goto next_skb;
 } else if (VAR_2->cur_skb->next) {
  VAR_2->cur_skb = VAR_2->cur_skb->next;
  VAR_2->frag_idx = 0;
  goto next_skb;
 }

 return 0;
}
