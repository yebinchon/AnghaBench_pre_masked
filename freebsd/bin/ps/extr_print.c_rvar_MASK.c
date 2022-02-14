
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* var; } ;
typedef TYPE_2__ VARENT ;
struct TYPE_10__ {int off; } ;
typedef TYPE_3__ VAR ;
struct TYPE_11__ {TYPE_1__* ki_p; int ki_valid; } ;
struct TYPE_8__ {int ki_rusage; } ;
typedef TYPE_4__ KINFO ;


 char* FUNC_0 (char*,TYPE_3__*) ;

char *
FUNC_1(KINFO *VAR_0, VARENT *VAR_1)
{
 VAR *VAR_2;

 VAR_2 = VAR_1->var;
 if (!VAR_0->ki_valid)
  return (((void*)0));
 return (FUNC_0((char *)((char *)(&VAR_0->ki_p->ki_rusage) + VAR_2->off), VAR_2));
}
