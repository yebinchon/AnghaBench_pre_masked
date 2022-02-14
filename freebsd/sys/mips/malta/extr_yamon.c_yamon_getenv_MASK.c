
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; int * name; } ;
typedef TYPE_1__ yamon_env_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (char*,int *) ;

char *
FUNC_1(char *VAR_1)
{
 char *VAR_2;
 yamon_env_t *VAR_3;

 VAR_2 = ((void*)0);
 for (VAR_3 = *VAR_0; VAR_3->name != ((void*)0); ++VAR_3) {
     if (!FUNC_0(VAR_1, VAR_3->name)) {
  VAR_2 = VAR_3->value;
  break;
     }
 }

 return (VAR_2);
}
