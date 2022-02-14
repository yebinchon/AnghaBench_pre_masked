
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int
FUNC_2 (unsigned int VAR_13, int VAR_14, enum reload_type VAR_15)
{
  int VAR_16;


  if (FUNC_0 (VAR_2, VAR_13)
      || FUNC_0 (VAR_1, VAR_13))
    return 0;

  switch (VAR_15)
    {
    case 128:

      if (FUNC_0 (VAR_9, VAR_13)
   || FUNC_0 (VAR_7, VAR_13)
   || FUNC_0 (VAR_8, VAR_13)
   || FUNC_0 (VAR_6, VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_5[VAR_16], VAR_13)
     || FUNC_0 (VAR_3[VAR_16], VAR_13)
     || FUNC_0 (VAR_12[VAR_16], VAR_13)
     || FUNC_0 (VAR_10[VAR_16], VAR_13)
     || FUNC_0 (VAR_4[VAR_16], VAR_13)
     || FUNC_0 (VAR_11[VAR_16], VAR_13))
   return 0;

      return 1;

    case 137:
      if (FUNC_0 (VAR_6, VAR_13)
   || FUNC_0 (VAR_7, VAR_13))
 return 0;

      if (FUNC_0 (VAR_8, VAR_13))
 return 0;


      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13))
   return 0;


      for (VAR_16 = VAR_14 + 1; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_5[VAR_16], VAR_13)
     || FUNC_0 (VAR_3[VAR_16], VAR_13))
   return 0;

      return 1;

    case 136:


      if (FUNC_0 (VAR_5[VAR_14], VAR_13)
   || FUNC_0 (VAR_3[VAR_14], VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13))
   return 0;

      return 1;

    case 138:



      if (FUNC_0 (VAR_3[VAR_14], VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13))
   return 0;

      return 1;

    case 129:




      if (FUNC_0 (VAR_12[VAR_14], VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 <= VAR_14; VAR_16++)
 if (FUNC_0 (VAR_11[VAR_16], VAR_13))
   return 0;

      return 1;

    case 131:





      if (FUNC_0 (VAR_10[VAR_14], VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 <= VAR_14; VAR_16++)
 if (FUNC_0 (VAR_11[VAR_16], VAR_13))
   return 0;

      return 1;

    case 133:
      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13))
   return 0;

      return (! FUNC_0 (VAR_6, VAR_13)
       && ! FUNC_0 (VAR_7, VAR_13));

    case 134:
      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13))
   return 0;

      return (!FUNC_0 (VAR_8, VAR_13));

    case 130:




      if (FUNC_0 (VAR_6, VAR_13))
 return 0;

      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_11[VAR_16], VAR_13))
   return 0;

      for (VAR_16 = VAR_14; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_12[VAR_16], VAR_13)
     || FUNC_0 (VAR_10[VAR_16], VAR_13))
   return 0;

      return 1;

    case 135:
      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 if (FUNC_0 (VAR_4[VAR_16], VAR_13)
     || FUNC_0 (VAR_11[VAR_16], VAR_13))
   return 0;

      return (! FUNC_0 (VAR_6, VAR_13)
       && ! FUNC_0 (VAR_7, VAR_13));

    case 132:
      return ! FUNC_0 (VAR_9, VAR_13);

    default:
      FUNC_1 ();
    }
}
