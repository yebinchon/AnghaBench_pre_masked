
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ isp_state; } ;
typedef TYPE_1__ ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(ispsoftc_t *VAR_15)
{

 if (VAR_15->isp_state >= VAR_14)
  FUNC_4(VAR_15);
 FUNC_0(VAR_15);
 if (FUNC_3(VAR_15)) {
  if (FUNC_2(VAR_15)) {
   FUNC_1(VAR_15, VAR_5, 0);
   FUNC_1(VAR_15, VAR_4, VAR_12);
  } else {
   FUNC_1(VAR_15, VAR_6, 0);
   FUNC_1(VAR_15, VAR_11, VAR_13);
   FUNC_1(VAR_15, VAR_0, VAR_2);
   FUNC_1(VAR_15, VAR_9, VAR_10);
   FUNC_1(VAR_15, VAR_0, VAR_1);
   FUNC_1(VAR_15, VAR_8, VAR_7);
   FUNC_1(VAR_15, VAR_0, VAR_3);
  }
 } else {
  FUNC_1(VAR_15, VAR_6, 0);
  FUNC_1(VAR_15, VAR_11, VAR_13);
 }
}
