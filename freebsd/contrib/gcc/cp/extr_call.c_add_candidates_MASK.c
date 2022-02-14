
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct z_candidate {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_11 (tree VAR_3, tree VAR_4,
  tree VAR_5, bool VAR_6,
  tree VAR_7, tree VAR_8,
  int VAR_9,
  struct z_candidate **VAR_10)
{
  tree VAR_11;
  tree VAR_12;

  VAR_11 = VAR_7 ? FUNC_0 (VAR_7) : VAR_1;

  VAR_12 = VAR_1;

  while (VAR_3)
    {
      tree VAR_13;
      tree VAR_14;

      VAR_13 = FUNC_2 (VAR_3);

      if (FUNC_1 (VAR_13))
 {


   if (!VAR_12)
     VAR_12 = FUNC_10 (VAR_1,
      FUNC_9 (FUNC_6 (VAR_4)),
      FUNC_4 (VAR_4));
   VAR_14 = VAR_12;
 }
      else

 VAR_14 = VAR_4;

      if (FUNC_5 (VAR_13) == VAR_2)
 FUNC_8 (VAR_10,
    VAR_13,
    VAR_11,
    VAR_5,
    VAR_14,
    VAR_1,
    VAR_8,
    VAR_7,
    VAR_9,
    VAR_0);
      else if (!VAR_6)
 FUNC_7 (VAR_10,
    VAR_13,
    VAR_11,
    VAR_14,
    VAR_8,
    VAR_7,
    VAR_9);
      VAR_3 = FUNC_3 (VAR_3);
    }
}
