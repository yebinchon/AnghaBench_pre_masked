
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ x; int insn_a; int jump; int b; int a; int cond; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (struct noce_if_info*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct noce_if_info*,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11 (struct noce_if_info *VAR_3)
{
  enum rtx_code VAR_4;
  rtx VAR_5, VAR_6;

  if ((FUNC_0 (VAR_3->a) || FUNC_9 (VAR_3->a, VAR_2))
      && (FUNC_0 (VAR_3->b) || FUNC_9 (VAR_3->b, VAR_2)))
    {
      FUNC_10 ();

      VAR_4 = FUNC_1 (VAR_3->cond);
      VAR_5 = FUNC_7 (VAR_3, VAR_3->x, VAR_4,
    FUNC_3 (VAR_3->cond, 0),
    FUNC_3 (VAR_3->cond, 1),
    VAR_3->a, VAR_3->b);

      if (VAR_5)
 {
   if (VAR_5 != VAR_3->x)
     FUNC_8 (VAR_3->x, VAR_5);

   VAR_6 = FUNC_5 (VAR_3);
   if (!VAR_6)
     return VAR_0;

   FUNC_4 (VAR_6, VAR_3->jump,
       FUNC_2 (VAR_3->insn_a));
   return VAR_1;
 }
      else
 {
   FUNC_6 ();
   return VAR_0;
 }
    }

  return VAR_0;
}
