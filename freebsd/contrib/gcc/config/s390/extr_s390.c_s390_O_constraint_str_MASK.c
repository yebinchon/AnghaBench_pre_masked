
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int,int ) ;

int
FUNC_4 (const char VAR_3, HOST_WIDE_INT VAR_4)
{
  if (!VAR_2)
    return 0;

  switch (VAR_3)
    {
    case 's':
      return FUNC_3 (VAR_4, VAR_1) == VAR_4;

    case 'p':
      return VAR_4 == 0
 || FUNC_2 (FUNC_0 (VAR_4), VAR_0, VAR_1, 0) == 1;

    case 'n':
      return VAR_4 == -1
 || FUNC_2 (FUNC_0 (VAR_4), VAR_0, VAR_1, -1) == 1;

    default:
      FUNC_1 ();
    }
}
