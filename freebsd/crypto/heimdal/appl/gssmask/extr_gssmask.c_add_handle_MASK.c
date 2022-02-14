
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle {int type; scalar_t__ idx; struct handle* next; void* ptr; } ;
struct client {struct handle* handles; scalar_t__ nHandle; } ;
typedef scalar_t__ int32_t ;
typedef enum handle_type { ____Placeholder_handle_type } handle_type ;


 struct handle* FUNC_0 (int,int) ;

__attribute__((used)) static int32_t
FUNC_1(struct client *VAR_0, enum handle_type VAR_1, void *VAR_2)
{
    struct handle *VAR_3;

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));

    VAR_3->idx = ++VAR_0->nHandle;
    VAR_3->type = VAR_1;
    VAR_3->ptr = VAR_2;
    VAR_3->next = VAR_0->handles;
    VAR_0->handles = VAR_3;

    return VAR_3->idx;
}
