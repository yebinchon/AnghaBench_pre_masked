
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cleanupfd; int tomnt; int tmpsnap; int tosnap; int frommnt; int fromsnap; int dsmnt; int ds; } ;
typedef TYPE_1__ differ_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(differ_info_t *VAR_0)
{
 FUNC_1(VAR_0->ds);
 FUNC_1(VAR_0->dsmnt);
 FUNC_1(VAR_0->fromsnap);
 FUNC_1(VAR_0->frommnt);
 FUNC_1(VAR_0->tosnap);
 FUNC_1(VAR_0->tmpsnap);
 FUNC_1(VAR_0->tomnt);
 (void) FUNC_0(VAR_0->cleanupfd);
}
