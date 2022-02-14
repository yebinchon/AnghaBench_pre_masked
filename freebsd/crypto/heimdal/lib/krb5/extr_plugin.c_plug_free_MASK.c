
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plug {int ctx; struct common_plugin_method* dataptr; } ;
struct common_plugin_method {int (* fini ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    struct plug *VAR_1 = VAR_0;
    if (VAR_1->dataptr) {
 struct common_plugin_method *VAR_2 = VAR_1->dataptr;
 VAR_2->fini(VAR_1->ctx);
    }
}
