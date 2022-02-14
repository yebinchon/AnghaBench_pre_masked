
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int count; int capacity; char** args; } ;
typedef int newargs ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char**,int) ;
 char** FUNC_2 (int) ;

void
FUNC_3(struct arglist *VAR_1, char *VAR_2)
{
 char **VAR_3;
 int VAR_4;

 if (VAR_1->count >= VAR_1->capacity) {
  VAR_4 = VAR_1->capacity * 2;
  if (VAR_4 < 16)
   VAR_4 = 16;
  if (VAR_4 > VAR_0 / (int)sizeof(VAR_3[0]))
   FUNC_0("Too many entries in arglist");
  VAR_3 = FUNC_2(VAR_4 * sizeof(VAR_3[0]));
  FUNC_1(VAR_3, VAR_1->args, VAR_1->count * sizeof(VAR_3[0]));
  VAR_1->args = VAR_3;
  VAR_1->capacity = VAR_4;
 }
 VAR_1->args[VAR_1->count++] = VAR_2;
}
