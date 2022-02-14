
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_thread_ctx {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mg_thread_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,struct mg_thread_ctx*,int) ;
 struct mg_thread_ctx* FUNC_5 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct mg_thread_ctx*) ;

__attribute__((used)) static struct mg_thread_ctx *
FUNC_7(void)
{
    struct mg_thread_ctx *VAR_4;
    int VAR_5 = 0;

    FUNC_0(&VAR_1);

    if (!VAR_2) {
 FUNC_3(&VAR_0, VAR_3, VAR_5);
 if (VAR_5) {
     FUNC_1(&VAR_1);
     return ((void*)0);
 }
 VAR_2 = 1;
    }
    FUNC_1(&VAR_1);

    VAR_4 = FUNC_2(VAR_0);
    if (VAR_4 == ((void*)0)) {

 VAR_4 = FUNC_5(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
     return ((void*)0);
 FUNC_4(VAR_0, VAR_4, VAR_5);
 if (VAR_5) {
     FUNC_6(VAR_4);
     return ((void*)0);
 }
    }
    return VAR_4;
}
