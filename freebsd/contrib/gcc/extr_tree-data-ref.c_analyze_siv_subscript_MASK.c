
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int num_siv_unimplemented; int num_siv_dependent; int num_siv_independent; int num_siv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_6,
         tree VAR_7,
         tree *VAR_8,
         tree *VAR_9,
         tree *VAR_10)
{
  VAR_3.num_siv++;

  if (VAR_4 && (VAR_5 & VAR_0))
    FUNC_6 (VAR_4, "(analyze_siv_subscript \n");

  if (FUNC_5 (VAR_6)
      && FUNC_4 (VAR_7))
    FUNC_0 (VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_10);

  else if (FUNC_4 (VAR_6)
    && FUNC_5 (VAR_7))
    FUNC_0 (VAR_7, VAR_6,
          VAR_9, VAR_8, VAR_10);

  else if (FUNC_4 (VAR_6)
    && FUNC_4 (VAR_7))
    {
      if (!FUNC_3 (VAR_6)
   && !FUNC_3 (VAR_7))
 {
   FUNC_1 (VAR_6, VAR_7,
        VAR_8, VAR_9,
        VAR_10);

   if (*VAR_8 == VAR_1
       || *VAR_9 == VAR_1)
     VAR_3.num_siv_unimplemented++;
   else if (*VAR_8 == VAR_2
     || *VAR_9 == VAR_2)
     VAR_3.num_siv_independent++;
   else
     VAR_3.num_siv_dependent++;
 }
      else if (FUNC_2 (&VAR_6,
       &VAR_7))
 {
   FUNC_1 (VAR_6, VAR_7,
        VAR_8, VAR_9,
        VAR_10);


   *VAR_10 = VAR_1;

   if (*VAR_8 == VAR_1
       || *VAR_9 == VAR_1)
     VAR_3.num_siv_unimplemented++;
   else if (*VAR_8 == VAR_2
     || *VAR_9 == VAR_2)
     VAR_3.num_siv_independent++;
   else
     VAR_3.num_siv_dependent++;
 }
      else
 goto siv_subscript_dontknow;
    }

  else
    {
    siv_subscript_dontknow:;
      if (VAR_4 && (VAR_5 & VAR_0))
 FUNC_6 (VAR_4, "siv test failed: unimplemented.\n");
      *VAR_8 = VAR_1;
      *VAR_9 = VAR_1;
      *VAR_10 = VAR_1;
      VAR_3.num_siv_unimplemented++;
    }

  if (VAR_4 && (VAR_5 & VAR_0))
    FUNC_6 (VAR_4, ")\n");
}
