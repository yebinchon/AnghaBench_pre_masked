
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
struct netmap_slot {int buf_idx; scalar_t__ ptr; scalar_t__ flags; int len; } ;
struct netmap_obj_pool {int objfree; int name; int _objsize; } ;
struct netmap_mem_d {struct netmap_obj_pool* pools; } ;
typedef int slot ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netmap_slot*,size_t) ;
 void* FUNC_1 (struct netmap_mem_d*,int *,int *) ;
 int FUNC_2 (struct netmap_obj_pool*,int ) ;
 int FUNC_3 (char*,int ,size_t,int ,int ) ;
 int FUNC_4 (char*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_5(struct netmap_mem_d *VAR_2, struct netmap_slot *VAR_3, u_int VAR_4)
{
 struct netmap_obj_pool *VAR_5 = &VAR_2->pools[VAR_1];
 u_int VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  void *VAR_9 = FUNC_1(VAR_2, &VAR_7, &VAR_8);
  if (VAR_9 == ((void*)0)) {
   FUNC_4("no more buffers after %d of %d", VAR_6, VAR_4);
   goto cleanup;
  }
  VAR_3[VAR_6].buf_idx = VAR_8;
  VAR_3[VAR_6].len = VAR_5->_objsize;
  VAR_3[VAR_6].flags = 0;
  VAR_3[VAR_6].ptr = 0;
 }

 FUNC_3("%s: allocated %d buffers, %d available, first at %d", VAR_5->name, VAR_4, VAR_5->objfree, VAR_7);
 return (0);

cleanup:
 while (VAR_6 > 0) {
  VAR_6--;
  FUNC_2(VAR_5, VAR_3[VAR_6].buf_idx);
 }
 FUNC_0(VAR_3, VAR_4 * sizeof(VAR_3[0]));
 return (VAR_0);
}
