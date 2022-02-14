
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int block_stmt_iterator ;






 int VAR_0 ;


 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static tree
FUNC_10 (block_stmt_iterator *VAR_2, tree VAR_3, bool VAR_4,
     bool VAR_5)
{
  switch (FUNC_0 (VAR_3))
    {
    case 135:
      return VAR_4 ? FUNC_1 (VAR_3) : FUNC_3 (VAR_3);

    case 134:
      return FUNC_2 (VAR_3, VAR_4);

    case 128:
    case 130:
    case 131:
    case 132:
    case 133:
    case 136:
      {
 tree VAR_6 = FUNC_4 (FUNC_4 (VAR_3));

 VAR_3 = FUNC_5 ((VAR_4 ? VAR_0 : VAR_1),
      VAR_6, FUNC_9 (VAR_3));

 if (VAR_5)
   VAR_3 = FUNC_8 (VAR_2, VAR_6, VAR_3);

 return VAR_3;
      }

    case 129:
      return FUNC_7 (VAR_3, VAR_4);

    default:
      FUNC_6 ();
    }
}
