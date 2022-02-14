
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int * VAR_5 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_6, tree VAR_7)
{
  tree VAR_8, VAR_9, VAR_10, VAR_11;
  const char *VAR_12;

  if (!FUNC_10 (VAR_7, VAR_3, VAR_3, VAR_1,
    VAR_4))
    return 0;

  VAR_8 = FUNC_2 (VAR_7);
  VAR_9 = FUNC_2 (FUNC_0 (VAR_7));
  VAR_10 = FUNC_2 (FUNC_0 (FUNC_0 (VAR_7)));

  VAR_12 = FUNC_5 (VAR_9);

  if (VAR_12 && *VAR_12 == '\0')
    return FUNC_8 (FUNC_1 (FUNC_1 (VAR_6)), VAR_8, VAR_9);

  if (! FUNC_6 (VAR_10, 1) || ! FUNC_7 (VAR_10))
    return 0;

  VAR_7 = FUNC_4 (VAR_2, VAR_9);
  VAR_7 = FUNC_9 (VAR_2, VAR_8, VAR_7);


  VAR_11 = VAR_5[VAR_0];
  if (!VAR_11)
    return 0;

  return FUNC_3 (VAR_11, VAR_7);
}
