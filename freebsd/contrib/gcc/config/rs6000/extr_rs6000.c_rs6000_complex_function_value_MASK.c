
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,unsigned int) ;

__attribute__((used)) static rtx
FUNC_8 (enum machine_mode VAR_6)
{
  unsigned int VAR_7;
  rtx VAR_8, VAR_9;
  enum machine_mode VAR_10 = FUNC_2 (VAR_6);
  unsigned int VAR_11 = FUNC_3 (VAR_10);

  if (FUNC_0 (VAR_6) && VAR_4 && VAR_3)
    VAR_7 = VAR_0;
  else
    {
      VAR_7 = VAR_1;


      if (VAR_2 && VAR_11 >= 4)
 return FUNC_7 (VAR_6, VAR_7);
    }

  if (VAR_11 >= 8)
    return FUNC_7 (VAR_6, VAR_7);

  VAR_8 = FUNC_5 (VAR_10, FUNC_7 (VAR_10, VAR_7),
     VAR_5);
  VAR_9 = FUNC_5 (VAR_10, FUNC_7 (VAR_10, VAR_7 + 1),
     FUNC_1 (VAR_11));
  return FUNC_6 (VAR_6, FUNC_4 (2, VAR_8, VAR_9));
}
