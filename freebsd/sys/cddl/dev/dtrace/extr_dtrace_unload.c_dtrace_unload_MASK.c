
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dts_necbs; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_provider_id_t ;
typedef int dtrace_anon_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_21 ;
 int * VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int * VAR_25 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int * VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16()
{
 dtrace_state_t *VAR_32;
 int VAR_33 = 0;

 FUNC_4(VAR_7);
 FUNC_4(VAR_29);

 FUNC_13(&VAR_18);
 FUNC_13(&VAR_12);
 FUNC_13(&VAR_1);

 FUNC_0(VAR_15 == 0);

 if (VAR_9 > 0) {
  FUNC_14(&VAR_1);
  FUNC_14(&VAR_12);
  FUNC_14(&VAR_18);
  return (VAR_0);
 }

 if (FUNC_9((dtrace_provider_id_t)VAR_17) != 0) {
  FUNC_14(&VAR_1);
  FUNC_14(&VAR_12);
  FUNC_14(&VAR_18);
  return (VAR_0);
 }

 VAR_17 = ((void*)0);
 FUNC_1(VAR_30, VAR_10);
 FUNC_1(VAR_31, VAR_11);

 if ((VAR_32 = FUNC_5()) != ((void*)0)) {





  FUNC_0(VAR_32->dts_necbs == 0);
  FUNC_8(VAR_32);
 }

 FUNC_2(&VAR_2, sizeof (dtrace_anon_t));

 FUNC_14(&VAR_1);

 if (VAR_16 != ((void*)0)) {
  FUNC_11(VAR_16, 0);
  VAR_16 = ((void*)0);
  VAR_14 = 0;
 }

 FUNC_6(VAR_5);
 FUNC_6(VAR_4);
 FUNC_6(VAR_6);
 VAR_5 = ((void*)0);
 VAR_4 = ((void*)0);
 VAR_6 = ((void*)0);

 FUNC_10(VAR_20);

 FUNC_3(VAR_3);

 if (VAR_22 != ((void*)0)) {
  FUNC_11(VAR_22, 0);
  VAR_22 = ((void*)0);
  VAR_23 = 0;
  VAR_24 = 0;
 }

 FUNC_0(VAR_27 == 0);
 FUNC_0(VAR_15 == 0);
 FUNC_0(VAR_19 == ((void*)0));

 FUNC_14(&VAR_12);
 FUNC_14(&VAR_18);

 FUNC_12(&VAR_13);
 FUNC_12(&VAR_18);
 FUNC_12(&VAR_12);




 FUNC_15(VAR_21);


 FUNC_7();





 VAR_26 = 0;
 VAR_28 = ((void*)0);


 VAR_25 = ((void*)0);

 return (VAR_33);
}
