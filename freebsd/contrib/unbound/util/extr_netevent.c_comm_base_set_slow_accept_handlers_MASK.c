
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_base {void (* stop_accept ) (void*) ;void (* start_accept ) (void*) ;void* cb_arg; } ;



void FUNC_0(struct comm_base* VAR_0,
 void (*VAR_1)(void*), void (*VAR_2)(void*), void* VAR_3)
{
 VAR_0->stop_accept = VAR_1;
 VAR_0->start_accept = VAR_2;
 VAR_0->cb_arg = VAR_3;
}
