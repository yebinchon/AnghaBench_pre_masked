
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* header; int * value; } ;
typedef TYPE_1__ hx509_pem_header ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char const*) ;

int
FUNC_3(hx509_pem_header **VAR_1,
       const char *VAR_2, const char *VAR_3)
{
    hx509_pem_header *VAR_4;

    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return VAR_0;
    VAR_4->header = FUNC_2(VAR_2);
    if (VAR_4->header == ((void*)0)) {
 FUNC_1(VAR_4);
 return VAR_0;
    }
    VAR_4->value = FUNC_2(VAR_3);
    if (VAR_4->value == ((void*)0)) {
 FUNC_1(VAR_4->header);
 FUNC_1(VAR_4);
 return VAR_0;
    }

    VAR_4->next = *VAR_1;
    *VAR_1 = VAR_4;

    return 0;
}
