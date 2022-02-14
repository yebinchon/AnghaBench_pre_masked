
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mchunkptr ;
typedef TYPE_2__* mbinptr ;
struct TYPE_23__ {struct TYPE_23__* bk; struct TYPE_23__* fd; } ;
struct TYPE_22__ {scalar_t__ top; int max_fast; scalar_t__ max_system_mem; scalar_t__ system_mem; TYPE_2__** fastbins; } ;
typedef unsigned long INTERNAL_SIZE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 unsigned int FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 unsigned long FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (unsigned long) ;
 unsigned int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(mstate VAR_6)
{
  int VAR_7;
  mchunkptr VAR_8;
  mchunkptr VAR_9;
  mbinptr VAR_10;
  unsigned int VAR_11;
  int VAR_12;
  unsigned int VAR_13;
  INTERNAL_SIZE_T VAR_14;
  unsigned long VAR_15 = 0;
  int VAR_16;


  FUNC_0(sizeof(INTERNAL_SIZE_T) <= sizeof(char*));


  FUNC_0((VAR_1 & (VAR_1-1)) == 0);


  if (VAR_6->top == 0 || VAR_6->top == FUNC_10(VAR_6))
    return;





  FUNC_0((VAR_6->max_fast & ~1) <= FUNC_14(VAR_2));

  VAR_16 = FUNC_7(VAR_6->max_fast);

  for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
    VAR_8 = VAR_6->fastbins[VAR_7];


    if (VAR_7 > VAR_16)
      FUNC_0(VAR_8 == 0);

    while (VAR_8 != 0) {

      FUNC_6(VAR_6, VAR_8);
      VAR_15 += FUNC_4(VAR_8);

      FUNC_0(FUNC_7(FUNC_4(VAR_8)) == VAR_7);
      VAR_8 = VAR_8->fd;
    }
  }

  if (VAR_15 != 0)
    FUNC_0(FUNC_9(VAR_6));
  else if (!FUNC_9(VAR_6))
    FUNC_0(VAR_15 == 0);


  for (VAR_7 = 1; VAR_7 < VAR_4; ++VAR_7) {
    VAR_10 = FUNC_1(VAR_6,VAR_7);


    if (VAR_7 >= 2) {
      VAR_11 = FUNC_8(VAR_6,VAR_7);
      VAR_12 = FUNC_12(VAR_10) == VAR_10;
      if (!VAR_11)
        FUNC_0(VAR_12);
      else if (!VAR_12)
        FUNC_0(VAR_11);
    }

    for (VAR_8 = FUNC_12(VAR_10); VAR_8 != VAR_10; VAR_8 = VAR_8->bk) {

      FUNC_5(VAR_6, VAR_8);
      VAR_14 = FUNC_4(VAR_8);
      VAR_15 += VAR_14;
      if (VAR_7 >= 2) {

        VAR_13 = FUNC_2(VAR_14);
        FUNC_0(VAR_13 == (unsigned int)VAR_7);

        if ((unsigned long) VAR_14 >= (unsigned long)(VAR_0)) {
   FUNC_0(VAR_8->bk == VAR_10 ||
   (unsigned long)FUNC_4(VAR_8->bk) >=
   (unsigned long)FUNC_4(VAR_8));
 }
      }

      for (VAR_9 = FUNC_13(VAR_8);
           (VAR_9 != VAR_6->top && FUNC_11(VAR_9) &&
             (unsigned long)(FUNC_4(VAR_9)) >= VAR_3);
           VAR_9 = FUNC_13(VAR_9))
        FUNC_6(VAR_6, VAR_9);
    }
  }


  FUNC_3(VAR_6, VAR_6->top);




  FUNC_0((unsigned long)(VAR_6->system_mem) <=
         (unsigned long)(VAR_6->max_system_mem));


}
