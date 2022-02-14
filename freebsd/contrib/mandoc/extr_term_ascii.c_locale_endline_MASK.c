
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ ti; TYPE_1__* tcol; int line; } ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct termp *VAR_0)
{

 VAR_0->line++;
 VAR_0->tcol->offset -= VAR_0->ti;
 VAR_0->ti = 0;
 FUNC_0(L'\n');
}
