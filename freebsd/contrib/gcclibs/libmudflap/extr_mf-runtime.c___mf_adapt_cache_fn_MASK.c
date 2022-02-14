
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tree_stats {double total_weight; double weighted_size; int** weighted_address_bits; int live_obj_count; int total_size; int obj_count; } ;
typedef TYPE_1__* mfsplay_tree_node ;
struct TYPE_5__ {uintptr_t high; uintptr_t low; int liveness; scalar_t__ write_count; scalar_t__ read_count; } ;
typedef TYPE_2__ __mf_object_t ;
struct TYPE_4__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (mfsplay_tree_node VAR_0, void *VAR_1)
{
  __mf_object_t *VAR_2 = (__mf_object_t *) VAR_0->value;
  struct tree_stats *VAR_3 = (struct tree_stats *) VAR_1;

  FUNC_0 (VAR_2 != ((void*)0) && VAR_3 != ((void*)0));


  if (VAR_2->read_count + VAR_2->write_count)
    {
      VAR_3->obj_count ++;
      VAR_3->total_size += (VAR_2->high - VAR_2->low + 1);

      if (VAR_2->liveness)
        {
          unsigned VAR_4;
          uintptr_t VAR_5;




          VAR_3->live_obj_count ++;
          VAR_3->total_weight += (double) VAR_2->liveness;
          VAR_3->weighted_size +=
            (double) (VAR_2->high - VAR_2->low + 1) *
            (double) VAR_2->liveness;

          VAR_5 = VAR_2->low;
          for (VAR_4=0; VAR_4<sizeof(uintptr_t) * 8; VAR_4++)
            {
              unsigned VAR_6 = VAR_5 & 1;
              VAR_3->weighted_address_bits[VAR_4][VAR_6] += VAR_2->liveness;
              VAR_5 = VAR_5 >> 1;
            }


          VAR_2->liveness >>= 1;
        }
    }

  return 0;
}
