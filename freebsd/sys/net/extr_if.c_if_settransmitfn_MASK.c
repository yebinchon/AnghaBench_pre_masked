
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_transmit; } ;
typedef int if_transmit_fn_t ;
typedef scalar_t__ if_t ;



void
FUNC_0(if_t VAR_0, if_transmit_fn_t VAR_1)
{
 ((struct ifnet *)VAR_0)->if_transmit = VAR_1;
}
