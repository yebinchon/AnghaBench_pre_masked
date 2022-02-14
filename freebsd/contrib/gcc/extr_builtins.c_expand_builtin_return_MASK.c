
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int) ;
 int* VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static void
FUNC_20 (rtx VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  enum machine_mode VAR_11;
  rtx VAR_12;
  rtx VAR_13 = 0;

  VAR_7 = FUNC_6 (VAR_4, VAR_7);

  FUNC_5 ();
  VAR_7 = FUNC_13 (VAR_1, VAR_7);
  VAR_8 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
    if ((VAR_11 = VAR_6[VAR_10]) != VAR_5)
      {
 VAR_9 = FUNC_1 (VAR_11) / VAR_0;
 if (VAR_8 % VAR_9 != 0)
   VAR_8 = FUNC_0 (VAR_8, VAR_9) * VAR_9;
 VAR_12 = FUNC_14 (VAR_11, FUNC_3 (VAR_10));
 FUNC_10 (VAR_12, FUNC_4 (VAR_7, VAR_11, VAR_8));

 FUNC_18 (VAR_13);
 FUNC_8 (FUNC_15 (VAR_5, VAR_12));
 VAR_13 = FUNC_17 ();
 FUNC_11 ();
 VAR_8 += FUNC_2 (VAR_11);
      }


  FUNC_8 (VAR_13);



  FUNC_12 ();
}
