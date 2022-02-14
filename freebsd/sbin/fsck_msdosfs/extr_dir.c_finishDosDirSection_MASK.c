
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dosDirEntry {struct dosDirEntry* parent; struct dosDirEntry* next; struct dosDirEntry* child; } ;
struct dirTodoNode {struct dirTodoNode* next; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dirTodoNode*) ;
 int FUNC_2 (struct dosDirEntry*) ;
 int * VAR_2 ;
 struct dirTodoNode* VAR_3 ;
 struct dosDirEntry* VAR_4 ;

void
FUNC_3(void)
{
 struct dirTodoNode *VAR_5, *VAR_6;
 struct dosDirEntry *VAR_7, *VAR_8;

 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_6) {
  VAR_6 = VAR_5->next;
  FUNC_1(VAR_5);
 }
 VAR_3 = ((void*)0);
 for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_8) {
  if ((VAR_8 = VAR_7->child) != ((void*)0)) {
   VAR_7->child = 0;
   continue;
  }
  if (!(VAR_8 = VAR_7->next))
   VAR_8 = VAR_7->parent;
  FUNC_2(VAR_7);
 }
 VAR_4 = VAR_2 = ((void*)0);
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 VAR_0 = ((void*)0);
 VAR_1 = ((void*)0);
}
