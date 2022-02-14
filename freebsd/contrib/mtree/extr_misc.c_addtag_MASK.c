
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; char** list; } ;
typedef TYPE_1__ slist_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,int) ;

void
FUNC_2(slist_t *VAR_1, char *VAR_2)
{



 if ((VAR_1->count % 20) == 0) {
  char **VAR_3;

  VAR_3 = (char **)FUNC_1(VAR_1->list, (VAR_1->count + 20)
      * sizeof(char *));
  if (VAR_3 == ((void*)0))
   FUNC_0("memory allocation error");
  VAR_1->list = VAR_3;
 }
 VAR_1->list[VAR_1->count] = VAR_2;
 VAR_1->count++;
}
