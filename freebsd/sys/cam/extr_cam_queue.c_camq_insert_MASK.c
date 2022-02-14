
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct camq {size_t entries; size_t array_size; TYPE_1__** queue_array; } ;
struct TYPE_4__ {size_t index; } ;
typedef TYPE_1__ cam_pinfo ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__**,size_t) ;

void
FUNC_2(struct camq *VAR_0, cam_pinfo *VAR_1)
{

 FUNC_0(VAR_0->entries < VAR_0->array_size,
     ("camq_insert: Attempt to insert into a full queue (%d >= %d)",
     VAR_0->entries, VAR_0->array_size));
 VAR_0->entries++;
 VAR_0->queue_array[VAR_0->entries] = VAR_1;
 VAR_1->index = VAR_0->entries;
 if (VAR_0->entries != 0)
  FUNC_1(VAR_0->queue_array, VAR_0->entries);
}
