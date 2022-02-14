
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tnc_if_imv {int name; struct tnc_if_imv* next; } ;
struct TYPE_4__ {struct tnc_if_imv* imv; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct tnc_if_imv*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(void)
{
 struct tnc_if_imv *VAR_2;

 if (VAR_1)
  return 0;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return -1;

 if (FUNC_3(VAR_1) < 0) {
  FUNC_4(VAR_0, "TNC: Failed to read TNC configuration");
  goto failed;
 }

 for (VAR_2 = VAR_1->imv; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_2(VAR_2)) {
   FUNC_4(VAR_0, "TNC: Failed to load IMV '%s'",
       VAR_2->name);
   goto failed;
  }
 }

 return 0;

failed:
 FUNC_1();
 return -1;
}
