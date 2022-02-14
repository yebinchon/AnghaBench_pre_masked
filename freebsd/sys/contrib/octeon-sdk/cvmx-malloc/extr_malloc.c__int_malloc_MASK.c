
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mfastbinptr ;
typedef TYPE_2__* mchunkptr ;
typedef TYPE_2__* mbinptr ;
typedef int Void_t ;
struct TYPE_34__ {struct TYPE_34__* fd; struct TYPE_34__* bk; scalar_t__ size; } ;
struct TYPE_33__ {unsigned int* binmap; TYPE_2__* top; TYPE_2__* last_remainder; TYPE_2__** fastbins; scalar_t__ max_fast; } ;
typedef unsigned long INTERNAL_SIZE_T ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,unsigned long) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,unsigned long) ;
 int FUNC_4 (size_t,unsigned long) ;
 int * FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,unsigned long) ;
 unsigned long FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 unsigned int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned long) ;
 void* FUNC_13 (unsigned long) ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_19 (TYPE_2__*,unsigned long) ;
 int FUNC_20 (TYPE_2__*,unsigned long) ;
 int FUNC_21 (TYPE_2__*,unsigned long) ;
 void* FUNC_22 (unsigned long) ;
 int FUNC_23 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_24 (TYPE_1__*) ;

