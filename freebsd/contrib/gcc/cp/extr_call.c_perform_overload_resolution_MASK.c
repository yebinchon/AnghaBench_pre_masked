
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct z_candidate {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int ,struct z_candidate**) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 struct z_candidate* FUNC_4 (struct z_candidate*,int ,int*) ;
 struct z_candidate* FUNC_5 (struct z_candidate*) ;

__attribute__((used)) static struct z_candidate *
FUNC_6 (tree VAR_8,
        tree VAR_9,
        struct z_candidate **VAR_10,
        bool *VAR_11)
{
  struct z_candidate *VAR_12;
  tree VAR_13 = VAR_2;
  int VAR_14 = 0;

  *VAR_10 = ((void*)0);
  *VAR_11 = 1;


  FUNC_3 (FUNC_0 (VAR_8) == VAR_0
       || FUNC_0 (VAR_8) == VAR_4
       || FUNC_0 (VAR_8) == VAR_3
       || FUNC_0 (VAR_8) == VAR_5);
  FUNC_3 (!VAR_9 || FUNC_0 (VAR_9) == VAR_6);

  if (FUNC_0 (VAR_8) == VAR_5)
    {
      VAR_13 = FUNC_1 (VAR_8, 1);
      VAR_8 = FUNC_1 (VAR_8, 0);
      VAR_14 = 1;
    }


  FUNC_2 (VAR_8, VAR_9, VAR_13, VAR_14,
                        VAR_2,
                    VAR_2,
    VAR_1,
    VAR_10);

  *VAR_10 = FUNC_4 (*VAR_10, VAR_7, VAR_11);
  if (!*VAR_11)
    return ((void*)0);

  VAR_12 = FUNC_5 (*VAR_10);
  return VAR_12;
}
