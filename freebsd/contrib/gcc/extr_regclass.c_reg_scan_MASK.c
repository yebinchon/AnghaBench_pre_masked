
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (unsigned int,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10 (rtx VAR_6, unsigned int VAR_7)
{
  rtx VAR_8;

  FUNC_9 (VAR_3);

  FUNC_6 (VAR_7, VAR_2, VAR_0);
  VAR_4 = 3;
  VAR_5 = 0;

  for (VAR_8 = VAR_6; VAR_8; VAR_8 = FUNC_2 (VAR_8))
    if (FUNC_1 (VAR_8))
      {
 rtx VAR_9 = FUNC_3 (VAR_8);
 if (FUNC_0 (VAR_9) == VAR_1
     && FUNC_5 (VAR_9, 0) > VAR_4)
   VAR_4 = FUNC_5 (VAR_9, 0);
 FUNC_7 (VAR_9, VAR_8, 0);

 if (FUNC_4 (VAR_8))
   FUNC_7 (FUNC_4 (VAR_8), VAR_8, 1);
      }

  VAR_4 += VAR_5;

  FUNC_8 (VAR_3);
}
