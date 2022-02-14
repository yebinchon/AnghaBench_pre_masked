
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
struct netmap_slot {scalar_t__ flags; int len; int buf_idx; } ;
struct netmap_obj_pool {int _objsize; } ;
struct netmap_mem_d {struct netmap_obj_pool* pools; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct netmap_mem_d *VAR_1, struct netmap_slot *VAR_2, u_int VAR_3, uint32_t VAR_4)
{
 struct netmap_obj_pool *VAR_5 = &VAR_1->pools[VAR_0];
 u_int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_2[VAR_6].buf_idx = VAR_4;
  VAR_2[VAR_6].len = VAR_5->_objsize;
  VAR_2[VAR_6].flags = 0;
 }
}
