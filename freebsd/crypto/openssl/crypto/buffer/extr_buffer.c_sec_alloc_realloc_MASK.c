
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int length; } ;
typedef TYPE_1__ BUF_MEM ;


 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static char *FUNC_3(BUF_MEM *VAR_0, size_t VAR_1)
{
    char *VAR_2;

    VAR_2 = FUNC_1(VAR_1);
    if (VAR_0->data != ((void*)0)) {
        if (VAR_2 != ((void*)0)) {
            FUNC_2(VAR_2, VAR_0->data, VAR_0->length);
            FUNC_0(VAR_0->data, VAR_0->length);
            VAR_0->data = ((void*)0);
        }
    }
    return VAR_2;
}
