
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct netmap_obj_pool {int objtotal; } ;
struct netmap_mem_d {struct netmap_obj_pool* pools; } ;
struct TYPE_2__ {struct lut_entry* lut; } ;
struct netmap_adapter {struct netmap_mem_d* nm_mem; TYPE_1__ na_lut; } ;
struct lut_entry {int* vaddr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct netmap_obj_pool*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(struct netmap_adapter *VAR_3, uint32_t VAR_4)
{
 struct lut_entry *VAR_5 = VAR_3->na_lut.lut;
 struct netmap_mem_d *VAR_6 = VAR_3->nm_mem;
 struct netmap_obj_pool *VAR_7 = &VAR_6->pools[VAR_0];
 uint32_t VAR_8, VAR_9, *VAR_10;

 FUNC_1("freeing the extra list");
 for (VAR_8 = 0; VAR_4 >=2 && VAR_4 < VAR_7->objtotal; VAR_8++) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_5[VAR_4].vaddr;
  VAR_4 = *VAR_10;
  *VAR_10 = 0;
  if (FUNC_0(VAR_7, VAR_9))
   break;
 }
 if (VAR_4 != 0)
  FUNC_2("breaking with head %d", VAR_4);
 if (VAR_2 & VAR_1)
  FUNC_3("freed %d buffers", VAR_8);
}
