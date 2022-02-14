
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {void (* cleanup ) (void*) ;void* cleanup_arg; } ;



void
FUNC_0(struct alloc_cache* VAR_0, void (*VAR_1)(void*),
        void* VAR_2)
{
 VAR_0->cleanup = VAR_1;
 VAR_0->cleanup_arg = VAR_2;
}
