
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*,char*,char*) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, unsigned VAR_1,
     int VAR_2, CORE_ADDR VAR_3)
{
  if (VAR_1 < 32 * 8)
    {
      FUNC_2 ("Core file register section too small (%u bytes).", VAR_1);
      return;
    }

  switch (VAR_2)
    {
    case 0:

      FUNC_1 (-1, VAR_0, VAR_0 + 31*8,
        (VAR_1 >= 33 * 8
         ? VAR_0 + 32*8 : ((void*)0)));
      break;

    case 2:

      FUNC_0 (-1, VAR_0, VAR_0 + 31*8);
      break;

    default:
      break;
    }
}
