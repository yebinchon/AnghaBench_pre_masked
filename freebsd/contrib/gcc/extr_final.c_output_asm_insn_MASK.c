
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 char* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const) ;
 int FUNC_5 (char const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (unsigned char) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int*,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char,int ) ;
 unsigned long FUNC_17 (char const*,char**,int) ;
 int VAR_10 ;

void
FUNC_18 (const char *VAR_11, rtx *VAR_12)
{
  const char *VAR_13;
  int VAR_14;



  int VAR_15[VAR_2];
  char VAR_16[VAR_2];
  int VAR_17 = 0;



  if (*VAR_11 == 0)
    return;

  FUNC_8 (VAR_16, 0, sizeof VAR_16);
  VAR_13 = VAR_11;
  FUNC_16 ('\t', VAR_4);





  while ((VAR_14 = *VAR_13++))
    switch (VAR_14)
      {
      case '\n':
 if (VAR_7)
   FUNC_13 (VAR_12, VAR_15, VAR_17);
 if (VAR_6)
   FUNC_12 ();

 VAR_17 = 0;
 FUNC_8 (VAR_16, 0, sizeof VAR_16);

 FUNC_16 (VAR_14, VAR_4);
 break;
      case '%':

 if (*VAR_13 == '%')
   {
     VAR_13++;
     FUNC_16 (VAR_14, VAR_4);
   }



 else if (*VAR_13 == '=')
   {
     VAR_13++;
     FUNC_7 (VAR_4, "%d", VAR_8);
   }





 else if (FUNC_4 (*VAR_13))
   {
     int VAR_18 = *VAR_13++;
     unsigned long VAR_19;
     char *VAR_20;

     VAR_19 = FUNC_17 (VAR_13, &VAR_20, 10);

     if (VAR_20 == VAR_13)
       FUNC_15 ("operand number missing "
          "after %%-letter");
     else if (VAR_10 && VAR_19 >= VAR_9)
       FUNC_15 ("operand number out of range");
     else if (VAR_18 == 'l')
       FUNC_11 (VAR_12[VAR_19]);
     else if (VAR_18 == 'a')
       FUNC_10 (VAR_12[VAR_19]);
     else if (VAR_18 == 'c')
       {
  if (FUNC_1 (VAR_12[VAR_19]))
    FUNC_9 (VAR_4, VAR_12[VAR_19]);
  else
    FUNC_14 (VAR_12[VAR_19], 'c');
       }
     else if (VAR_18 == 'n')
       {
  if (FUNC_2 (VAR_12[VAR_19]) == VAR_0)
    FUNC_7 (VAR_4, VAR_1,
      - FUNC_3 (VAR_12[VAR_19]));
  else
    {
      FUNC_16 ('-', VAR_4);
      FUNC_9 (VAR_4, VAR_12[VAR_19]);
    }
       }
     else
       FUNC_14 (VAR_12[VAR_19], VAR_18);

     if (!VAR_16[VAR_19])
       VAR_15[VAR_17++] = VAR_19;
     VAR_16[VAR_19] = 1;

     VAR_13 = VAR_20;
     VAR_14 = *VAR_13;
   }

 else if (FUNC_5 (*VAR_13))
   {
     unsigned long VAR_21;
     char *VAR_22;

     VAR_21 = FUNC_17 (VAR_13, &VAR_22, 10);
     if (VAR_10 && VAR_21 >= VAR_9)
       FUNC_15 ("operand number out of range");
     else
       FUNC_14 (VAR_12[VAR_21], 0);

     if (!VAR_16[VAR_21])
       VAR_15[VAR_17++] = VAR_21;
     VAR_16[VAR_21] = 1;

     VAR_13 = VAR_22;
     VAR_14 = *VAR_13;
   }







 else
   FUNC_15 ("invalid %%-code");
 break;

      default:
 FUNC_16 (VAR_14, VAR_4);
      }


  if (VAR_7)
    FUNC_13 (VAR_12, VAR_15, VAR_17);
  if (VAR_6)
    FUNC_12 ();

  FUNC_16 ('\n', VAR_4);
}
