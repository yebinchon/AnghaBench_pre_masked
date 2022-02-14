
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_3)
{
  bfd *VAR_4 = (bfd *) ((void*)0);
  bfd *VAR_5 = (bfd *) ((void*)0);

  for (;;)
    {
      FUNC_5 (VAR_0);

      VAR_4 = FUNC_4 (VAR_3, VAR_4);
      if (VAR_4 == ((void*)0))
 {
   if (FUNC_1 () != VAR_1)
     {
       FUNC_3 (FUNC_2 (VAR_3));
       VAR_2 = 2;
     }
   break;
 }

      FUNC_6 (VAR_4);

      if (VAR_5 != ((void*)0))
 FUNC_0 (VAR_5);
      VAR_5 = VAR_4;
    }

  if (VAR_5 != ((void*)0))
    FUNC_0 (VAR_5);
}
