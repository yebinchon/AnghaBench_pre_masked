
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct altivec_builtin_types {size_t overloaded_code; scalar_t__ code; int ret_type; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_10 (tree *VAR_5, int VAR_6,
    const struct altivec_builtin_types *VAR_7)
{
  tree VAR_8 = VAR_4[VAR_7->overloaded_code];
  tree VAR_9 = FUNC_8 (VAR_7->ret_type);
  tree VAR_10 = FUNC_3 (FUNC_1 (VAR_8));
  tree VAR_11 = VAR_3, VAR_12[3];

  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    VAR_12[VAR_13] = FUNC_2 (VAR_10), VAR_10 = FUNC_0 (VAR_10);
  if (VAR_7->code == VAR_1
      && VAR_7->overloaded_code != VAR_0)
    {
      tree VAR_14;
      VAR_14 = VAR_5[2], VAR_5[2] = VAR_5[1], VAR_5[1] = VAR_14;
      VAR_14 = VAR_12[2], VAR_12[2] = VAR_12[1], VAR_12[1] = VAR_14;

      VAR_5[0] = FUNC_6 (VAR_2, FUNC_1 (VAR_5[0]), VAR_5[0],
        FUNC_5 (VAR_3, 2));
    }

  while (--VAR_6 >= 0)
    VAR_11 = FUNC_9 (VAR_3,
    FUNC_7 (VAR_12[VAR_6], VAR_5[VAR_6]),
    VAR_11);

  return FUNC_7 (VAR_9,
         FUNC_4 (VAR_8, VAR_11));
}
