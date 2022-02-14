
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ state; } ;
typedef TYPE_1__ tsd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (TYPE_1__*) ;

tsd_t *
FUNC_11(tsd_t *VAR_7, bool VAR_8) {
 FUNC_0(!FUNC_5(VAR_7));

 if (VAR_7->state == VAR_3) {

  FUNC_0(VAR_0 || !FUNC_10(VAR_7) ||
      FUNC_6(VAR_7) > 0 ||
      *FUNC_2(VAR_7));
 } else if (VAR_7->state == VAR_6) {
  if (!VAR_8) {
   VAR_7->state = VAR_2;
   FUNC_9(VAR_7);

   FUNC_8(VAR_7);
   FUNC_3(VAR_7);
  } else {
   VAR_7->state = VAR_1;
   FUNC_8(VAR_7);
   FUNC_4(VAR_7);
  }
 } else if (VAR_7->state == VAR_1) {
  if (!VAR_8) {

   VAR_7->state = VAR_2;
   FUNC_0(*FUNC_7(VAR_7) >= 1);
   (*FUNC_7(VAR_7))--;
   FUNC_9(VAR_7);
   FUNC_3(VAR_7);
  } else {
   FUNC_1(VAR_7);
  }
 } else if (VAR_7->state == VAR_4) {
  VAR_7->state = VAR_5;
  FUNC_8(VAR_7);
  FUNC_4(VAR_7);
 } else {
  FUNC_0(VAR_7->state == VAR_5);
 }

 return VAR_7;
}
