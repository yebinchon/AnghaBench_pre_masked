
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int
FUNC_2 (unsigned int VAR_11, int VAR_12, enum reload_type VAR_13)
{
  int VAR_14;

  switch (VAR_13)
    {
    case 128:


      return 1;






    case 132:



      for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_10[VAR_14], VAR_11)
     || FUNC_0 (VAR_8[VAR_14], VAR_11)
     || FUNC_0 (VAR_9[VAR_14], VAR_11)
     || FUNC_0 (VAR_4[VAR_14], VAR_11)
     || FUNC_0 (VAR_2[VAR_14], VAR_11)
     || FUNC_0 (VAR_3[VAR_14], VAR_11))
   return 0;

      return (! FUNC_0 (VAR_6, VAR_11)
       && ! FUNC_0 (VAR_7, VAR_11)
       && ! FUNC_0 (VAR_5, VAR_11)
       && ! FUNC_0 (VAR_1, VAR_11));

    case 136:
    case 138:





      for (VAR_14 = VAR_12; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_3[VAR_14], VAR_11))
   return 0;

      for (VAR_14 = VAR_12 + 1; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_4[VAR_14], VAR_11)
     || FUNC_0 (VAR_2[VAR_14], VAR_11))
   return 0;

      for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_10[VAR_14], VAR_11)
     || FUNC_0 (VAR_8[VAR_14], VAR_11)
     || FUNC_0 (VAR_9[VAR_14], VAR_11))
   return 0;

      if (FUNC_0 (VAR_7, VAR_11))
 return 0;

      return (!FUNC_0 (VAR_6, VAR_11)
       && !FUNC_0 (VAR_5, VAR_11)
       && !FUNC_0 (VAR_1, VAR_11));

    case 137:





      for (VAR_14 = VAR_12 + 1; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_4[VAR_14], VAR_11)
     || FUNC_0 (VAR_2[VAR_14], VAR_11)
     || FUNC_0 (VAR_3[VAR_14], VAR_11))
   return 0;



    case 133:


      for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_10[VAR_14], VAR_11)
     || FUNC_0 (VAR_8[VAR_14], VAR_11)
     || FUNC_0 (VAR_9[VAR_14], VAR_11))
   return 0;

      return (!FUNC_0 (VAR_1, VAR_11));

    case 134:
      for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
 if (FUNC_0 (VAR_10[VAR_14], VAR_11)
     || FUNC_0 (VAR_8[VAR_14], VAR_11)
     || FUNC_0 (VAR_9[VAR_14], VAR_11))
   return 0;

      return (!FUNC_0 (VAR_6, VAR_11)
       && !FUNC_0 (VAR_5, VAR_11)
       && !FUNC_0 (VAR_1, VAR_11));

    case 135:



      VAR_12 = VAR_0;



    case 130:
    case 129:
    case 131:




      for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
 if (FUNC_0 (VAR_10[VAR_14], VAR_11)
     || FUNC_0 (VAR_8[VAR_14], VAR_11))
   return 0;

      return 1;

    default:
      FUNC_1 ();
    }
}
