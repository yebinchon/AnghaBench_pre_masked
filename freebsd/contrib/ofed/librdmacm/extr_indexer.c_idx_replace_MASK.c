
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union idx_entry {void* item; } ;
struct indexer {union idx_entry** array; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

void FUNC_2(struct indexer *VAR_0, int VAR_1, void *VAR_2)
{
 union idx_entry *VAR_3;

 VAR_3 = VAR_0->array[FUNC_0(VAR_1)];
 VAR_3[FUNC_1(VAR_1)].item = VAR_2;
}
