
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nmreq_pools_info {int nr_buf_pool_objsize; int nr_buf_pool_objtotal; scalar_t__ nr_buf_pool_offset; int nr_ring_pool_objsize; int nr_ring_pool_objtotal; scalar_t__ nr_ring_pool_offset; int nr_if_pool_objsize; int nr_if_pool_objtotal; scalar_t__ nr_if_pool_offset; int nr_mem_id; int nr_memsize; } ;
struct netmap_mem_d {TYPE_1__* pools; } ;
struct TYPE_2__ {int _objsize; int objtotal; scalar_t__ memtotal; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*,int *,int *,int *) ;

int
FUNC_3(struct nmreq_pools_info *VAR_3,
    struct netmap_mem_d *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, &VAR_3->nr_memsize, ((void*)0),
     &VAR_3->nr_mem_id);
 if (VAR_5) {
  return VAR_5;
 }

 FUNC_0(VAR_4);
 VAR_3->nr_if_pool_offset = 0;
 VAR_3->nr_if_pool_objtotal = VAR_4->pools[VAR_1].objtotal;
 VAR_3->nr_if_pool_objsize = VAR_4->pools[VAR_1]._objsize;

 VAR_3->nr_ring_pool_offset = VAR_4->pools[VAR_1].memtotal;
 VAR_3->nr_ring_pool_objtotal = VAR_4->pools[VAR_2].objtotal;
 VAR_3->nr_ring_pool_objsize = VAR_4->pools[VAR_2]._objsize;

 VAR_3->nr_buf_pool_offset = VAR_4->pools[VAR_1].memtotal +
        VAR_4->pools[VAR_2].memtotal;
 VAR_3->nr_buf_pool_objtotal = VAR_4->pools[VAR_0].objtotal;
 VAR_3->nr_buf_pool_objsize = VAR_4->pools[VAR_0]._objsize;
 FUNC_1(VAR_4);

 return 0;
}
