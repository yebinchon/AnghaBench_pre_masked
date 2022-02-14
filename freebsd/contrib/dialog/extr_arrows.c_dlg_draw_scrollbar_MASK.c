
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_2__ {scalar_t__ use_scrollbar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (long) ;
 long FUNC_1 (int ,long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int,int,scalar_t__,int,int,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int) ;
 int VAR_9 ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (int *,int,int) ;
 int FUNC_17 (int *,int ,int) ;

void
FUNC_18(WINDOW *VAR_10,
     long VAR_11,
     long VAR_12,
     long VAR_13,
     long VAR_14,
     int VAR_15,
     int VAR_16,
     int VAR_17,
     int VAR_18,
     chtype VAR_19,
     chtype VAR_20)
{
    char VAR_21[80];
    int VAR_22;
    int VAR_23;
    int VAR_24, VAR_25;

    chtype VAR_26 = FUNC_10(VAR_10);
    int VAR_27 = (VAR_11 != 0);
    int VAR_28 = (VAR_13 < VAR_14);

    FUNC_11(VAR_10, VAR_24, VAR_25);

    FUNC_9(VAR_10, VAR_5);
    if (VAR_28 || VAR_27 || VAR_8.use_scrollbar) {
 VAR_22 = (!VAR_14
     ? 100
     : (int) ((VAR_13 * 100)
       / VAR_14));

 if (VAR_22 < 0)
     VAR_22 = 0;
 else if (VAR_22 > 100)
     VAR_22 = 100;

 FUNC_5(VAR_10, VAR_9);
 (void) FUNC_12(VAR_21, "%d%%", VAR_22);
 (void) FUNC_15(VAR_10, VAR_18, VAR_16 - 7);
 (void) FUNC_13(VAR_10, VAR_21);
 if ((VAR_23 = FUNC_7(VAR_21)) < 4) {
     FUNC_5(VAR_10, VAR_7);
     FUNC_14(VAR_10, FUNC_6(VAR_1), 4 - VAR_23);
 }
    }



    if (VAR_8.use_scrollbar) {
 int VAR_29 = (VAR_18 - VAR_17 - 1);

 VAR_12 = FUNC_1(0, VAR_12);

 if (VAR_14 > 0 && VAR_29 > 0) {
     int VAR_30 = (int) (VAR_14 + 1);
     int VAR_31 = (int) (VAR_13 + 1 - VAR_12);
     int VAR_32;
     int VAR_33;

     VAR_32 = (int) ((double) ((VAR_29 * (int) (VAR_31)) / (double) VAR_30));
     if (VAR_32 <= 0)
  VAR_32 = 1;

     if (VAR_32 < VAR_29) {
  int VAR_34 = (int) (0.5 + (double) ((VAR_29 * (int) (VAR_13)) / (double) VAR_14));

  FUNC_15(VAR_10, VAR_17 + 1, VAR_16);

  FUNC_5(VAR_10, VAR_26);
  FUNC_16(VAR_10, VAR_2 | VAR_4, VAR_29);

  VAR_33 = (int) ((double) ((VAR_29 * (int) (VAR_12)) / (double) VAR_30));
  if (VAR_33 >= VAR_34 && VAR_33 > 0)
      VAR_33 = VAR_34 - 1;
  if (VAR_34 - VAR_33 > VAR_32 && VAR_32 > 1)
      ++VAR_33;
  VAR_34 = FUNC_2(VAR_34, VAR_29);

  FUNC_15(VAR_10, VAR_17 + 1 + VAR_33, VAR_16);

  FUNC_5(VAR_10, VAR_9);
  FUNC_4(VAR_10, VAR_4);



  FUNC_16(VAR_10, VAR_0, VAR_34 - VAR_33);

     }
 }
    }
    FUNC_8(VAR_10,
       VAR_27,
       VAR_28,
       VAR_15 + VAR_3,
       VAR_17,
       VAR_18,
       VAR_19,
       VAR_20);

    FUNC_5(VAR_10, VAR_26);
    FUNC_15(VAR_10, VAR_24, VAR_25);
}
