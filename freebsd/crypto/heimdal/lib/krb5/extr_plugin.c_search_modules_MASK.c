
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugin2 {int names; int * dsohandle; } ;
struct plug {struct common_plugin_method* dataptr; int ctx; } ;
struct iter_ctx {scalar_t__ min_version; int result; int n; int context; int name; } ;
struct common_plugin_method {int (* init ) (int ,int *) ;scalar_t__ version; } ;
typedef struct plugin2* heim_object_t ;


 struct common_plugin_method* FUNC_0 (int *,int ) ;
 struct plug* FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,struct plug*) ;
 int FUNC_3 (int ,int ,struct plug*) ;
 struct plug* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct plug*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, heim_object_t VAR_2, heim_object_t VAR_3)
{
    struct iter_ctx *VAR_4 = VAR_1;
    struct plugin2 *VAR_5 = VAR_3;
    struct plug *VAR_6 = FUNC_4(VAR_5->names, VAR_4->n);
    struct common_plugin_method *VAR_7;

    if (VAR_6 == ((void*)0)) {
 if (VAR_5->dsohandle == ((void*)0))
     return;

 VAR_6 = FUNC_1(sizeof(*VAR_6), "struct-plug", VAR_0);

 VAR_7 = VAR_6->dataptr = FUNC_0(VAR_5->dsohandle, VAR_4->name);
 if (VAR_7) {
     int VAR_8;

     VAR_8 = VAR_7->init(VAR_4->context, &VAR_6->ctx);
     if (VAR_8)
  VAR_7 = VAR_6->dataptr = ((void*)0);
 }
 FUNC_3(VAR_5->names, VAR_4->n, VAR_6);
    } else {
 VAR_7 = VAR_6->dataptr;
    }

    if (VAR_7 && VAR_7->version >= VAR_4->min_version)
 FUNC_2(VAR_4->result, VAR_6);

    FUNC_5(VAR_6);
}
