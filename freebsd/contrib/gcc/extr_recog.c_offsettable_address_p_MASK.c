
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;

int
FUNC_15 (int VAR_7, enum machine_mode VAR_8, rtx VAR_9)
{
  enum rtx_code VAR_10 = FUNC_1 (VAR_9);
  rtx VAR_11;
  rtx VAR_12 = VAR_9;
  rtx *VAR_13;
  int (*VAR_14) (enum machine_mode, rtx) =
    (VAR_7 ? FUNC_12 : FUNC_9);
  unsigned int VAR_15 = FUNC_4 (VAR_8);

  if (FUNC_0 (VAR_9))
    return 1;




  if (FUNC_10 (VAR_9))
    return 0;





  if (VAR_15 == 0)
    VAR_15 = VAR_0 / VAR_1;




  if ((VAR_10 == VAR_4) && (VAR_13 = FUNC_7 (&VAR_12)))
    {
      int VAR_16;

      VAR_12 = *VAR_13;
      *VAR_13 = FUNC_11 (*VAR_13, VAR_15 - 1);


      VAR_16 = (*VAR_14) (VAR_5, VAR_9);


      *VAR_13 = VAR_12;
      return VAR_16;
    }

  if (FUNC_5 (VAR_10) == VAR_6)
    return 0;






  if (FUNC_1 (VAR_9) == VAR_3
      && VAR_8 != VAR_2
      && VAR_15 <= FUNC_3 (VAR_8) / VAR_1)
    VAR_11 = FUNC_8 (FUNC_2 (VAR_9), FUNC_6 (VAR_9, 0),
   FUNC_11 (FUNC_6 (VAR_9, 1), VAR_15 - 1));
  else
    VAR_11 = FUNC_11 (VAR_9, VAR_15 - 1);



  return (*VAR_14) (VAR_5, VAR_11);
}
