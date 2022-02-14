
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int num_miv_unimplemented; int num_miv_dependent; int num_miv_independent; int num_miv; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int*) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_11 (tree VAR_9,
         tree VAR_10,
         tree *VAR_11,
         tree *VAR_12,
         tree *VAR_13)
{
  bool VAR_14 = 1;
  tree VAR_15;
  VAR_4.num_miv++;
  if (VAR_5 && (VAR_6 & VAR_1))
    FUNC_9 (VAR_5, "(analyze_miv_subscript \n");

  VAR_9 = FUNC_3 (VAR_7, VAR_9, VAR_0);
  VAR_10 = FUNC_3 (VAR_7, VAR_10, VAR_0);
  VAR_15 = FUNC_4 (VAR_7, VAR_9, VAR_10);

  if (FUNC_6 (VAR_9, VAR_10))
    {


      *VAR_11 = VAR_8;
      *VAR_12 = VAR_8;
      *VAR_13 = FUNC_10 (FUNC_0 (VAR_9));
      VAR_4.num_miv_dependent++;
    }

  else if (FUNC_8 (VAR_15)


    && FUNC_5 (VAR_9, VAR_15, &VAR_14)
    && !VAR_14)
    {





      *VAR_11 = VAR_3;
      *VAR_12 = VAR_3;
      *VAR_13 = VAR_8;
      VAR_4.num_miv_independent++;
    }

  else if (FUNC_7 (VAR_9)
    && !FUNC_2 (VAR_9)
    && FUNC_7 (VAR_10)
    && !FUNC_2 (VAR_10))
    {
      FUNC_1 (VAR_9, VAR_10,
           VAR_11, VAR_12, VAR_13);

      if (*VAR_11 == VAR_2
   || *VAR_12 == VAR_2)
 VAR_4.num_miv_unimplemented++;
      else if (*VAR_11 == VAR_3
        || *VAR_12 == VAR_3)
 VAR_4.num_miv_independent++;
      else
 VAR_4.num_miv_dependent++;
    }

  else
    {

      if (VAR_5 && (VAR_6 & VAR_1))
 FUNC_9 (VAR_5, "analyze_miv_subscript test failed: unimplemented.\n");

      *VAR_11 = VAR_2;
      *VAR_12 = VAR_2;
      *VAR_13 = VAR_2;
      VAR_4.num_miv_unimplemented++;
    }

  if (VAR_5 && (VAR_6 & VAR_1))
    FUNC_9 (VAR_5, ")\n");
}
