
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plug {int ctx; int dataptr; } ;
struct iter_ctx {scalar_t__ ret; scalar_t__ (* func ) (int ,int ,int ,int ) ;int userctx; int context; } ;
typedef struct plug* heim_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(heim_object_t VAR_1, void *VAR_2)
{
    struct plug *VAR_3 = VAR_1;
    struct iter_ctx *VAR_4 = VAR_2;

    if (VAR_4->ret != VAR_0)
 return;

    VAR_4->ret = VAR_4->func(VAR_4->context, VAR_3->dataptr, VAR_3->ctx, VAR_4->userctx);
}
