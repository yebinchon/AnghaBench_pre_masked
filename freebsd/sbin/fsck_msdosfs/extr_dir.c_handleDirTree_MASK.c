
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fatEntry {int dummy; } ;
struct dosDirEntry {int dummy; } ;
struct dirTodoNode {struct dirTodoNode* next; struct dosDirEntry* dir; } ;
struct bootblock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dirTodoNode*) ;
 struct dirTodoNode* VAR_1 ;
 int FUNC_1 (int,struct bootblock*,struct fatEntry*,struct dosDirEntry*) ;
 struct dosDirEntry* VAR_2 ;

int
FUNC_2(int VAR_3, struct bootblock *VAR_4, struct fatEntry *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);
 if (VAR_6 & VAR_0)
  return VAR_0;




 while (VAR_1) {
  struct dosDirEntry *VAR_7 = VAR_1->dir;
  struct dirTodoNode *VAR_8 = VAR_1->next;





  FUNC_0(VAR_1);
  VAR_1 = VAR_8;




  VAR_6 |= FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
  if (VAR_6 & VAR_0)
   return VAR_0;
 }

 return VAR_6;
}
