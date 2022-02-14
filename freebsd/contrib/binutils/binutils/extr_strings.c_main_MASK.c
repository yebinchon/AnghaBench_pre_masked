
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 void* VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int*,char***) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*,int ,int*) ;
 int FUNC_8 (char*) ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_9 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_10 (char*) ;
 char* VAR_15 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int VAR_19 ;
 scalar_t__ FUNC_14 (char*) ;
 char* VAR_20 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*) ;

int
FUNC_18 (int VAR_21, char **VAR_22)
{
  int VAR_23;
  int VAR_24 = 0;
  bfd_boolean VAR_25 = VAR_1;




  FUNC_3 (VAR_4, VAR_3);
  FUNC_15 (VAR_4);

  VAR_15 = VAR_22[0];
  FUNC_17 (VAR_15);

  FUNC_4 (&VAR_21, &VAR_22);

  VAR_19 = -1;
  VAR_13 = VAR_1;
  VAR_14 = VAR_1;
  VAR_7 = VAR_5;
  VAR_20 = ((void*)0);
  VAR_8 = 's';

  while ((VAR_23 = FUNC_7 (VAR_21, VAR_22, "afhHn:ot:e:T:Vv0123456789",
         VAR_10, (int *) 0)) != VAR_0)
    {
      switch (VAR_23)
 {
 case 'a':
   VAR_7 = VAR_1;
   break;

 case 'f':
   VAR_14 = VAR_5;
   break;

 case 'H':
 case 'h':
   FUNC_16 (VAR_18, 0);

 case 'n':
   VAR_19 = FUNC_8 (VAR_11);
   if (VAR_19 < 1)
     FUNC_5 (FUNC_1("invalid number %s"), VAR_11);
   break;

 case 'o':
   VAR_13 = VAR_5;
   VAR_6 = 8;
   break;

 case 't':
   VAR_13 = VAR_5;
   if (VAR_11[1] != '\0')
     FUNC_16 (VAR_16, 1);
   switch (VAR_11[0])
     {
     case 'o':
       VAR_6 = 8;
       break;

     case 'd':
       VAR_6 = 10;
       break;

     case 'x':
       VAR_6 = 16;
       break;

     default:
       FUNC_16 (VAR_16, 1);
     }
   break;

 case 'T':
   VAR_20 = VAR_11;
   break;

 case 'e':
   if (VAR_11[1] != '\0')
     FUNC_16 (VAR_16, 1);
   VAR_8 = VAR_11[0];
   break;

 case 'V':
 case 'v':
   FUNC_10 ("strings");
   break;

 case '?':
   FUNC_16 (VAR_16, 1);

 default:
   if (VAR_19 < 0)
     VAR_19 = VAR_23 - '0';
   else
     VAR_19 = VAR_19 * 10 + VAR_23 - '0';
   break;
 }
    }

  if (VAR_19 < 0)
    VAR_19 = 4;

  switch (VAR_8)
    {
    case 'S':
    case 's':
      VAR_9 = 1;
      break;
    case 'b':
    case 'l':
      VAR_9 = 2;
      break;
    case 'B':
    case 'L':
      VAR_9 = 4;
      break;
    default:
      FUNC_16 (VAR_16, 1);
    }

  FUNC_2 ();
  FUNC_11 ();

  if (VAR_12 >= VAR_21)
    {
      VAR_7 = VAR_1;



      FUNC_9 ("{standard input}", VAR_17, 0, 0, 0, (char *) ((void*)0));
      VAR_25 = VAR_5;
    }
  else
    {
      for (; VAR_12 < VAR_21; ++VAR_12)
 {
   if (FUNC_13 (VAR_22[VAR_12], "-") == 0)
     VAR_7 = VAR_1;
   else
     {
       VAR_25 = VAR_5;
       VAR_24 |= FUNC_14 (VAR_22[VAR_12]) == VAR_1;
     }
 }
    }

  if (!VAR_25)
    FUNC_16 (VAR_16, 1);

  return (VAR_24);
}
