
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct netmap_obj_pool {int objtotal; } ;
struct netmap_mem_d {struct netmap_obj_pool* pools; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct netmap_obj_pool*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct netmap_mem_d *VAR_1, uint32_t VAR_2)
{
 struct netmap_obj_pool *VAR_3 = &VAR_1->pools[VAR_0];

 if (VAR_2 < 2 || VAR_2 >= VAR_3->objtotal) {
  FUNC_1("Cannot free buf#%d: should be in [2, %d[", VAR_2, VAR_3->objtotal);
  return;
 }
 FUNC_0(VAR_3, VAR_2);
}
