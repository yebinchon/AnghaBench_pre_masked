
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 char* VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_10 (char const*) ;
 int VAR_8 ;
 int FUNC_11 (char) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (tree VAR_9)
{
  switch (FUNC_0 (VAR_9))
    {
    case 128:
      FUNC_11 ('v');
      break;

    case 131:
      FUNC_11 ('b');
      break;

    case 130:

      if (FUNC_3 (VAR_9))
 VAR_9 = FUNC_1 (VAR_9);



      if (VAR_9 == VAR_8)
 FUNC_11 ('w');
      else if (FUNC_2 (VAR_9))
 FUNC_12 (VAR_9);
      else
 {
   size_t VAR_10;


 iagain:
   for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10)
     if (VAR_9 == VAR_3[VAR_10])
       {

  FUNC_11 (VAR_2[VAR_10]);
  break;
       }

   if (VAR_10 == VAR_4)
     {
       tree VAR_11 = FUNC_7 (FUNC_4 (VAR_9),
            FUNC_6 (VAR_9));
       if (VAR_9 != VAR_11)
  {
    VAR_9 = VAR_11;
    goto iagain;
  }

       if (FUNC_5 (VAR_9) == 128)
  FUNC_11 (FUNC_6 (VAR_9) ? 'o' : 'n');
       else
  {
    const char *VAR_12;
    char VAR_13[11];

    VAR_12 = FUNC_6 (VAR_9) ? "uint" : "int";
    FUNC_9 (VAR_13, "%u", (unsigned) FUNC_5 (VAR_9));
    FUNC_11 ('u');
    FUNC_14 (FUNC_10 (VAR_12) + FUNC_10 (VAR_13));
    FUNC_13 (VAR_12);
    FUNC_13 (VAR_13);
  }
     }
 }
      break;

    case 129:
      if (VAR_9 == VAR_1
   || VAR_9 == VAR_6)
 FUNC_11 ('f');
      else if (VAR_9 == VAR_0
        || VAR_9 == VAR_5)
 FUNC_11 ('d');
      else if (VAR_9 == VAR_7)
 FUNC_11 ('e');
      else
 FUNC_8 ();
      break;

    default:
      FUNC_8 ();
    }
}
