
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (unsigned int) ;
 int VAR_5 ;

void
FUNC_5 (tree *VAR_6, tree *VAR_7, unsigned int VAR_8)
{


  if (FUNC_1 (*VAR_7, VAR_8) >= 0)
    {
      tree VAR_9 = FUNC_3 (VAR_1, *VAR_7,
          FUNC_0 (VAR_8));

      *VAR_6
 = FUNC_3 (VAR_4, *VAR_6,
        FUNC_3 (VAR_3,
      FUNC_2 (VAR_5, VAR_9),
      FUNC_4 (VAR_8 / VAR_0)));

      *VAR_7
 = FUNC_3 (VAR_2, *VAR_7, FUNC_0 (VAR_8));
    }
}
