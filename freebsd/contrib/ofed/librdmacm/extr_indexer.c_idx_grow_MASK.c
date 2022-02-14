
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union idx_entry {int next; } ;
struct indexer {size_t size; int free_list; union idx_entry** array; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union idx_entry* FUNC_0 (int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct indexer *VAR_5)
{
 union idx_entry *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5->size >= VAR_1)
  goto nomem;

 VAR_5->array[VAR_5->size] = FUNC_0(VAR_3, sizeof(union idx_entry));
 if (!VAR_5->array[VAR_5->size])
  goto nomem;

 VAR_6 = VAR_5->array[VAR_5->size];
 VAR_8 = VAR_5->size << VAR_2;
 VAR_6[VAR_3 - 1].next = VAR_5->free_list;

 for (VAR_7 = VAR_3 - 2; VAR_7 >= 0; VAR_7--)
  VAR_6[VAR_7].next = VAR_8 + VAR_7 + 1;


 if (VAR_8 == 0)
  VAR_8++;
 VAR_5->free_list = VAR_8;
 VAR_5->size++;
 return VAR_8;

nomem:
 VAR_4 = VAR_0;
 return -1;
}
