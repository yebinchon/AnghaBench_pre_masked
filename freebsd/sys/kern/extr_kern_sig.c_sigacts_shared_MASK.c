
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_refcnt; } ;



int
FUNC_0(struct sigacts *VAR_0)
{

 return (VAR_0->ps_refcnt > 1);
}
