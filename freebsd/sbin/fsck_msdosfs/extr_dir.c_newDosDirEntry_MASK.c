
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dosDirEntry {struct dosDirEntry* next; } ;


 struct dosDirEntry* VAR_0 ;
 struct dosDirEntry* FUNC_0 (int) ;

__attribute__((used)) static struct dosDirEntry *
FUNC_1(void)
{
 struct dosDirEntry *VAR_1;

 if (!(VAR_1 = VAR_0)) {
  if (!(VAR_1 = FUNC_0(sizeof *VAR_1)))
   return 0;
 } else
  VAR_0 = VAR_1->next;
 return VAR_1;
}
