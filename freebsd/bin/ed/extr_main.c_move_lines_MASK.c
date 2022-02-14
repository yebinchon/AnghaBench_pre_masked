
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* q_forw; struct TYPE_7__* q_back; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 long FUNC_0 (long,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (long) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int ,long,long) ;
 long VAR_7 ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

int
FUNC_7(long VAR_8)
{
 line_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 long VAR_13 = FUNC_0(VAR_7, VAR_2);
 long VAR_14 = VAR_4 - 1;
 int VAR_15 = (VAR_8 == VAR_4 - 1 || VAR_8 == VAR_7);

 FUNC_3();
 if (VAR_15) {
  VAR_12 = FUNC_4(VAR_13);
  VAR_11 = FUNC_4(VAR_14);
  VAR_3 = VAR_7;
 } else if (FUNC_5(VAR_1, VAR_14, VAR_13) == ((void*)0) ||
     FUNC_5(VAR_1, VAR_8, FUNC_0(VAR_8, VAR_2)) == ((void*)0)) {
  FUNC_2();
  return VAR_0;
 } else {
  VAR_10 = FUNC_4(VAR_13);
  if (VAR_8 < VAR_4) {
   VAR_9 = FUNC_4(VAR_14);
   VAR_11 = FUNC_4(VAR_8);

  } else {
   VAR_11 = FUNC_4(VAR_8);
   VAR_9 = FUNC_4(VAR_14);

  }
  VAR_12 = VAR_11->q_forw;
  FUNC_1(VAR_11, VAR_9->q_forw);
  FUNC_1(VAR_10->q_back, VAR_12);
  FUNC_1(VAR_9, VAR_10);
  VAR_3 = VAR_8 + ((VAR_8 < VAR_4) ?
      VAR_7 - VAR_4 + 1 : 0);
 }
 if (VAR_5)
  FUNC_6(VAR_11->q_forw, VAR_12);
 VAR_6 = 1;
 FUNC_2();
 return 0;
}
