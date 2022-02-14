
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {scalar_t__ mask; int * data; scalar_t__ esize; scalar_t__ out; scalar_t__ in; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct __kfifo *VAR_0)
{
 FUNC_0(VAR_0->data);
 VAR_0->in = 0;
 VAR_0->out = 0;
 VAR_0->esize = 0;
 VAR_0->data = ((void*)0);
 VAR_0->mask = 0;
}
