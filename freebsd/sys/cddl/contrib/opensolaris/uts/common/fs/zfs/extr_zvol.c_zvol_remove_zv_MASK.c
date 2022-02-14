
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zv_minor; scalar_t__ zv_total_opens; scalar_t__ zv_volmode; int zv_rangelock; int * zv_dev; int zv_name; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int nmbuf ;
typedef int minor_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_14(zvol_state_t *VAR_8)
{





 FUNC_0(FUNC_2(&VAR_5));
 if (VAR_8->zv_total_opens != 0)
  return (FUNC_3(VAR_0));
 FUNC_4(1, "ZVOL %s destroyed.", VAR_8->zv_name);

 FUNC_1(VAR_8, VAR_6);
 if (VAR_8->zv_volmode == VAR_2) {
  FUNC_8();
  FUNC_13(VAR_8);
  FUNC_9();
 } else if (VAR_8->zv_volmode == VAR_1) {
  if (VAR_8->zv_dev != ((void*)0))
   FUNC_7(VAR_8->zv_dev);
 }


 FUNC_11(&VAR_8->zv_rangelock);

 FUNC_10(VAR_8, sizeof (zvol_state_t));



 VAR_7--;
 return (0);
}
