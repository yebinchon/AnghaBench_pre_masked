
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 int FUNC_1 (char*,char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const*,char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  const char *VAR_5 = VAR_4;
  const char *VAR_6 = 0, *VAR_7;
  int VAR_8;
  unsigned int VAR_9 = 0;

  while (*VAR_5 != '\0')
    {
      VAR_8 = 0;

      if (*VAR_5 == '\n')
 {
   ++VAR_5;
   continue;
 }


      VAR_7 = VAR_5;
      while (*VAR_5 != ' ')
 {
   if (*VAR_5 == '\0')
     {
     invalid_select:
       FUNC_1 ("multilib select '%s' is invalid", VAR_4);
     }

   ++VAR_5;
 }




      if (VAR_7[0] == '.' && VAR_7[1] == ':')
 VAR_8 = 1;




      {
 const char *VAR_10 = VAR_2;
 const char *VAR_11;

 while (*VAR_10 != '\0')
   {
     int VAR_12 = 1;

     if (*VAR_10 == '\n')
       {
  ++VAR_10;
  continue;
       }


     while (*VAR_10 != ';')
       {
  const char *VAR_13;
  int VAR_14 = 0;

  if (*VAR_10 == '\0')
    {
    invalid_exclusion:
      FUNC_1 ("multilib exclusion '%s' is invalid",
      VAR_2);
    }

  if (! VAR_12)
    {
      ++VAR_10;
      continue;
    }

  VAR_11 = VAR_10;

  while (*VAR_10 != ' ' && *VAR_10 != ';')
    {
      if (*VAR_10 == '\0')
        goto invalid_exclusion;
      ++VAR_10;
    }

  VAR_13 = VAR_5 + 1;
  while (*VAR_13 != ';')
    {
      const char *VAR_15;
      int VAR_16 = VAR_10 - VAR_11;

      if (*VAR_13 == '\0')
        goto invalid_select;

      VAR_15 = VAR_13;

      while (*VAR_13 != ' ' && *VAR_13 != ';')
        {
   if (*VAR_13 == '\0')
     goto invalid_select;
   ++VAR_13;
        }

      if (! FUNC_3 (VAR_15, VAR_11,
       (VAR_16 < VAR_13 - VAR_15) ? VAR_13 - VAR_15 : VAR_16)
   || FUNC_0 (VAR_11, VAR_10 - VAR_11))
        {
   VAR_14 = 1;
   break;
        }

      if (*VAR_13 == ' ')
        ++VAR_13;
    }

  if (! VAR_14)
    VAR_12 = 0;

  if (*VAR_10 == ' ')
    ++VAR_10;
       }

     if (VAR_12)
       {
  VAR_8 = 1;
  break;
       }

     if (*VAR_10 != '\0')
       ++VAR_10;
   }
      }

      if (! VAR_8)
 {

   VAR_8 = (VAR_6 != 0
    && (unsigned int) (VAR_5 - VAR_7) == VAR_9
    && ! FUNC_3 (VAR_6, VAR_7, VAR_9));

   VAR_6 = VAR_7;
   VAR_9 = VAR_5 - VAR_7;
 }




      if (! VAR_8)
 {
   const char *VAR_17;

   VAR_17 = VAR_5 + 1;
   while (*VAR_17 != ';')
     {
       const char *VAR_18;

       if (*VAR_17 == '\0')
  goto invalid_select;

       if (*VAR_17 == '!')
  VAR_18 = ((void*)0);
       else
  VAR_18 = VAR_17;

       while (*VAR_17 != ' ' && *VAR_17 != ';')
  {
    if (*VAR_17 == '\0')
      goto invalid_select;
    ++VAR_17;
  }

       if (VAR_18 != ((void*)0)
    && FUNC_0 (VAR_18, VAR_17 - VAR_18))
  {
    VAR_8 = 1;
    break;
  }

       if (*VAR_17 == ' ')
  ++VAR_17;
     }
 }

      if (! VAR_8)
 {
   const char *VAR_19;

   for (VAR_19 = VAR_6; VAR_19 < VAR_5 && *VAR_19 != ':'; VAR_19++)
     FUNC_2 (*VAR_19);
   FUNC_2 (';');
 }

      ++VAR_5;
      while (*VAR_5 != ';')
 {
   int VAR_20;

   if (*VAR_5 == '\0')
     goto invalid_select;

   if (VAR_8)
     {
       ++VAR_5;
       continue;
     }

   VAR_20 = *VAR_5 != '!';

   if (VAR_20)
     FUNC_2 ('@');

   while (*VAR_5 != ' ' && *VAR_5 != ';')
     {
       if (*VAR_5 == '\0')
  goto invalid_select;
       if (VAR_20)
  FUNC_2 (*VAR_5);
       ++VAR_5;
     }

   if (*VAR_5 == ' ')
     ++VAR_5;
 }

      if (! VAR_8)
 {

   if (VAR_3 && *VAR_3)
     {
       int VAR_21 = VAR_1;
       const char *VAR_22;

       for (VAR_22 = VAR_3; *VAR_22 != '\0'; VAR_22++)
  {
    if (*VAR_22 == ' ')
      VAR_21 = VAR_1;
    else
      {
        if (VAR_21)
   FUNC_2 ('@');
        FUNC_2 (*VAR_22);
        VAR_21 = VAR_0;
      }
  }
     }

   FUNC_2 ('\n');
 }

      ++VAR_5;
    }
}
