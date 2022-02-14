
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbufq {int * tail; int head; } ;



__attribute__((used)) static void
FUNC_0(struct mbufq *VAR_0, int VAR_1)
{

 VAR_0->head = *(VAR_0->tail = ((void*)0));
}