__attribute__((used)) static Void_t*
FUNC_25(mstate VAR_5, size_t VAR_6)
{
  INTERNAL_SIZE_T VAR_7;
  unsigned int VAR_8;
  mbinptr VAR_9;
  mfastbinptr* VAR_10;

  mchunkptr VAR_11;
  INTERNAL_SIZE_T VAR_12;
  int VAR_13;

  mchunkptr VAR_14;
  unsigned long VAR_15;

  unsigned int VAR_16;
  unsigned int VAR_17;
  unsigned int VAR_18;

  mchunkptr VAR_19;
  mchunkptr VAR_20;
  FUNC_4(VAR_6, VAR_7);







  if ((unsigned long)(VAR_7) <= (unsigned long)(VAR_5->max_fast)) {
    VAR_10 = &(VAR_5->fastbins[(FUNC_8(VAR_7))]);
    if ( (VAR_11 = *VAR_10) != 0) {
      *VAR_10 = VAR_11->fd;
      FUNC_3(VAR_5, VAR_11, VAR_7);
      FUNC_18(VAR_11, VAR_5);
      return FUNC_5(VAR_11);
    }
  }
  if (FUNC_12(VAR_7)) {
    VAR_8 = FUNC_22(VAR_7);
    VAR_9 = FUNC_1(VAR_5,VAR_8);

    if ( (VAR_11 = FUNC_14(VAR_9)) != VAR_9) {
      if (VAR_11 == 0)
        FUNC_15(VAR_5);
      else {
        VAR_20 = VAR_11->bk;
        FUNC_21(VAR_11, VAR_7);
        VAR_9->bk = VAR_20;
        VAR_20->fd = VAR_9;

        FUNC_18(VAR_11, VAR_5);
        FUNC_2(VAR_5, VAR_11, VAR_7);
        return FUNC_5(VAR_11);
      }
    }
  }
  else {
    VAR_8 = FUNC_13(VAR_7);
    if (FUNC_9(VAR_5))
      FUNC_15(VAR_5);
  }
  for(;;) {

    while ( (VAR_11 = FUNC_24(VAR_5)->bk) != FUNC_24(VAR_5)) {
      VAR_20 = VAR_11->bk;
      VAR_12 = FUNC_7(VAR_11);
      if (FUNC_12(VAR_7) &&
          VAR_20 == FUNC_24(VAR_5) &&
          VAR_11 == VAR_5->last_remainder &&
          (unsigned long)(VAR_12) > (unsigned long)(VAR_7 + VAR_3)) {


        VAR_15 = VAR_12 - VAR_7;
        VAR_14 = FUNC_6(VAR_11, VAR_7);
        FUNC_24(VAR_5)->bk = FUNC_24(VAR_5)->fd = VAR_14;
        VAR_5->last_remainder = VAR_14;
        VAR_14->bk = VAR_14->fd = FUNC_24(VAR_5);

        FUNC_20(VAR_11, VAR_7 | VAR_4);
        FUNC_20(VAR_14, VAR_15 | VAR_4);
        FUNC_19(VAR_14, VAR_15);

        FUNC_18(VAR_11, VAR_5);
        FUNC_2(VAR_5, VAR_11, VAR_7);
        return FUNC_5(VAR_11);
      }


      FUNC_24(VAR_5)->bk = VAR_20;
      VAR_20->fd = FUNC_24(VAR_5);



      if (VAR_12 == VAR_7) {
        FUNC_21(VAR_11, VAR_12);
        FUNC_18(VAR_11, VAR_5);
        FUNC_2(VAR_5, VAR_11, VAR_7);
        return FUNC_5(VAR_11);
      }



      if (FUNC_12(VAR_12)) {
        VAR_13 = FUNC_22(VAR_12);
        VAR_20 = FUNC_1(VAR_5, VAR_13);
        VAR_19 = VAR_20->fd;
      }
      else {
        VAR_13 = FUNC_13(VAR_12);
        VAR_20 = FUNC_1(VAR_5, VAR_13);
        VAR_19 = VAR_20->fd;

        if (VAR_19 != VAR_20) {

          if ((unsigned long)(VAR_12) < (unsigned long)(VAR_20->bk->size)) {
            VAR_19 = VAR_20;
            VAR_20 = VAR_20->bk;
          }
          else if ((unsigned long)(VAR_12) >=
                   (unsigned long)(VAR_2)) {


            VAR_12 |= VAR_4;
            while ((unsigned long)(VAR_12) < (unsigned long)(VAR_19->size)) {
              VAR_19 = VAR_19->fd;
     }
            VAR_20 = VAR_19->bk;
          }
        }
      }

      FUNC_16(VAR_5, VAR_13);
      VAR_11->bk = VAR_20;
      VAR_11->fd = VAR_19;
      VAR_19->bk = VAR_11;
      VAR_20->fd = VAR_11;
    }
    if (!FUNC_12(VAR_7)) {
      VAR_9 = FUNC_1(VAR_5, VAR_8);

      for (VAR_11 = FUNC_14(VAR_9); VAR_11 != VAR_9; VAR_11 = VAR_11->bk) {
 VAR_12 = FUNC_7(VAR_11);

 if ((unsigned long)(VAR_12) >= (unsigned long)(VAR_7)) {
   VAR_15 = VAR_12 - VAR_7;
   FUNC_23(VAR_11, VAR_20, VAR_19);


   if (VAR_15 < VAR_3) {
     FUNC_21(VAR_11, VAR_12);
        FUNC_18(VAR_11, VAR_5);
     FUNC_2(VAR_5, VAR_11, VAR_7);
     return FUNC_5(VAR_11);
   }

   else {
     VAR_14 = FUNC_6(VAR_11, VAR_7);
     FUNC_24(VAR_5)->bk = FUNC_24(VAR_5)->fd = VAR_14;
     VAR_14->bk = VAR_14->fd = FUNC_24(VAR_5);
     FUNC_20(VAR_11, VAR_7 | VAR_4);
     FUNC_20(VAR_14, VAR_15 | VAR_4);
     FUNC_19(VAR_14, VAR_15);
        FUNC_18(VAR_11, VAR_5);
     FUNC_2(VAR_5, VAR_11, VAR_7);
     return FUNC_5(VAR_11);
   }
 }
      }
    }
    ++VAR_8;
    VAR_9 = FUNC_1(VAR_5,VAR_8);
    VAR_16 = FUNC_11(VAR_8);
    VAR_18 = VAR_5->binmap[VAR_16];
    VAR_17 = FUNC_10(VAR_8);

    for (;;) {


      if (VAR_17 > VAR_18 || VAR_17 == 0) {
        do {
          if (++VAR_16 >= VAR_1)
            goto use_top;
        } while ( (VAR_18 = VAR_5->binmap[VAR_16]) == 0);

        VAR_9 = FUNC_1(VAR_5, (VAR_16 << VAR_0));
        VAR_17 = 1;
      }


      while ((VAR_17 & VAR_18) == 0) {
        VAR_9 = FUNC_17(VAR_9);
        VAR_17 <<= 1;
        FUNC_0(VAR_17 != 0);
      }


      VAR_11 = FUNC_14(VAR_9);


      if (VAR_11 == VAR_9) {
        VAR_5->binmap[VAR_16] = VAR_18 &= ~VAR_17;
        VAR_9 = FUNC_17(VAR_9);
        VAR_17 <<= 1;
      }

      else {
        VAR_12 = FUNC_7(VAR_11);


        FUNC_0((unsigned long)(VAR_12) >= (unsigned long)(VAR_7));

        VAR_15 = VAR_12 - VAR_7;


        VAR_20 = VAR_11->bk;
        VAR_9->bk = VAR_20;
        VAR_20->fd = VAR_9;


        if (VAR_15 < VAR_3) {
          FUNC_21(VAR_11, VAR_12);
          FUNC_18(VAR_11, VAR_5);
          FUNC_2(VAR_5, VAR_11, VAR_7);
          return FUNC_5(VAR_11);
        }


        else {
          VAR_14 = FUNC_6(VAR_11, VAR_7);

          FUNC_24(VAR_5)->bk = FUNC_24(VAR_5)->fd = VAR_14;
          VAR_14->bk = VAR_14->fd = FUNC_24(VAR_5);

          if (FUNC_12(VAR_7))
            VAR_5->last_remainder = VAR_14;

          FUNC_20(VAR_11, VAR_7 | VAR_4);
          FUNC_20(VAR_14, VAR_15 | VAR_4);
          FUNC_19(VAR_14, VAR_15);
          FUNC_18(VAR_11, VAR_5);
          FUNC_2(VAR_5, VAR_11, VAR_7);
          return FUNC_5(VAR_11);
        }
      }
    }

  use_top:
    VAR_11 = VAR_5->top;
    VAR_12 = FUNC_7(VAR_11);

    if ((unsigned long)(VAR_12) >= (unsigned long)(VAR_7 + VAR_3)) {
      VAR_15 = VAR_12 - VAR_7;
      VAR_14 = FUNC_6(VAR_11, VAR_7);
      VAR_5->top = VAR_14;
      FUNC_20(VAR_11, VAR_7 | VAR_4);
      FUNC_20(VAR_14, VAR_15 | VAR_4);

      FUNC_18(VAR_11, VAR_5);
      FUNC_2(VAR_5, VAR_11, VAR_7);
      return FUNC_5(VAR_11);
    }







    else if (FUNC_9(VAR_5)) {
      FUNC_0(FUNC_12(VAR_7));
      FUNC_15(VAR_5);
      VAR_8 = FUNC_22(VAR_7);
    }




    else
      return(((void*)0));
  }
}
