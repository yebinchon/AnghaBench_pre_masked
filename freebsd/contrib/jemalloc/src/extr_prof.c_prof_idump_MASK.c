
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
struct TYPE_3__ {int enq_idump; scalar_t__ enq; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 char* VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,int,char*,int) ;
 int FUNC_5 (char*,char,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

void
FUNC_11(tsdn_t *VAR_6) {
 tsd_t *VAR_7;
 prof_tdata_t *VAR_8;

 FUNC_0(VAR_1);

 if (!VAR_3 || FUNC_9(VAR_6) || !FUNC_3()) {
  return;
 }
 VAR_7 = FUNC_10(VAR_6);
 if (FUNC_7(VAR_7) > 0) {
  return;
 }

 VAR_8 = FUNC_6(VAR_7, 0);
 if (VAR_8 == ((void*)0)) {
  return;
 }
 if (VAR_8->enq) {
  VAR_8->enq_idump = 1;
  return;
 }

 if (VAR_2[0] != '\0') {
  char VAR_9[VAR_0 + 1];
  FUNC_1(FUNC_8(VAR_7), &VAR_5);
  FUNC_5(VAR_9, 'i', VAR_4);
  VAR_4++;
  FUNC_2(FUNC_8(VAR_7), &VAR_5);
  FUNC_4(VAR_7, 0, VAR_9, 0);
 }
}
