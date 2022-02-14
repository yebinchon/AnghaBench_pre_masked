
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;
 char FUNC_7 () ;
 int FUNC_8 () ;
 char* VAR_4 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,int,int,int,char*,int,int) ;
 int FUNC_12 (char*,int) ;
 char* FUNC_13 () ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;

void
FUNC_19 (int VAR_9)
{
  char *VAR_10, *VAR_11, *VAR_12;
  int VAR_13, VAR_14, VAR_15;
  int VAR_16;
  int VAR_17;


  if (VAR_3)
    {
      char VAR_18;





      VAR_7 = VAR_5;
      VAR_8 = VAR_6;

      FUNC_16 (&VAR_18);





      return;
    }


  VAR_10 = FUNC_13 ();
  if (VAR_10 == ((void*)0))
    return;
  VAR_13 = VAR_2;
  VAR_14 = 0;
  VAR_11 = ((void*)0);
  VAR_16 = 0;
  VAR_17 = 0;

  if (*VAR_4 == ',')
    {

      ++VAR_4;
      FUNC_0 ();

      if (*VAR_4 == '"')
 {
   VAR_12 = FUNC_4 (&VAR_15);
   if (VAR_12 == ((void*)0))
     {
       FUNC_8 ();
       return;
     }
   VAR_14 |= FUNC_12 (VAR_12, FUNC_17 (VAR_12));

   FUNC_0 ();
   if (*VAR_4 == ',')
     {
       char VAR_19;
       char *VAR_20 = VAR_4;

       ++VAR_4;
       FUNC_0 ();
       VAR_19 = *VAR_4;
       if (VAR_19 == '"')
  {
    VAR_12 = FUNC_4 (&VAR_15);
    if (VAR_12 == ((void*)0))
      {
        FUNC_8 ();
        return;
      }
    VAR_13 = FUNC_14 (VAR_12, FUNC_17 (VAR_12));
  }
       else if (VAR_19 == '@' || VAR_19 == '%')
  {
    VAR_12 = ++VAR_4;
    VAR_19 = FUNC_7 ();
    *VAR_4 = VAR_19;
    VAR_13 = FUNC_14 (VAR_12, VAR_4 - VAR_12);
  }
       else
  VAR_4 = VAR_20;
     }

   FUNC_0 ();
   if ((VAR_14 & VAR_1) != 0 && *VAR_4 == ',')
     {
       ++VAR_4;
       FUNC_0 ();
       VAR_16 = FUNC_6 ();
       FUNC_0 ();
       if (VAR_16 < 0)
  {
    FUNC_3 (FUNC_1("invalid merge entity size"));
    VAR_14 &= ~VAR_1;
    VAR_16 = 0;
  }
     }
   else if ((VAR_14 & VAR_1) != 0)
     {
       FUNC_3 (FUNC_1("entity size for SHF_MERGE not specified"));
       VAR_14 &= ~VAR_1;
     }

   if ((VAR_14 & VAR_0) != 0 && *VAR_4 == ',')
     {
       ++VAR_4;
       VAR_11 = FUNC_13 ();
       if (VAR_11 == ((void*)0))
  VAR_14 &= ~VAR_0;
       else if (FUNC_18 (VAR_4, ",comdat", 7) == 0)
  {
    VAR_4 += 7;
    VAR_17 = 1;
  }
       else if (FUNC_18 (VAR_10, ".gnu.linkonce", 13) == 0)
  VAR_17 = 1;
     }
   else if ((VAR_14 & VAR_0) != 0)
     {
       FUNC_3 (FUNC_1("group name for SHF_GROUP not specified"));
       VAR_14 &= ~VAR_0;
     }
 }
      else
 {
   do
     {
       char VAR_21;

       FUNC_0 ();
       if (*VAR_4 != '#')
  {
    FUNC_2 (FUNC_1("character following name is not '#'"));
    FUNC_8 ();
    return;
  }
       VAR_12 = ++VAR_4;
       VAR_21 = FUNC_7 ();
       *VAR_4 = VAR_21;

       VAR_14 |= FUNC_15 (VAR_12, VAR_4 - VAR_12);

       FUNC_0 ();
     }
   while (*VAR_4++ == ',');
   --VAR_4;
 }
    }

  FUNC_5 ();

  FUNC_11 (VAR_10, VAR_13, VAR_14, VAR_16, VAR_11, VAR_17, VAR_9);
}
