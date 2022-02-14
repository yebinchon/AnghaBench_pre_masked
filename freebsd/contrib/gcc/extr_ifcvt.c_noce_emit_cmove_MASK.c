
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ cond_earliest; scalar_t__ jump; int cond; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static rtx
FUNC_11 (struct noce_if_info *VAR_6, rtx VAR_7, enum rtx_code VAR_8,
   rtx VAR_9, rtx VAR_10, rtx VAR_11, rtx VAR_12)
{





  if (VAR_6->cond_earliest == VAR_6->jump)
    {
      rtx VAR_13;

      VAR_13 = FUNC_6 (VAR_8, FUNC_0 (VAR_6->cond), VAR_9, VAR_10);
      VAR_13 = FUNC_4 (FUNC_0 (VAR_7), VAR_13, VAR_12, VAR_11);
      VAR_13 = FUNC_5 (VAR_5, VAR_7, VAR_13);

      FUNC_10 ();
      VAR_13 = FUNC_2 (VAR_13);

      if (FUNC_9 (VAR_13) >= 0)
 {
   VAR_13 = FUNC_8 ();
   FUNC_3 ();
   FUNC_2 (VAR_13);

   return VAR_7;
 }

      FUNC_3 ();
    }


  if (! FUNC_7 (VAR_9, FUNC_0 (VAR_9))
      || ! FUNC_7 (VAR_10, FUNC_0 (VAR_10)))
    return VAR_4;
  return VAR_4;

}
