
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_qflush; } ;
typedef scalar_t__ if_t ;
typedef int if_qflush_fn_t ;



void FUNC_0(if_t VAR_0, if_qflush_fn_t VAR_1)
{
 ((struct ifnet *)VAR_0)->if_qflush = VAR_1;

}
