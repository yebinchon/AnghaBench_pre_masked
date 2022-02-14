
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* nextPtr; void* value; void* key; } ;
typedef TYPE_1__ list_item_t ;


 TYPE_1__* FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static list_item_t *
FUNC_2(list_item_t **VAR_0, const char *VAR_1, const char *VAR_2)
{
    list_item_t *VAR_3 = FUNC_0(sizeof(list_item_t));
    if (VAR_3) {
 VAR_3->key = FUNC_1(VAR_1);
 VAR_3->value = FUNC_1(VAR_2);
 VAR_3->nextPtr = ((void*)0);

 while(*VAR_0) {
     VAR_0 = &(*VAR_0)->nextPtr;
 }
 *VAR_0 = VAR_3;
    }
    return VAR_3;
}
