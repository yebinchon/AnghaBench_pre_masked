
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {size_t pscol; } ;


 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_0, size_t VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_0->ps->pscol += VAR_1;
}
