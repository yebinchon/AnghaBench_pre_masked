
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,int,int,int,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_8(int VAR_12)
{




    int VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;



    VAR_15 = FUNC_5(&VAR_9) &&
     (VAR_6 ||
  (FUNC_2(VAR_3)



  ) ||
   FUNC_1(VAR_2));
    VAR_18 = FUNC_5(&VAR_11);

    VAR_17 = FUNC_4(&VAR_10) && (VAR_5 == 0);

    VAR_14 = !VAR_0 && FUNC_4(&VAR_8);

    VAR_16 = !VAR_1;



    VAR_13 = FUNC_3(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, !VAR_12);



    if (FUNC_5(&VAR_10)) {
     VAR_13 |= FUNC_7();
    }

    if (FUNC_5(&VAR_8)) {
 VAR_13 |= FUNC_6();
    }
    return VAR_13;
}
