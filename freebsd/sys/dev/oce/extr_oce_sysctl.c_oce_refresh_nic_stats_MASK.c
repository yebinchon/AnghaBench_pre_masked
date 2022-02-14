
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int stats_mem; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;

int
FUNC_12(POCE_SOFTC VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;

 if( FUNC_0(VAR_0) ) {
  VAR_1 = FUNC_8(VAR_0, &VAR_0->stats_mem);
  if (!VAR_1)
   FUNC_4(VAR_0);
 }else if( FUNC_1(VAR_0) ) {
  VAR_1 = FUNC_9(VAR_0, &VAR_0->stats_mem);
  if (!VAR_1)
   FUNC_5(VAR_0);
 }else if( FUNC_2(VAR_0)) {
  VAR_1 = FUNC_10(VAR_0, &VAR_0->stats_mem);
  if (!VAR_1)
   FUNC_6(VAR_0);
 }else if( FUNC_3(VAR_0) ){
  VAR_1 = FUNC_11(VAR_0, &VAR_0->stats_mem, VAR_2);
  if (!VAR_1)
   FUNC_7(VAR_0);
 }

 return VAR_1;
}
