
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7 (enum machine_mode VAR_5, rtx VAR_6, rtx VAR_7,
          rtx VAR_8, rtx VAR_9)
{
  int VAR_10 = (FUNC_0 (VAR_5) / VAR_2);
  rtx VAR_11 = 0;
  int VAR_12;

  if (VAR_7 == VAR_3)
    {
      FUNC_2 (VAR_5, VAR_6, VAR_8, VAR_9);
      return;
    }
  else if (VAR_6 == VAR_3)
    {
      FUNC_2 (VAR_5, VAR_7, VAR_8, VAR_9);
      return;
    }

  if (! VAR_8)
    VAR_11 = VAR_8 = FUNC_5 ();

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
    FUNC_1 (FUNC_6 (VAR_6, VAR_12, VAR_5),
                             FUNC_6 (VAR_7, VAR_12, VAR_5),
                             VAR_0, 0, VAR_4, VAR_1,
        VAR_8, VAR_1);

  if (VAR_9)
    FUNC_3 (VAR_9);
  if (VAR_11)
    FUNC_4 (VAR_11);
}
