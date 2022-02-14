
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int num_subscript_undetermined; int num_same_subscript_function; int num_subscript_tests; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (tree VAR_7,
    tree VAR_8,
    tree *VAR_9,
    tree *VAR_10,
    tree *VAR_11)
{
  VAR_3.num_subscript_tests++;

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_7 (VAR_4, "(analyze_overlapping_iterations \n");
      FUNC_7 (VAR_4, "  (chrec_a = ");
      FUNC_8 (VAR_4, VAR_7, 0);
      FUNC_7 (VAR_4, ")\n  (chrec_b = ");
      FUNC_8 (VAR_4, VAR_8, 0);
      FUNC_7 (VAR_4, ")\n");
    }

  if (VAR_7 == VAR_0
      || VAR_8 == VAR_0
      || FUNC_4 (VAR_7)
      || FUNC_4 (VAR_8))
    {
      VAR_3.num_subscript_undetermined++;

      *VAR_9 = VAR_2;
      *VAR_10 = VAR_2;
    }



  else if (FUNC_5 (VAR_7, VAR_8)
    && FUNC_6 (VAR_7))
    {
      VAR_3.num_same_subscript_function++;
      *VAR_9 = VAR_6;
      *VAR_10 = VAR_6;
      *VAR_11 = VAR_2;
    }



  else if ((FUNC_3 (VAR_7)
     || FUNC_3 (VAR_8))
    && (!FUNC_6 (VAR_7)
        || !FUNC_6 (VAR_8)))
    {
      VAR_3.num_subscript_undetermined++;
      *VAR_9 = VAR_2;
      *VAR_10 = VAR_2;
    }

  else if (FUNC_10 (VAR_7, VAR_8))
    FUNC_2 (VAR_7, VAR_8,
      VAR_9, VAR_10,
      VAR_11);

  else if (FUNC_9 (VAR_7, VAR_8))
    FUNC_1 (VAR_7, VAR_8,
      VAR_9, VAR_10,
      VAR_11);

  else
    FUNC_0 (VAR_7, VAR_8,
      VAR_9, VAR_10,
      VAR_11);

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_7 (VAR_4, "  (overlap_iterations_a = ");
      FUNC_8 (VAR_4, *VAR_9, 0);
      FUNC_7 (VAR_4, ")\n  (overlap_iterations_b = ");
      FUNC_8 (VAR_4, *VAR_10, 0);
      FUNC_7 (VAR_4, ")\n");
      FUNC_7 (VAR_4, ")\n");
    }
}
