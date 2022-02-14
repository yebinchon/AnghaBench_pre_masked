
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int,int,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (tree VAR_7, enum rtx_code VAR_8,
       enum rtx_code VAR_9, rtx VAR_10,
       rtx VAR_11)
{
  rtx VAR_12, VAR_13;
  tree VAR_14;
  enum machine_mode VAR_15;
  int VAR_16;
  enum rtx_code VAR_17;


  VAR_12 = FUNC_8 (FUNC_2 (VAR_7, 0));
  if (FUNC_1 (FUNC_2 (VAR_7, 0)) == VAR_1)
    return;

  VAR_13 = FUNC_8 (FUNC_2 (VAR_7, 1));
  if (FUNC_1 (FUNC_2 (VAR_7, 1)) == VAR_1)
    return;

  VAR_14 = FUNC_3 (FUNC_2 (VAR_7, 0));
  VAR_15 = FUNC_4 (VAR_14);
  if (FUNC_1 (FUNC_2 (VAR_7, 0)) == VAR_4
      && (FUNC_1 (FUNC_2 (VAR_7, 1)) != VAR_4
          || (FUNC_0 (VAR_15)
              > FUNC_0 (FUNC_4 (FUNC_3 (FUNC_2 (VAR_7,
                                                                      1)))))))
    {


      VAR_14 = FUNC_3 (FUNC_2 (VAR_7, 1));
      VAR_15 = FUNC_4 (VAR_14);
    }
  VAR_16 = FUNC_5 (VAR_14);
  VAR_17 = VAR_16 ? VAR_9 : VAR_8;
  FUNC_6 (VAR_12, VAR_13, VAR_17, VAR_16, VAR_15,
                           ((VAR_15 == VAR_0)
                            ? FUNC_9 (FUNC_2 (VAR_7, 0)) : VAR_5),
                           VAR_10, VAR_11);
}
