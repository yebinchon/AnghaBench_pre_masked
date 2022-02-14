
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct doall_md {int arg; int (* fn ) (int const*,int ,int *,int ) ;} ;
struct TYPE_3__ {int name; int * data; scalar_t__ alias; } ;
typedef TYPE_1__ OBJ_NAME ;
typedef int EVP_MD ;


 int FUNC_0 (int const*,int ,int *,int ) ;
 int FUNC_1 (int const*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(const OBJ_NAME *VAR_0, void *VAR_1)
{
    struct doall_md *VAR_2 = VAR_1;
    if (VAR_0->alias)
        VAR_2->fn(((void*)0), VAR_0->name, VAR_0->data, VAR_2->arg);
    else
        VAR_2->fn((const EVP_MD *)VAR_0->data, VAR_0->name, ((void*)0), VAR_2->arg);
}
