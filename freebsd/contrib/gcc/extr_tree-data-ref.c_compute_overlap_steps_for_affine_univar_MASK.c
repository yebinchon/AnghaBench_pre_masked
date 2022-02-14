
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (int VAR_2, int VAR_3, int VAR_4,
      tree *VAR_5, tree *VAR_6,
      tree *VAR_7, int VAR_8)
{
  if (((VAR_3 > 0 && VAR_4 > 0)
       || (VAR_3 < 0 && VAR_4 < 0)))
    {
      int VAR_9, VAR_10;
      int VAR_11, VAR_12, VAR_13;

      VAR_11 = FUNC_4 (VAR_3, VAR_4);
      VAR_9 = VAR_4 / VAR_11;
      VAR_10 = VAR_3 / VAR_11;

      VAR_13 = FUNC_0 (VAR_2, VAR_9);
      VAR_13 = FUNC_1 (VAR_13, FUNC_0 (VAR_2, VAR_10));
      VAR_12 = VAR_13;

      *VAR_5 = FUNC_3
 (VAR_8, VAR_1,
  FUNC_2 (VAR_0, VAR_9));
      *VAR_6 = FUNC_3
 (VAR_8, VAR_1,
  FUNC_2 (VAR_0, VAR_10));
      *VAR_7 = FUNC_2 (VAR_0, VAR_12);
    }

  else
    {
      *VAR_5 = VAR_1;
      *VAR_6 = VAR_1;
      *VAR_7 = VAR_1;
    }
}
