
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* var; } ;
typedef TYPE_1__ VARENT ;
struct TYPE_8__ {int off; } ;
typedef TYPE_2__ VAR ;
struct TYPE_9__ {scalar_t__ ki_p; } ;
typedef TYPE_3__ KINFO ;


 char* FUNC_0 (char*,TYPE_2__*) ;

char *
FUNC_1(KINFO *VAR_0, VARENT *VAR_1)
{
 VAR *VAR_2;

 VAR_2 = VAR_1->var;
 return (FUNC_0((char *)((char *)VAR_0->ki_p + VAR_2->off), VAR_2));
}
