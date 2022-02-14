
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Buf {int nelts; scalar_t__ elts; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*) ;

struct Buf *FUNC_1(struct Buf * VAR_0, FILE* VAR_1)
{
    int VAR_2;

    if(!VAR_0 || !VAR_1)
        return VAR_0;

    for (VAR_2=0; VAR_2 < VAR_0->nelts; VAR_2++){
        const char * VAR_3 = ((char**)VAR_0->elts)[VAR_2];
        if(VAR_3)
            FUNC_0(VAR_1, "%s", VAR_3);
    }
    return VAR_0;
}
