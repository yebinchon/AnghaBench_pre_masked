
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {int * codes; } ;
typedef int rtx ;



 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 char VAR_0 ;





 char VAR_1 ;

 int VAR_2 ;
 char FUNC_2 (char,char) ;
 char FUNC_3 (char) ;
 char FUNC_4 (char,char) ;
 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ,int) ;
 char VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 struct pred_data* FUNC_7 (char*) ;
 int FUNC_8 (char*,char,int) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_6 ;
 char* FUNC_10 (char const**) ;
 int FUNC_11 (char const*,char*,size_t) ;
 int FUNC_12 (char const*,char*,size_t) ;

__attribute__((used)) static void
FUNC_13 (rtx VAR_7, char VAR_8[VAR_2])
{
  char VAR_9[VAR_2];
  char VAR_10[VAR_2];
  char VAR_11[VAR_2];
  int VAR_12;

  switch (FUNC_0 (VAR_7))
    {
    case 134:
      FUNC_13 (FUNC_5 (VAR_7, 0), VAR_9);
      FUNC_13 (FUNC_5 (VAR_7, 1), VAR_10);
      for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 VAR_8[VAR_12] = FUNC_2 (VAR_9[VAR_12], VAR_10[VAR_12]);
      break;

    case 132:
      FUNC_13 (FUNC_5 (VAR_7, 0), VAR_9);
      FUNC_13 (FUNC_5 (VAR_7, 1), VAR_10);
      for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 VAR_8[VAR_12] = FUNC_4 (VAR_9[VAR_12], VAR_10[VAR_12]);
      break;
    case 128:
      FUNC_13 (FUNC_5 (VAR_7, 0), VAR_9);
      for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 VAR_8[VAR_12] = FUNC_3 (VAR_9[VAR_12]);
      break;

    case 133:

      FUNC_13 (FUNC_5 (VAR_7, 0), VAR_9);
      FUNC_13 (FUNC_5 (VAR_7, 1), VAR_10);
      FUNC_13 (FUNC_5 (VAR_7, 2), VAR_11);
      for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 VAR_8[VAR_12] = FUNC_4 (FUNC_2 (VAR_9[VAR_12], VAR_10[VAR_12]),
    FUNC_2 (FUNC_3 (VAR_9[VAR_12]),
           VAR_11[VAR_12]));
      break;

    case 131:



      if (FUNC_6 (VAR_7, 1)[0] != '\0')
 {
   FUNC_8 (VAR_8, VAR_3, VAR_2);
   break;
 }

      FUNC_8 (VAR_8, VAR_1, VAR_2);
      {
 const char *VAR_13 = FUNC_6 (VAR_7, 0);
 const char *VAR_14;

 if (*VAR_13 == '\0')
   {
     FUNC_9 (VAR_6, "empty match_code expression");
     VAR_5++;
     break;
   }

 while ((VAR_14 = FUNC_10 (&VAR_13)) != 0)
   {
     size_t VAR_15 = VAR_13 - VAR_14;
     int VAR_16 = 0;

     for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
       if (!FUNC_12 (VAR_14, FUNC_1 (VAR_12), VAR_15)
    && FUNC_1 (VAR_12)[VAR_15] == '\0')
  {
    VAR_8[VAR_12] = VAR_3;
    VAR_16 = 1;
    break;
  }
     if (!VAR_16)
       {
  FUNC_9 (VAR_6, "match_code \"%.*s\" matches nothing",
       (int) VAR_15, VAR_14);
  VAR_5 ++;
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    if (!FUNC_11 (VAR_14, FUNC_1 (VAR_12), VAR_15)
        && FUNC_1 (VAR_12)[VAR_15] == '\0'
        && !VAR_4[VAR_12])
      {
        VAR_4[VAR_12] = 1;
        FUNC_9 (VAR_6, "(did you mean \"%s\"?)", FUNC_1 (VAR_12));
      }
       }

   }
      }
      break;

    case 130:


      {
 struct pred_data *VAR_17 = FUNC_7 (FUNC_6 (VAR_7, 1));
 if (!VAR_17)
   {
     FUNC_9 (VAR_6,
          "reference to unknown predicate '%s'",
          FUNC_6 (VAR_7, 1));
     VAR_5++;
     break;
   }
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_8[VAR_12] = VAR_17->codes[VAR_12] ? VAR_0 : VAR_1;
      }
      break;


    case 129:

      FUNC_8 (VAR_8, VAR_0, VAR_2);
      break;

    default:
      FUNC_9 (VAR_6,
  "'%s' cannot be used in a define_predicate expression",
  FUNC_1 (FUNC_0 (VAR_7)));
      VAR_5++;
      FUNC_8 (VAR_8, VAR_0, VAR_2);
      break;
    }
}
