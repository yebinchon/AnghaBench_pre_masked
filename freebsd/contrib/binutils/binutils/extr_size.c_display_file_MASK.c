
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7 (char *VAR_3)
{
  bfd *VAR_4;

  if (FUNC_6 (VAR_3) < 1)
    {
      VAR_1 = 1;
      return;
    }

  VAR_4 = FUNC_3 (VAR_3, VAR_2);
  if (VAR_4 == ((void*)0))
    {
      FUNC_2 (VAR_3);
      VAR_1 = 1;
      return;
    }

  if (FUNC_0 (VAR_4, VAR_0))
    FUNC_4 (VAR_4);
  else
    FUNC_5 (VAR_4);

  if (!FUNC_1 (VAR_4))
    {
      FUNC_2 (VAR_3);
      VAR_1 = 1;
      return;
    }
}
