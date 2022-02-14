
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ b; scalar_t__ a; scalar_t__ x; int insn_a; int jump; int cond; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct noce_if_info*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct noce_if_info*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10 (struct noce_if_info *VAR_6)
{
  int VAR_7;
  rtx VAR_8, VAR_9;

  if (FUNC_0 (VAR_6->b) == VAR_0
      && FUNC_2 (VAR_6->b) == VAR_2
      && VAR_6->a == VAR_5)
    VAR_7 = 0;
  else if (VAR_6->b == VAR_5
    && FUNC_0 (VAR_6->a) == VAR_0
    && FUNC_2 (VAR_6->a) == VAR_2
    && (FUNC_8 (VAR_6->cond, VAR_6->jump)
        != VAR_4))
    VAR_7 = 1;
  else
    return VAR_1;

  FUNC_9 ();

  VAR_8 = FUNC_7 (VAR_6, VAR_6->x, VAR_7, 0);
  if (VAR_8)
    {
      if (VAR_8 != VAR_6->x)
 FUNC_6 (VAR_6->x, VAR_8);

      VAR_9 = FUNC_4 (VAR_6);
      if (! VAR_9)
 return VAR_1;

      FUNC_3 (VAR_9, VAR_6->jump,
          FUNC_1 (VAR_6->insn_a));
      return VAR_3;
    }
  else
    {
      FUNC_5 ();
      return VAR_1;
    }
}
