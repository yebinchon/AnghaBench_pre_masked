
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (char const*,int ) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_3)
{
  bfd * VAR_4 = FUNC_3 (VAR_3, 0);

  if (!VAR_4)

    FUNC_5 (FUNC_0("Unable to open object file: %s"), VAR_3);


  FUNC_6 (FUNC_0("Scanning object file %s"), VAR_3);

  if (FUNC_1 (VAR_4, VAR_0))
    {
      bfd *VAR_5 = FUNC_4 (VAR_4, 0);
      while (VAR_5)
 {
   if (FUNC_1 (VAR_5, VAR_1))
     FUNC_8 (VAR_5);
   FUNC_2 (VAR_5);
   VAR_5 = FUNC_4 (VAR_4, VAR_5);
 }





    }
  else if (FUNC_1 (VAR_4, VAR_1))
    {
      FUNC_8 (VAR_4);





    }

  FUNC_2 (VAR_4);
}
