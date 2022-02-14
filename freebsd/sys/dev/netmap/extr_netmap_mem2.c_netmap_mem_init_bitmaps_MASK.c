
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_obj_pool {int objfree; unsigned int* bitmap; int name; } ;
struct netmap_mem_d {struct netmap_obj_pool* pools; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netmap_obj_pool*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct netmap_mem_d *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct netmap_obj_pool *VAR_6 = &VAR_3->pools[VAR_4];

  VAR_5 = FUNC_0(VAR_6);
  if (VAR_5)
   return VAR_5;
 }




 if (VAR_3->pools[VAR_1].objfree < 2) {
  FUNC_1("%s: not enough buffers", VAR_3->pools[VAR_1].name);
  return VAR_0;
 }

 VAR_3->pools[VAR_1].objfree -= 2;
 if (VAR_3->pools[VAR_1].bitmap) {




  VAR_3->pools[VAR_1].bitmap[0] = ~3U;
 }
 return 0;
}
