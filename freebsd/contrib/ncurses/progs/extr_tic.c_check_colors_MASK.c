
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TERMTYPE ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,...) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_5(TERMTYPE *VAR_10)
{
    if ((VAR_1 > 0) != (VAR_2 > 0)
 || ((VAR_1 > VAR_2) && (VAR_0 == 0)))
 FUNC_4("inconsistent values for max_colors (%d) and max_pairs (%d)",
      VAR_1, VAR_2);

    FUNC_0(VAR_9, VAR_7);
    FUNC_0(VAR_6, VAR_5);
    FUNC_0(VAR_8, VAR_0);

    if (FUNC_2(VAR_9)
 && FUNC_2(VAR_6)
 && !FUNC_3(VAR_9, VAR_6))
 FUNC_4("expected setf/setaf to be different");

    if (FUNC_2(VAR_7)
 && FUNC_2(VAR_5)
 && !FUNC_3(VAR_7, VAR_5))
 FUNC_4("expected setb/setab to be different");


    if (FUNC_1(VAR_1) && FUNC_1(VAR_2)
 && (((VAR_9 != ((void*)0))
      && (VAR_7 != ((void*)0)))
     || ((VAR_6 != ((void*)0))
  && (VAR_5 != ((void*)0)))
     || VAR_8)) {
 if (!FUNC_2(VAR_4) && !FUNC_2(VAR_3))
     FUNC_4("expected either op/oc string for resetting colors");
    }
}
