
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int ,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10 (enum machine_mode VAR_7, rtx VAR_8,
      rtx VAR_9, rtx VAR_10)
{
  int VAR_11 = FUNC_1 (VAR_7) / VAR_3;
  rtx VAR_12;
  int VAR_13;
  rtx VAR_14 = 0;






  VAR_12 = FUNC_8 (VAR_6);
  FUNC_5 (VAR_12, FUNC_9 (VAR_8, 0, FUNC_0 (VAR_8)));
  for (VAR_13 = 1; VAR_13 < VAR_11 && VAR_12 != 0; VAR_13++)
    VAR_12 = FUNC_6 (VAR_6, VAR_5, VAR_12,
                         FUNC_9 (VAR_8, VAR_13, FUNC_0 (VAR_8)),
                         VAR_12, 1, VAR_2);

  if (VAR_12 != 0)
    {
      FUNC_2 (VAR_12, VAR_4, VAR_0, 1, VAR_6,
                               VAR_1, VAR_9, VAR_10);

      return;
    }


  if (! VAR_9)
    VAR_14 = VAR_9 = FUNC_7 ();

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
    FUNC_2 (FUNC_9 (VAR_8, VAR_13, FUNC_0 (VAR_8)),
                             VAR_4, VAR_0, 1, VAR_6, VAR_1,
                             VAR_9, VAR_1);

  if (VAR_10)
    FUNC_3 (VAR_10);

  if (VAR_14)
    FUNC_4 (VAR_14);
}
