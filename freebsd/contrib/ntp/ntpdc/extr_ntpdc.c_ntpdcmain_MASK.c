
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l_uf; scalar_t__ l_ui; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 char** FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int * VAR_18 ;
 char** VAR_19 ;
 int FUNC_6 () ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int,char**) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_15 (char*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_16 (char*,char*) ;
 char* VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int) ;

int
FUNC_21(
 int VAR_34,
 char *VAR_35[]
 )
{
 VAR_21.l_ui = 0;
 VAR_21.l_uf = VAR_3;






 FUNC_12();
 FUNC_18();
 FUNC_11();


 if (!VAR_23)
  VAR_16 = VAR_0;

 VAR_30 = VAR_35[0];

 {
  int VAR_36 = FUNC_14(&VAR_25, VAR_34, VAR_35);
  VAR_34 -= VAR_36;
  VAR_35 += VAR_36;
 }

 if (FUNC_2(VAR_7))
  VAR_17 = VAR_0;
 else if (FUNC_2(VAR_8))
  VAR_17 = VAR_1;
 else
  VAR_17 = VAR_16;

 if (FUNC_2(VAR_2)) {
  int VAR_37 = FUNC_3( VAR_2 );
  const char** VAR_38 = FUNC_4( VAR_2 );

  while (VAR_37-- > 0) {
   FUNC_0(*VAR_38++);
  }
 }

 VAR_20 = VAR_11;

 if (FUNC_2(VAR_6)) {
  VAR_22 = 1;
 }

 if (FUNC_2(VAR_10)) {
  VAR_31 = 0;
 }

 if (FUNC_2(VAR_9)) {
  FUNC_0("listpeers");
 }

 if (FUNC_2(VAR_12)) {
  FUNC_0("peers");
 }

 if (FUNC_2(VAR_13)) {
  FUNC_0("dmpeers");
 }

 if (VAR_24 == VAR_34) {
  FUNC_1(VAR_4);
 } else {
  for (; VAR_24 < VAR_34; VAR_24++)
      FUNC_1(VAR_35[VAR_24]);
 }

 if (VAR_26 == 0 && VAR_22 == 0
     && FUNC_13(FUNC_9(VAR_33)) && FUNC_13(FUNC_9(VAR_32))) {
  VAR_22 = 1;
 }


 if (VAR_22)
  (void) FUNC_17(VAR_14, VAR_15);





 VAR_29 = VAR_5;
 VAR_28 = FUNC_8(VAR_5);

 if (VAR_26 == 0) {
  (void) FUNC_15(VAR_19[0]);
  FUNC_10();
 } else {
  int VAR_39;
  int VAR_40;

  for (VAR_39 = 0; VAR_39 < VAR_27; VAR_39++) {
   if (FUNC_15(VAR_19[VAR_39]))
       for (VAR_40 = 0; VAR_40 < VAR_26; VAR_40++) {
        if (VAR_27 > 1)
     FUNC_16 ("--- %s ---\n",VAR_19[VAR_39]);
        FUNC_7(VAR_18[VAR_40]);
       }
  }
 }



 return(0);
}
