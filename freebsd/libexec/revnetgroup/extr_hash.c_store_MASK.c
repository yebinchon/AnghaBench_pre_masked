
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct group_entry {struct group_entry* next; void* data; void* key; } ;


 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (char*) ;

void
FUNC_3(struct group_entry *VAR_0[], char *VAR_1, char *VAR_2)
{
 struct group_entry *VAR_3;
 u_int32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 VAR_3 = (struct group_entry *)FUNC_1(sizeof(struct group_entry));
 VAR_3->key = FUNC_2(VAR_1);
 VAR_3->data = FUNC_2(VAR_2);
 VAR_3->next = VAR_0[VAR_4];
 VAR_0[VAR_4] = VAR_3;

 return;
}
