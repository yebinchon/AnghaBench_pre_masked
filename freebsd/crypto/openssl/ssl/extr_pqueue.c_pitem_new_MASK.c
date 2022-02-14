
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; void* data; int priority; } ;
typedef TYPE_1__ pitem ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;

pitem *FUNC_3(unsigned char *VAR_2, void *VAR_3)
{
    pitem *VAR_4 = FUNC_0(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }

    FUNC_2(VAR_4->priority, VAR_2, sizeof(VAR_4->priority));
    VAR_4->data = VAR_3;
    VAR_4->next = ((void*)0);
    return VAR_4;
}
