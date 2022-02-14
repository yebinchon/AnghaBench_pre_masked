
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {int insn_a; int jump; int x; int b; int a; int cond; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct noce_if_info*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11 (struct noce_if_info *VAR_4)
{
  rtx VAR_5 = VAR_4->cond;
  enum rtx_code VAR_6 = FUNC_0 (VAR_5);
  rtx VAR_7, VAR_8;

  if (VAR_6 != VAR_2 && VAR_6 != VAR_0)
    return VAR_1;



  if (FUNC_2 (FUNC_1 (VAR_4->x))
      || FUNC_3 (FUNC_1 (VAR_4->x)))
    return VAR_1;



  if ((FUNC_9 (VAR_4->a, FUNC_5 (VAR_5, 0))
       && FUNC_9 (VAR_4->b, FUNC_5 (VAR_5, 1)))
      || (FUNC_9 (VAR_4->a, FUNC_5 (VAR_5, 1))
   && FUNC_9 (VAR_4->b, FUNC_5 (VAR_5, 0))))
    {
      VAR_7 = (VAR_6 == VAR_0) ? VAR_4->a : VAR_4->b;


      if (! FUNC_9 (VAR_4->x, VAR_7))
 {
   FUNC_10 ();
   FUNC_8 (VAR_4->x, VAR_7);
   VAR_8 = FUNC_7 (VAR_4);
   if (!VAR_8)
     return VAR_1;

   FUNC_6 (VAR_8, VAR_4->jump,
       FUNC_4 (VAR_4->insn_a));
 }
      return VAR_3;
    }
  return VAR_1;
}
