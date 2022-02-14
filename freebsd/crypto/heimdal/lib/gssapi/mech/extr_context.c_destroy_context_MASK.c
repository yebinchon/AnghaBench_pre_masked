
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_thread_ctx {int min_error; int maj_error; } ;
typedef int OM_uint32 ;


 int FUNC_0 (struct mg_thread_ctx*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct mg_thread_ctx *VAR_1 = VAR_0;
    OM_uint32 VAR_2;

    if (VAR_1 == ((void*)0))
 return;

    FUNC_1(&VAR_2, &VAR_1->maj_error);
    FUNC_1(&VAR_2, &VAR_1->min_error);
    FUNC_0(VAR_1);
}
