
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_struct {void (* func ) (unsigned long) ;unsigned long data; int count; scalar_t__ state; int * next; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct tasklet_struct *VAR_0,
    void (*VAR_1)(unsigned long), unsigned long VAR_2)
{
 VAR_0->next = ((void*)0);
 VAR_0->state = 0;
 FUNC_0(&VAR_0->count, 0);
 VAR_0->func = VAR_1;
 VAR_0->data = VAR_2;
}
