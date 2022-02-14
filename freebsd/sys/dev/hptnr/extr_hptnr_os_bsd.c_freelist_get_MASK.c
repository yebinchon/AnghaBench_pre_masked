
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freelist {scalar_t__ count; void* head; } ;


 int FUNC_0 (void*) ;

void *FUNC_1(struct freelist *VAR_0)
{
    void * VAR_1;
    if (VAR_0->count) {
        FUNC_0(VAR_0->head);
        VAR_1 = VAR_0->head;
        VAR_0->head = *(void **)VAR_1;
        VAR_0->count--;
        return VAR_1;
    }
    return 0;
}
