
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf {void* base; void* ptr; void* limit; } ;



__attribute__((used)) static void FUNC_0(struct inbuf *VAR_0, void *VAR_1, void *VAR_2)
{
 VAR_0->base = VAR_1;
 VAR_0->limit = VAR_2;
 VAR_0->ptr = VAR_0->base;
}
