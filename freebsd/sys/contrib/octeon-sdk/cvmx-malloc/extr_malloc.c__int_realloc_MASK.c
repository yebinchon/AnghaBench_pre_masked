
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef scalar_t__ mchunkptr ;
typedef int Void_t ;
struct TYPE_8__ {scalar_t__ top; } ;
typedef unsigned long INTERNAL_SIZE_T ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned long*,unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (size_t,unsigned long) ;
 int * FUNC_7 (scalar_t__) ;
 void* FUNC_8 (scalar_t__,unsigned long) ;
 unsigned long FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,TYPE_1__*) ;
 int FUNC_13 (scalar_t__,unsigned long) ;
 int FUNC_14 (scalar_t__,unsigned long) ;
 int FUNC_15 (scalar_t__,unsigned long) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static Void_t*
FUNC_17(mstate VAR_5, Void_t* VAR_6, size_t VAR_7)
{
  INTERNAL_SIZE_T VAR_8;

  mchunkptr VAR_9;
  INTERNAL_SIZE_T VAR_10;

  mchunkptr VAR_11;
  INTERNAL_SIZE_T VAR_12;
  Void_t* VAR_13;

  mchunkptr VAR_14;

  mchunkptr VAR_15;
  unsigned long VAR_16;

  mchunkptr VAR_17;
  mchunkptr VAR_18;

  unsigned long VAR_19;
  unsigned int VAR_20;
  INTERNAL_SIZE_T* VAR_21;
  INTERNAL_SIZE_T* VAR_22;
  if (VAR_6 == 0) return FUNC_2(VAR_5, VAR_7);

  FUNC_6(VAR_7, VAR_8);

  VAR_9 = FUNC_11(VAR_6);
  VAR_10 = FUNC_9(VAR_9);

  FUNC_4(VAR_5, VAR_9);


  if (1) {

    if ((unsigned long)(VAR_10) >= (unsigned long)(VAR_8)) {

      VAR_11 = VAR_9;
      VAR_12 = VAR_10;
    }

    else {
      VAR_14 = FUNC_8(VAR_9, VAR_10);


      if (VAR_14 == VAR_5->top &&
          (unsigned long)(VAR_12 = VAR_10 + FUNC_9(VAR_14)) >=
          (unsigned long)(VAR_8 + VAR_2)) {
        FUNC_14(VAR_9, VAR_8 );
        VAR_5->top = FUNC_8(VAR_9, VAR_8);
        FUNC_13(VAR_5->top, (VAR_12 - VAR_8) | VAR_3);
     FUNC_4(VAR_5, VAR_9);
        FUNC_12(VAR_9, VAR_5);
        return FUNC_7(VAR_9);
      }


      else if (VAR_14 != VAR_5->top &&
               !FUNC_10(VAR_14) &&
               (unsigned long)(VAR_12 = VAR_10 + FUNC_9(VAR_14)) >=
               (unsigned long)(VAR_8)) {
        VAR_11 = VAR_9;
        FUNC_16(VAR_14, VAR_17, VAR_18);
      }


      else {
        VAR_13 = FUNC_2(VAR_5, VAR_8 - VAR_0);
        if (VAR_13 == 0)
          return 0;

        VAR_11 = FUNC_11(VAR_13);
        VAR_12 = FUNC_9(VAR_11);




        if (VAR_11 == VAR_14) {
          VAR_12 += VAR_10;
          VAR_11 = VAR_9;
        }
        else {






          VAR_19 = VAR_10 - VAR_4;
          VAR_21 = (INTERNAL_SIZE_T*)(VAR_6);
          VAR_22 = (INTERNAL_SIZE_T*)(VAR_13);
          VAR_20 = VAR_19 / sizeof(INTERNAL_SIZE_T);
          FUNC_3(VAR_20 >= 3);

          if (VAR_20 > 9)
            FUNC_0(VAR_22, VAR_21, VAR_19);

          else {
            *(VAR_22+0) = *(VAR_21+0);
            *(VAR_22+1) = *(VAR_21+1);
            *(VAR_22+2) = *(VAR_21+2);
            if (VAR_20 > 4) {
              *(VAR_22+3) = *(VAR_21+3);
              *(VAR_22+4) = *(VAR_21+4);
              if (VAR_20 > 6) {
                *(VAR_22+5) = *(VAR_21+5);
                *(VAR_22+6) = *(VAR_21+6);
                if (VAR_20 > 8) {
                  *(VAR_22+7) = *(VAR_21+7);
                  *(VAR_22+8) = *(VAR_21+8);
                }
              }
            }
          }

          FUNC_1(VAR_5, VAR_6);
          FUNC_12(VAR_11, VAR_5);
          FUNC_4(VAR_5, VAR_11);
          return FUNC_7(VAR_11);
        }
      }
    }



    FUNC_3((unsigned long)(VAR_12) >= (unsigned long)(VAR_8));

    VAR_16 = VAR_12 - VAR_8;

    if (VAR_16 < VAR_2) {
      FUNC_14(VAR_11, VAR_12);
      FUNC_15(VAR_11, VAR_12);
    }
    else {
      VAR_15 = FUNC_8(VAR_11, VAR_8);
      FUNC_14(VAR_11, VAR_8 );
      FUNC_13(VAR_15, VAR_16 | VAR_3 );

      FUNC_15(VAR_15, VAR_16);
      FUNC_12(VAR_15, VAR_5);
      FUNC_1(VAR_5, FUNC_7(VAR_15));
    }

    FUNC_12(VAR_11, VAR_5);
    FUNC_4(VAR_5, VAR_11);
    return FUNC_7(VAR_11);
  }





  else {

    FUNC_5(VAR_5);
    VAR_1;
    return 0;
  }
}
