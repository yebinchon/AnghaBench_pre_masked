
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int (* close ) (TYPE_3__*) ;} ;
struct TYPE_9__ {TYPE_3__* log; } ;
struct TYPE_8__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(
 SCR *VAR_2,
 char *VAR_3,
 int VAR_4)
{
 EXF *VAR_5;

 FUNC_1(VAR_2, VAR_1, "015|%s/%d: log put error", FUNC_3(VAR_3), VAR_4);
 VAR_5 = VAR_2->ep;
 (void)VAR_5->log->close(VAR_5->log);
 if (!FUNC_0(VAR_2, VAR_5))
  FUNC_1(VAR_2, VAR_0, "267|Log restarted");
}
