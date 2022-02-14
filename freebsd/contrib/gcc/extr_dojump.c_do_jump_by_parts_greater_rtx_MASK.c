
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6 (enum machine_mode VAR_6, int VAR_7, rtx VAR_8,
         rtx VAR_9, rtx VAR_10, rtx VAR_11)
{
  int VAR_12 = (FUNC_0 (VAR_6) / VAR_3);
  rtx VAR_13 = 0;
  int VAR_14;

  if (! VAR_11 || ! VAR_10)
    VAR_13 = FUNC_4 ();
  if (! VAR_11)
    VAR_11 = VAR_13;
  if (! VAR_10)
    VAR_10 = VAR_13;


  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
    {
      rtx VAR_15, VAR_16;

      if (VAR_4)
        {
          VAR_15 = FUNC_5 (VAR_8, VAR_14, VAR_6);
          VAR_16 = FUNC_5 (VAR_9, VAR_14, VAR_6);
        }
      else
        {
          VAR_15 = FUNC_5 (VAR_8, VAR_12 - 1 - VAR_14, VAR_6);
          VAR_16 = FUNC_5 (VAR_9, VAR_12 - 1 - VAR_14, VAR_6);
        }


      FUNC_1 (VAR_15, VAR_16, VAR_0,
                               (VAR_7 || VAR_14 > 0), VAR_5, VAR_2,
                               VAR_2, VAR_11);


      FUNC_1 (VAR_15, VAR_16, VAR_1, VAR_7, VAR_5,
                               VAR_2, VAR_2, VAR_10);
    }

  if (VAR_10)
    FUNC_2 (VAR_10);
  if (VAR_13)
    FUNC_3 (VAR_13);
}
