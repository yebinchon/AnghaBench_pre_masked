
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
struct peer {int flags; scalar_t__ throttle; int nextdate; struct peer* p_link; } ;
struct TYPE_3__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int*,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int VAR_14 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int *,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 () ;
 int VAR_16 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int *,int *) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_11 (int *,char*,int) ;
 int VAR_24 ;
 struct peer* VAR_25 ;
 int FUNC_12 (struct peer*) ;
 int FUNC_13 (struct peer*) ;
 int VAR_26 ;
 int FUNC_14 (int ) ;
 int VAR_27 ;
 unsigned long VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int * VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 unsigned long VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct peer*) ;
 int VAR_39 ;
 int FUNC_18 () ;
 int FUNC_19 () ;

void
FUNC_20(void)
{
 struct peer * VAR_40;
 struct peer * VAR_41;
 l_fp VAR_42;
 time_t VAR_43;






 VAR_16++;
 if (VAR_14 <= VAR_16) {
  VAR_14 += 1;
  FUNC_2();







 }






 for (VAR_40 = VAR_25; VAR_40 != ((void*)0); VAR_40 = VAR_41) {
  VAR_41 = VAR_40->p_link;







  if (VAR_40->throttle > 0)
   VAR_40->throttle--;
  if (VAR_40->nextdate <= VAR_16) {





    FUNC_17(VAR_40);
  }
 }







 if (VAR_31 < VAR_12 && VAR_32 == ((void*)0) &&
     VAR_16 > VAR_24) {
  if (VAR_29 == VAR_5) {
   FUNC_14(VAR_6);




  }
  VAR_38 = (u_char)VAR_31;
  if (VAR_38 > 1)
   VAR_34 = FUNC_8(VAR_7);
  else
   FUNC_11(&VAR_34, "LOOP", 4);
  VAR_30 = 0;
  VAR_36 = 0;
  VAR_37 = 0;
 }

 FUNC_7(&VAR_42);
 FUNC_15(&VAR_43);





 if (VAR_23 > VAR_9 || 0 == (VAR_16 & 7))
  FUNC_5(VAR_42.l_ui, &VAR_43,
                                (VAR_29 == VAR_5));
        if (VAR_29 != VAR_5) {
                if (VAR_23 >= VAR_8 && VAR_21) {
          if (VAR_21 > 0)
           FUNC_14(VAR_3);
          else
           FUNC_14(VAR_4);
                } else {
                        FUNC_14(VAR_6);
                }
 }




 if (VAR_17 <= VAR_16) {
  VAR_17 += VAR_2;
  FUNC_9();
 }
 if (VAR_18 && VAR_19 <= VAR_16) {
  FUNC_16(VAR_16 +
      VAR_18);
  FUNC_0(2, ("timer: interface update\n"));
  FUNC_10(((void*)0), ((void*)0));
 }

 if (VAR_39 && VAR_39 <= VAR_16)
  FUNC_18();





 if (VAR_27 <= VAR_16) {
  VAR_27 += VAR_11;
  FUNC_19();
  if (VAR_22 <= VAR_16) {
   VAR_22 += VAR_10;
   FUNC_4(VAR_13, VAR_42.l_ui, &VAR_43);
  } else {
   FUNC_4(VAR_0, VAR_42.l_ui, &VAR_43);
  }
 }
}
