
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* registers; } ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;

void
FUNC_4 (char *VAR_2)
{
  int VAR_3 = FUNC_2 (VAR_2);
  char *VAR_4 = FUNC_1 (VAR_0, 1)->registers;

  if (VAR_3 != VAR_1 * 2)
    {
      FUNC_3 ("Wrong sized register packet (expected %d bytes, got %d)", 2*VAR_1, VAR_3);
      if (VAR_3 > VAR_1 * 2)
 VAR_3 = VAR_1 * 2;
    }
  FUNC_0 (VAR_2, VAR_4, VAR_3 / 2);
}
