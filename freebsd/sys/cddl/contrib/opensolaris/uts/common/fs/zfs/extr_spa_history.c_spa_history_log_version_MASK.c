
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_longlong_t ;
typedef int spa_t ;
struct TYPE_2__ {int machine; int version; int release; int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int *,char*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;

void
FUNC_2(spa_t *VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_3, VAR_4, ((void*)0),
     "pool version %llu; software version %llu/%llu; uts %s %s %s %s",
     (u_longlong_t)FUNC_1(VAR_3), VAR_0, VAR_1,
     VAR_2.nodename, VAR_2.release, VAR_2.version,
     VAR_2.machine);
}
