
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char**,int,int ) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_4)
{
  FUNC_3 (VAR_4);


  if ((VAR_3.instruction & 0xff) == 0x50)
    {
      if (FUNC_1 (&VAR_4, 20, VAR_1) != (int) VAR_0
          && FUNC_2 (&VAR_4) != (int) VAR_0
          && FUNC_1 (&VAR_4, 10, VAR_2) != (int) VAR_0)
 FUNC_0 (VAR_4);
    }
  else
    {
      if (FUNC_1 (&VAR_4, 15, VAR_1) != (int) VAR_0
          && FUNC_2 (&VAR_4) != (int) VAR_0)
 FUNC_1 (&VAR_4, 10, VAR_2);
    }
}
