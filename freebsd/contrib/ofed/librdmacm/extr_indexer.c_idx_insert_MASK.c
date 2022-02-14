
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union idx_entry {int next; void* item; } ;
struct indexer {int free_list; union idx_entry** array; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct indexer*) ;

int FUNC_3(struct indexer *VAR_0, void *VAR_1)
{
 union idx_entry *VAR_2;
 int VAR_3;

 if ((VAR_3 = VAR_0->free_list) == 0) {
  if ((VAR_3 = FUNC_2(VAR_0)) <= 0)
   return VAR_3;
 }

 VAR_2 = VAR_0->array[FUNC_0(VAR_3)];
 VAR_0->free_list = VAR_2[FUNC_1(VAR_3)].next;
 VAR_2[FUNC_1(VAR_3)].item = VAR_1;
 return VAR_3;
}
