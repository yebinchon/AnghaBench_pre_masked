
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, unsigned VAR_3, int VAR_4,
                         CORE_ADDR VAR_5)
{
  switch (VAR_4)
    {
    case 0:
      if (VAR_3 != VAR_1)
 FUNC_2 ("Wrong size register set in core file.");
      else
 FUNC_1 (VAR_2, -1);
      break;

    case 2:
      if (VAR_3 != VAR_0)
 FUNC_2 ("Wrong size register set in core file.");
      else
 FUNC_0 (VAR_2, -1);
      break;

    default:

      break;
    }
}
