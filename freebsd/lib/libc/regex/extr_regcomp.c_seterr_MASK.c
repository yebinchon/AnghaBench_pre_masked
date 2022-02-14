
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int error; void* end; void* next; } ;


 void* VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct parse *VAR_1, int VAR_2)
{
 if (VAR_1->error == 0)
  VAR_1->error = VAR_2;
 VAR_1->next = VAR_0;
 VAR_1->end = VAR_0;
 return(0);
}
