
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ a; scalar_t__ b; int insn_a; int jump; scalar_t__ x; int cond; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct noce_if_info*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct noce_if_info*,int ,int,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12 (struct noce_if_info *VAR_9)
{
  rtx VAR_10, VAR_11;
  int VAR_12;

  VAR_12 = 0;
  if (! VAR_8
      && (VAR_1 >= 2
   || VAR_4 == -1)
      && ((VAR_9->a == VAR_7
    && FUNC_10 (VAR_9->b, VAR_9->x))
   || ((VAR_12 = (FUNC_9 (VAR_9->cond,
           VAR_9->jump)
      != VAR_6))
       && VAR_9->b == VAR_7
       && FUNC_10 (VAR_9->a, VAR_9->x))))
    {
      FUNC_11 ();
      VAR_10 = FUNC_8 (VAR_9,
         FUNC_6 (FUNC_0 (VAR_9->x)),
         VAR_12, -1);
      if (VAR_10)
        VAR_10 = FUNC_5 (FUNC_0 (VAR_9->x), VAR_0,
          VAR_9->x,
          VAR_10, VAR_9->x, 0,
          VAR_3);

      if (VAR_10)
 {
   if (VAR_10 != VAR_9->x)
     FUNC_7 (VAR_9->x, VAR_10);

   VAR_11 = FUNC_3 (VAR_9);
   if (!VAR_11)
     return VAR_2;

   FUNC_2 (VAR_11, VAR_9->jump,
       FUNC_1 (VAR_9->insn_a));
   return VAR_5;
 }

      FUNC_4 ();
    }

  return VAR_2;
}
