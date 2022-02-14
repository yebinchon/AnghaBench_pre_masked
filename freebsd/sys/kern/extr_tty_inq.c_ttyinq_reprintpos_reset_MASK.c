
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq {int ti_startblock; int ti_reprintblock; int ti_linestart; int ti_reprint; } ;



void
FUNC_0(struct ttyinq *VAR_0)
{

 VAR_0->ti_reprint = VAR_0->ti_linestart;
 VAR_0->ti_reprintblock = VAR_0->ti_startblock;
}
