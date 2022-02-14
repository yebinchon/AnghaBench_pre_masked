
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mfastbinptr ;
typedef TYPE_2__* mchunkptr ;
typedef int Void_t ;
struct TYPE_30__ {scalar_t__ prev_size; struct TYPE_30__* bk; struct TYPE_30__* fd; } ;
struct TYPE_29__ {TYPE_2__* top; TYPE_2__** fastbins; scalar_t__ max_fast; } ;
typedef scalar_t__ INTERNAL_SIZE_T ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,long) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_2__* FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_19(mstate VAR_2, Void_t* VAR_3)
{
  mchunkptr VAR_4;
  INTERNAL_SIZE_T VAR_5;
  mfastbinptr* VAR_6;
  mchunkptr VAR_7;
  INTERNAL_SIZE_T VAR_8;
  int VAR_9;
  INTERNAL_SIZE_T VAR_10;
  mchunkptr VAR_11;
  mchunkptr VAR_12;



  if (VAR_3 != 0) {
    VAR_4 = FUNC_12(VAR_3);
    VAR_5 = FUNC_6(VAR_4);

    FUNC_3(VAR_2, VAR_4);






    if ((unsigned long)(VAR_5) <= (unsigned long)(VAR_2->max_fast)
        ) {

      FUNC_14(VAR_2);
      VAR_6 = &(VAR_2->fastbins[FUNC_8(VAR_5)]);
      VAR_4->fd = *VAR_6;
      *VAR_6 = VAR_4;
    }





    else if (!FUNC_5(VAR_4)) {
      VAR_7 = FUNC_4(VAR_4, VAR_5);
      VAR_8 = FUNC_6(VAR_7);
      FUNC_0(VAR_8 > 0);


      if (!FUNC_13(VAR_4)) {
        VAR_10 = VAR_4->prev_size;
        VAR_5 += VAR_10;
        VAR_4 = FUNC_4(VAR_4, -((long) VAR_10));
        FUNC_17(VAR_4, VAR_11, VAR_12);
      }

      if (VAR_7 != VAR_2->top) {

        VAR_9 = FUNC_10(VAR_7, VAR_8);


        if (!VAR_9) {
          FUNC_17(VAR_7, VAR_11, VAR_12);
          VAR_5 += VAR_8;
        } else
   FUNC_7(VAR_7, 0);







        VAR_11 = FUNC_18(VAR_2);
        VAR_12 = VAR_11->fd;
        VAR_4->bk = VAR_11;
        VAR_4->fd = VAR_12;
        VAR_11->fd = VAR_4;
        VAR_12->bk = VAR_4;

        FUNC_16(VAR_4, VAR_5 | VAR_1);
        FUNC_15(VAR_4, VAR_5);

        FUNC_2(VAR_2, VAR_4);
      }






      else {
        VAR_5 += VAR_8;
        FUNC_16(VAR_4, VAR_5 | VAR_1);
        VAR_2->top = VAR_4;
        FUNC_1(VAR_2, VAR_4);
      }
      if ((unsigned long)(VAR_5) >= VAR_0) {
        if (FUNC_9(VAR_2))
          FUNC_11(VAR_2);
      }
    }
  }
}
