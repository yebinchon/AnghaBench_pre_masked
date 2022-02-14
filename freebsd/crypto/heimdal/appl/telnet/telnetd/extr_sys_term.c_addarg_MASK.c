
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_val {int size; int argc; int ** argv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct arg_val *VAR_1, const char *VAR_2)
{
    if(VAR_1->size <= VAR_1->argc+1) {
 VAR_1->argv = FUNC_1(VAR_1->argv, sizeof(char*) * (VAR_1->size + 10));
 if (VAR_1->argv == ((void*)0))
     FUNC_0 (VAR_0, "realloc: out of memory");
 VAR_1->size+=10;
    }
    if((VAR_1->argv[VAR_1->argc++] = FUNC_2(VAR_2)) == ((void*)0))
 FUNC_0 (VAR_0, "strdup: out of memory");
    VAR_1->argv[VAR_1->argc] = ((void*)0);
}
