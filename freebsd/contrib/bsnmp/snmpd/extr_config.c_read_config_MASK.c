
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lmodule {int dummy; } ;
struct TYPE_9__ {TYPE_1__* dep; } ;
struct TYPE_8__ {int idx; int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (struct lmodule*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 () ;
 int FUNC_14 (int ,char*,...) ;

int
FUNC_15(const char *VAR_8, struct lmodule *VAR_9)
{
 int VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[VAR_0];

 VAR_5 = 0;

 VAR_6 = 0;

 if (FUNC_1())
  return (-1);
 if (FUNC_7(VAR_8, 0) == -1) {
  FUNC_14(VAR_2, "%s: %m", VAR_8);
  return (-1);
 }
 FUNC_0();
 VAR_4 = VAR_1;

 if ((VAR_7 = FUNC_13()) == ((void*)0)) {
  FUNC_6();
  FUNC_14(VAR_2, "%m");
  return (-1);
 }

 if (FUNC_1()) {
  FUNC_4();
  FUNC_6();
  FUNC_8();
  FUNC_5(VAR_7);
  return (-1);
 }
 FUNC_9(VAR_9);
 FUNC_0();

 if ((VAR_10 = FUNC_10(VAR_7)) != VAR_3) {
  FUNC_14(VAR_2, "init dep failed: %u %s %s", VAR_10,
      FUNC_2(&VAR_7->dep->obj, VAR_11),
      FUNC_2(&VAR_7->dep->idx, VAR_12));
  FUNC_12(VAR_7);
  FUNC_4();
  FUNC_6();
  FUNC_8();
  FUNC_5(VAR_7);
  return (-1);
 }

 FUNC_3();
 FUNC_11(VAR_7);

 FUNC_8();

 FUNC_5(VAR_7);

 return (0);
}
