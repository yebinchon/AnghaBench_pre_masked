
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq {int ti_lastblock; int ti_reprintblock; int ti_startblock; int ti_end; int ti_reprint; int ti_linestart; } ;



void
FUNC_0(struct ttyinq *VAR_0)
{

 VAR_0->ti_linestart = VAR_0->ti_reprint = VAR_0->ti_end;
 VAR_0->ti_startblock = VAR_0->ti_reprintblock = VAR_0->ti_lastblock;
}
