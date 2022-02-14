
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; size_t st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (size_t) ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 char* VAR_12 ;
 int FUNC_7 (char*,int ,char*,...) ;
 int FUNC_8 (char*,int,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (char const*,scalar_t__) ;
 int FUNC_10 (int,char*,size_t) ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (char const*,struct stat*) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char const*) ;
 size_t FUNC_16 (char const*) ;
 char* FUNC_17 (char*,int ) ;
 char* FUNC_18 (char const*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (size_t) ;
 int FUNC_21 (int) ;

__attribute__((used)) static void
FUNC_22 (const char *VAR_14, int VAR_15,
         int VAR_16)
{
  size_t VAR_17 = FUNC_16 (VAR_14);
  char * VAR_18 = FUNC_3 (VAR_17 + FUNC_16 (VAR_7) + 1);
  char *VAR_19;
  char *VAR_20;
  char *VAR_21;
  const char *VAR_22;
  time_t VAR_23;
  size_t VAR_24;
  int VAR_25;



  FUNC_15 (VAR_18, VAR_14);
  FUNC_14 (VAR_18, VAR_7);







  VAR_25 = 0;


start_over: ;

  if (FUNC_2 (VAR_18, VAR_5) == -1)
    {
      if (VAR_10 == VAR_2)
 {
   if (VAR_16)
     {
       FUNC_7 ("%s: warning: missing SYSCALLS file '%s'\n",
        VAR_13, VAR_18);
       return;
     }
   VAR_25 = 1;
 }
      else
 {
   int VAR_26 = VAR_10;
   FUNC_7 ("%s: can't read aux info file '%s': %s\n",
    VAR_13, FUNC_12 (((void*)0), VAR_18),
    FUNC_21 (VAR_26));
   VAR_11++;
   return;
 }
    }
  if (VAR_25)
    {
      if (!FUNC_6 (VAR_14))
 {
   VAR_11++;
   return;
 }
      if (FUNC_2 (VAR_18, VAR_5) == -1)
 {
   int VAR_27 = VAR_10;
   FUNC_7 ("%s: can't read aux info file '%s': %s\n",
    VAR_13, FUNC_12 (((void*)0), VAR_18),
    FUNC_21 (VAR_27));
   VAR_11++;
   return;
 }
    }

  {
    struct stat VAR_28;



    if (FUNC_13 (VAR_18, &VAR_28) == -1)
      {
 int VAR_29 = VAR_10;
 FUNC_7 ("%s: can't get status of aux info file '%s': %s\n",
  VAR_13, FUNC_12 (((void*)0), VAR_18),
  FUNC_21 (VAR_29));
 VAR_11++;
 return;
      }




    if ((VAR_24 = VAR_28.st_size) == 0)
      return;





    VAR_23 = VAR_28.st_mtime;

    if (!VAR_16)
      {




 if (FUNC_13 (VAR_14, &VAR_28) == -1)
   {
     int VAR_30 = VAR_10;
     FUNC_7 ("%s: can't get status of aux info file '%s': %s\n",
      VAR_13, FUNC_12 (((void*)0), VAR_14),
      FUNC_21 (VAR_30));
     VAR_11++;
     return;
   }
 if (VAR_28.st_mtime > VAR_23)
   {
     VAR_25 = 1;
     goto start_over;
   }
      }
  }

  {
    int VAR_31;
    int VAR_32;



    VAR_32 = VAR_4;




    if ((VAR_31 = FUNC_8 (VAR_18, VAR_32, 0444 )) == -1)
      {
 int VAR_33 = VAR_10;
 FUNC_7 ("%s: can't open aux info file '%s' for reading: %s\n",
  VAR_13, FUNC_12 (((void*)0), VAR_18),
  FUNC_21 (VAR_33));
 return;
      }



    VAR_19 = FUNC_20 (VAR_24 + 1);
    VAR_20 = VAR_19 + VAR_24;
    *VAR_20 = '\0';



    if (FUNC_10 (VAR_31, VAR_19, VAR_24) !=
 (int) VAR_24)
      {
 int VAR_34 = VAR_10;
 FUNC_7 ("%s: error reading aux info file '%s': %s\n",
  VAR_13, FUNC_12 (((void*)0), VAR_18),
  FUNC_21 (VAR_34));
 FUNC_5 (VAR_19);
 FUNC_4 (VAR_31);
 return;
      }



    if (FUNC_4 (VAR_31))
      {
 int VAR_35 = VAR_10;
 FUNC_7 ("%s: error closing aux info file '%s': %s\n",
  VAR_13, FUNC_12 (((void*)0), VAR_18),
  FUNC_21 (VAR_35));
 FUNC_5 (VAR_19);
 FUNC_4 (VAR_31);
 return;
      }
  }




  if (VAR_25 && !VAR_15)
    if (FUNC_19 (VAR_18) == -1)
      {
 int VAR_36 = VAR_10;
 FUNC_7 ("%s: can't delete aux info file '%s': %s\n",
  VAR_13, FUNC_12 (((void*)0), VAR_18),
  FUNC_21 (VAR_36));
      }
  {
    char *VAR_37 = VAR_19;

    while (*VAR_37 != ':'



    )
      VAR_37++;
    VAR_37++;
    while (*VAR_37 == ' ')
      VAR_37++;
    VAR_12 = VAR_37;
    while (*VAR_37 != ' ')
      VAR_37++;
    *VAR_37++ = VAR_0;
    *VAR_37++ = '\0';
    while (*VAR_37++ != '\n')
      continue;
    VAR_22 = VAR_37;
    VAR_21 = 0;
    if (! FUNC_0 (VAR_12))
      {


 char *VAR_38;
 VAR_21 = FUNC_20 (VAR_17 + (VAR_37-VAR_12));
 FUNC_15 (VAR_21, VAR_14);
 VAR_38 = FUNC_17 (VAR_21, VAR_0);
 if (VAR_38)
   VAR_38++;
 else
   VAR_38 = VAR_21;
 FUNC_15 (VAR_38, VAR_12);
 VAR_12 = VAR_21;
      }
  }


  {
    const char *VAR_39;






    if (!VAR_16)
      {
 VAR_9 = 2;

 for (VAR_39 = VAR_22; *VAR_39; )
   {
     if (FUNC_9 (VAR_39, VAR_23))
       {
  FUNC_5 (VAR_19);
  FUNC_5 (VAR_21);
  if (VAR_15 && FUNC_19 (VAR_18) == -1)
    {
      int VAR_40 = VAR_10;
             FUNC_7 ("%s: can't delete file '%s': %s\n",
       VAR_13, FUNC_12 (((void*)0), VAR_18),
       FUNC_21 (VAR_40));
             return;
           }
  VAR_25 = 1;
         goto start_over;
       }



     while (*VAR_39 != '\n')
       VAR_39++;
     VAR_39++;
     VAR_9++;
   }
      }




    VAR_9 = 2;

    for (VAR_39 = VAR_22; *VAR_39;)
      {
 char *VAR_41 = FUNC_18 (VAR_39);

 if (VAR_41)
   {
     FUNC_11 (VAR_41, VAR_16);
     FUNC_5 (VAR_41);
   }
 else
   FUNC_11 (VAR_39, VAR_16);



 while (*VAR_39 != '\n')
   VAR_39++;
 VAR_39++;
 VAR_9++;
      }
  }

  FUNC_5 (VAR_19);
  FUNC_5 (VAR_21);
}
