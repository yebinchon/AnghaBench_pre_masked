
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,char***) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int,char**,char*,int ,int*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,unsigned long,unsigned long) ;
 char* VAR_12 ;
 int FUNC_11 (char) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int *,int *,int) ;
 int * VAR_20 ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (char*) ;

int
FUNC_19 (int VAR_24, char **VAR_25)
{
  int VAR_26;
  int VAR_27;







  FUNC_3 (VAR_4, VAR_3);
  FUNC_16 (VAR_4);

  VAR_12 = *VAR_25;
  FUNC_18 (VAR_12);

  FUNC_5 (&VAR_24, &VAR_25);

  FUNC_2 ();
  FUNC_13 ();

  while ((VAR_27 = FUNC_7 (VAR_24, VAR_25, "ABHhVvdfotx", VAR_8,
      (int *) 0)) != VAR_0)
    switch (VAR_27)
      {
      case 200:
 switch (*VAR_10)
   {
   case 'B':
   case 'b':
     VAR_5 = 1;
     break;
   case 'S':
   case 's':
     VAR_5 = 0;
     break;
   default:
     FUNC_8 (FUNC_0("invalid argument to --format: %s"), VAR_10);
     FUNC_17 (VAR_18, 1);
   }
 break;

      case 202:
 VAR_20 = VAR_10;
 break;

      case 201:



 VAR_26 = FUNC_1 (VAR_10);

 switch (VAR_26)
   {
   case 10:
     VAR_13 = VAR_6;
     break;
   case 8:
     VAR_13 = VAR_9;
     break;
   case 16:
     VAR_13 = VAR_7;
     break;
   default:
     FUNC_8 (FUNC_0("Invalid radix: %s\n"), VAR_10);
     FUNC_17 (VAR_18, 1);
   }
 break;

      case 'A':
 VAR_5 = 0;
 break;
      case 'B':
 VAR_5 = 1;
 break;
      case 'v':
      case 'V':
 VAR_17 = 1;
 break;
      case 'd':
 VAR_13 = VAR_6;
 break;
      case 'x':
 VAR_13 = VAR_7;
 break;
      case 'o':
 VAR_13 = VAR_9;
 break;
      case 't':
 VAR_16 = 1;
 break;
      case 'f':
 break;
      case 0:
 break;
      case 'h':
      case 'H':
      case '?':
 FUNC_17 (VAR_18, 1);
      }

  if (VAR_17)
    FUNC_9 ("size");
  if (VAR_15)
    FUNC_17 (VAR_19, 0);

  if (VAR_11 == VAR_24)
    FUNC_4 ("a.out");
  else
    for (; VAR_11 < VAR_24;)
      FUNC_4 (VAR_25[VAR_11++]);

  if (VAR_16 && VAR_5)
    {
      bfd_size_type VAR_28 = VAR_23 + VAR_22 + VAR_21;

      FUNC_12 (7, VAR_23);
      FUNC_11('\t');
      FUNC_12 (7, VAR_22);
      FUNC_11('\t');
      FUNC_12 (7, VAR_21);
      FUNC_10 (((VAR_13 == VAR_9) ? "\t%7lo\t%7lx\t" : "\t%7lu\t%7lx\t"),
       (unsigned long) VAR_28, (unsigned long) VAR_28);
      FUNC_6 ("(TOTALS)\n", VAR_19);
    }

  return VAR_14;
}
