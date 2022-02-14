
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {char* next; } ;
struct alloc_cache {int num_reg_blocks; struct regional* reg_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct regional* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct alloc_cache* VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 struct regional* VAR_4;
 for(VAR_3=0; VAR_3<VAR_2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0);
  if(!VAR_4) {
   FUNC_0("prealloc blocks: out of memory");
   return;
  }
  VAR_4->next = (char*)VAR_1->reg_list;
  VAR_1->reg_list = VAR_4;
  VAR_1->num_reg_blocks ++;
 }
}
