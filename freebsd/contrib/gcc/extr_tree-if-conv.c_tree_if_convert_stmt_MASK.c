
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
typedef int block_stmt_iterator ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (struct loop*,int ,int ,int *) ;

__attribute__((used)) static tree
FUNC_5 (struct loop * VAR_5, tree VAR_6, tree VAR_7,
        block_stmt_iterator *VAR_8)
{
  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_1 (VAR_3, "------if-convert stmt\n");
      FUNC_3 (VAR_3, VAR_6, VAR_2);
      FUNC_3 (VAR_3, VAR_7, VAR_2);
    }

  switch (FUNC_0 (VAR_6))
    {

    case 129:
      break;

    case 128:





      break;

    case 130:


      FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8);
      VAR_7 = VAR_0;
      break;

    default:
      FUNC_2 ();
    }
  return VAR_7;
}
