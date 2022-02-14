
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dllimported; int destructor; int constructor; scalar_t__ static_type; } ;
typedef int string ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const**,int *) ;
 int FUNC_2 (char const**) ;
 char const* VAR_4 ;
 int FUNC_3 (struct work_stuff*,char const**,int,int *) ;
 scalar_t__ FUNC_4 (struct work_stuff*,char const**,int *) ;
 int FUNC_5 (struct work_stuff*,char const**,int *,char const*) ;
 void* FUNC_6 (char const*,char const) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 int FUNC_10 (char const*,char*) ;
 char* FUNC_11 (char const*,char*) ;

__attribute__((used)) static int
FUNC_12 (struct work_stuff *VAR_5, const char **VAR_6,
                 string *VAR_7)
{
  int VAR_8 = 1;
  const char *VAR_9;
  int VAR_10;

  if (FUNC_8(*VAR_6) > 6
      && (FUNC_9(*VAR_6, "_imp__", 6) == 0
          || FUNC_9(*VAR_6, "__imp_", 6) == 0))
    {



      (*VAR_6) += 6;
      VAR_5->dllimported = 1;
    }
  else if (FUNC_8(*VAR_6) >= 11 && FUNC_9(*VAR_6, "_GLOBAL_", 8) == 0)
    {
      char *VAR_11 = FUNC_6 (VAR_4, (*VAR_6)[8]);
      if (VAR_11 != ((void*)0) && *VAR_11 == (*VAR_6)[10])
 {
   if ((*VAR_6)[9] == 'D')
     {

       (*VAR_6) += 11;
       VAR_5->destructor = 2;
       if (FUNC_4 (VAR_5, VAR_6, VAR_7))
  return VAR_8;
     }
   else if ((*VAR_6)[9] == 'I')
     {

       (*VAR_6) += 11;
       VAR_5->constructor = 2;
       if (FUNC_4 (VAR_5, VAR_6, VAR_7))
  return VAR_8;
     }
 }
    }
  else if ((VAR_0 || VAR_2 || VAR_1) && FUNC_9(*VAR_6, "__std__", 7) == 0)
    {

      (*VAR_6) += 7;
      VAR_5->destructor = 2;
    }
  else if ((VAR_0 || VAR_2 || VAR_1) && FUNC_9(*VAR_6, "__sti__", 7) == 0)
    {

      (*VAR_6) += 7;
      VAR_5->constructor = 2;
    }





  {
    VAR_9 = *VAR_6;

    do {
      VAR_9 = FUNC_6 (VAR_9, '_');
    } while (VAR_9 != ((void*)0) && *++VAR_9 != '_');

    if (VAR_9 != ((void*)0)) --VAR_9;
  }

  if (VAR_9 != ((void*)0))
    {


      VAR_10 = FUNC_10 (VAR_9, "_");
      if (VAR_10 > 2)
 {
   VAR_9 += (VAR_10 - 2);
 }
    }

  if (VAR_9 == ((void*)0))
    {
      VAR_8 = 0;
    }
  else if (VAR_5 -> static_type)
    {
      if (!FUNC_0 ((unsigned char)VAR_9[0]) && (VAR_9[0] != 't'))
 {
   VAR_8 = 0;
 }
    }
  else if ((VAR_9 == *VAR_6)
    && (FUNC_0 ((unsigned char)VAR_9[2]) || (VAR_9[2] == 'Q')
        || (VAR_9[2] == 't') || (VAR_9[2] == 'K') || (VAR_9[2] == 'H')))
    {



      if ((VAR_3 || VAR_0 || VAR_2)
   && FUNC_0 ((unsigned char)VAR_9[2]))
 {
   *VAR_6 = VAR_9 + 2;
   FUNC_2 (VAR_6);
   FUNC_7 (VAR_7, *VAR_6);
   *VAR_6 += FUNC_8 (*VAR_6);
   VAR_8 = 1;
 }
      else
 {




   if (!(VAR_3 || VAR_0 || VAR_2 || VAR_1))
     VAR_5 -> constructor += 1;
   *VAR_6 = VAR_9 + 2;
 }
    }
  else if (VAR_0 && VAR_9[2] == 'p' && VAR_9[3] == 't')
    {

      VAR_8 = 1;


      FUNC_3 (VAR_5, VAR_6, FUNC_8 (*VAR_6), VAR_7);
    }
  else if (VAR_1 && ((VAR_9[2] == 't' && VAR_9[3] == 'm')
                              || (VAR_9[2] == 'p' && VAR_9[3] == 's')
                              || (VAR_9[2] == 'p' && VAR_9[3] == 't')))
    {

      VAR_8 = 1;


      FUNC_3 (VAR_5, VAR_6, FUNC_8 (*VAR_6), VAR_7);
    }
  else if ((VAR_9 == *VAR_6) && !FUNC_0 ((unsigned char)VAR_9[2])
    && (VAR_9[2] != 't'))
    {



      if (!(VAR_0 || VAR_3 || VAR_2 || VAR_1)
   || (FUNC_1 (VAR_6, VAR_7) == 0))
 {
   while (*VAR_9 == '_')
     {
       VAR_9++;
     }
   if ((VAR_9 = FUNC_11 (VAR_9, "__")) == ((void*)0) || (*(VAR_9 + 2) == '\0'))
     {


       VAR_8 = 0;
     }
   else
     return FUNC_5 (VAR_5, VAR_6, VAR_7, VAR_9);
 }
    }
  else if (*(VAR_9 + 2) != '\0')
    {




      return FUNC_5 (VAR_5, VAR_6, VAR_7, VAR_9);
    }
  else
    {

      VAR_8 = 0;
    }

  if (!VAR_8 && (VAR_5->constructor == 2 || VAR_5->destructor == 2))
    {
      FUNC_7 (VAR_7, *VAR_6);
      *VAR_6 += FUNC_8 (*VAR_6);
      VAR_8 = 1;
    }
  return (VAR_8);
}
