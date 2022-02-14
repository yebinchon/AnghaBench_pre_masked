
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_string {char* s; struct alloc_string* next; } ;


 struct alloc_string* VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1 (int VAR_1)
{
  struct alloc_string *VAR_2;

  VAR_2 = FUNC_0 (sizeof *VAR_2);
  VAR_2->s = FUNC_0 (VAR_1);

  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;

  return VAR_2->s;
}
