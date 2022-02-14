
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int destructor; } ;
typedef int string ;


 int FUNC_0 (unsigned char) ;
 char const* FUNC_1 (struct work_stuff*) ;
 int FUNC_2 (char const**) ;
 char* VAR_0 ;
 int FUNC_3 (struct work_stuff*,char const**,int *,int ,int) ;
 int FUNC_4 (struct work_stuff*,char const**,int *,int ,int,int) ;
 int FUNC_5 (struct work_stuff*,char const**,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (struct work_stuff*,char const*) ;
 int FUNC_8 (char*,char*,int) ;
 int * FUNC_9 (char*,char const) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,char const*,int) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;
 char* FUNC_15 (char const*,char*) ;

__attribute__((used)) static int
FUNC_16 (struct work_stuff *VAR_1, const char **VAR_2, string *VAR_3)
{
  int VAR_4;
  int VAR_5 = 1;
  const char *VAR_6;

  if ((*VAR_2)[0] == '_'
      && FUNC_9 (VAR_0, (*VAR_2)[1]) != ((void*)0)
      && (*VAR_2)[2] == '_')
    {

      (*VAR_2) += 3;
      VAR_1 -> destructor += 1;
    }
  else if ((*VAR_2)[0] == '_'
    && (((*VAR_2)[1] == '_'
  && (*VAR_2)[2] == 'v'
  && (*VAR_2)[3] == 't'
  && (*VAR_2)[4] == '_')
        || ((*VAR_2)[1] == 'v'
     && (*VAR_2)[2] == 't'
     && FUNC_9 (VAR_0, (*VAR_2)[3]) != ((void*)0))))
    {




      if ((*VAR_2)[2] == 'v')
 (*VAR_2) += 5;
      else
 (*VAR_2) += 4;
      while (**VAR_2 != '\0')
 {
   switch (**VAR_2)
     {
     case 'Q':
     case 'K':
       VAR_5 = FUNC_3 (VAR_1, VAR_2, VAR_3, 0, 1);
       break;
     case 't':
       VAR_5 = FUNC_4 (VAR_1, VAR_2, VAR_3, 0, 1,
        1);
       break;
     default:
       if (FUNC_0((unsigned char)*VAR_2[0]))
  {
    VAR_4 = FUNC_2(VAR_2);




    if (VAR_4 > (int) FUNC_13 (*VAR_2))
      {
        VAR_5 = 1;
        break;
      }
  }
       else
  {
    VAR_4 = FUNC_10 (*VAR_2, VAR_0);
  }
       FUNC_12 (VAR_3, *VAR_2, VAR_4);
       (*VAR_2) += VAR_4;
     }

   VAR_6 = FUNC_15 (*VAR_2, VAR_0);
   if (VAR_5 && ((VAR_6 == ((void*)0)) || (VAR_6 == *VAR_2)))
     {
       if (VAR_6 != ((void*)0))
  {
    FUNC_11 (VAR_3, FUNC_1 (VAR_1));
    (*VAR_2)++;
  }
     }
   else
     {
       VAR_5 = 0;
       break;
     }
 }
      if (VAR_5)
 FUNC_11 (VAR_3, " virtual table");
    }
  else if ((*VAR_2)[0] == '_'
    && (FUNC_9("0123456789Qt", (*VAR_2)[1]) != ((void*)0))
    && (VAR_6 = FUNC_15 (*VAR_2, VAR_0)) != ((void*)0))
    {

      (*VAR_2)++;
      switch (**VAR_2)
 {
 case 'Q':
 case 'K':
   VAR_5 = FUNC_3 (VAR_1, VAR_2, VAR_3, 0, 1);
   break;
 case 't':
   VAR_5 = FUNC_4 (VAR_1, VAR_2, VAR_3, 0, 1, 1);
   break;
 default:
   VAR_4 = FUNC_2 (VAR_2);
   if (VAR_4 < 0 || VAR_4 > (long) FUNC_13 (*VAR_2))
     {
       VAR_5 = 0;
       break;
     }

   if (VAR_4 > 10 && FUNC_14 (*VAR_2, "_GLOBAL_", 8) == 0
       && (*VAR_2)[9] == 'N'
       && (*VAR_2)[8] == (*VAR_2)[10]
       && FUNC_9 (VAR_0, (*VAR_2)[8]))
     {




       FUNC_11 (VAR_3, "{anonymous}");
       (*VAR_2) += VAR_4;



       VAR_6 = FUNC_15 (*VAR_2, VAR_0);
       break;
     }

   FUNC_12 (VAR_3, *VAR_2, VAR_4);
   (*VAR_2) += VAR_4;
 }
      if (VAR_5 && (VAR_6 == *VAR_2))
 {


   (*VAR_2)++;
   FUNC_11 (VAR_3, FUNC_1 (VAR_1));
   VAR_4 = FUNC_13 (*VAR_2);
   FUNC_12 (VAR_3, *VAR_2, VAR_4);
   (*VAR_2) += VAR_4;
 }
      else
 {
   VAR_5 = 0;
 }
    }
  else if (FUNC_14 (*VAR_2, "__thunk_", 8) == 0)
    {
      int VAR_7;

      (*VAR_2) += 8;
      VAR_7 = FUNC_2 (VAR_2);
      if (VAR_7 == -1)
 VAR_5 = 0;
      else
 {
   char *VAR_8 = FUNC_7 (VAR_1, ++*VAR_2);

   if (VAR_8)
     {
       char VAR_9[50];
       FUNC_8 (VAR_9, "virtual function thunk (delta:%d) for ", -VAR_7);
       FUNC_11 (VAR_3, VAR_9);
       FUNC_11 (VAR_3, VAR_8);
       FUNC_6 (VAR_8);
       VAR_4 = FUNC_13 (*VAR_2);
       (*VAR_2) += VAR_4;
     }
   else
     {
       VAR_5 = 0;
     }
 }
    }
  else if (FUNC_14 (*VAR_2, "__t", 3) == 0
    && ((*VAR_2)[3] == 'i' || (*VAR_2)[3] == 'f'))
    {
      VAR_6 = (*VAR_2)[3] == 'i' ? " type_info node" : " type_info function";
      (*VAR_2) += 4;
      switch (**VAR_2)
 {
 case 'Q':
 case 'K':
   VAR_5 = FUNC_3 (VAR_1, VAR_2, VAR_3, 0, 1);
   break;
 case 't':
   VAR_5 = FUNC_4 (VAR_1, VAR_2, VAR_3, 0, 1, 1);
   break;
 default:
   VAR_5 = FUNC_5 (VAR_1, VAR_2, VAR_3);
   break;
 }
      if (VAR_5 && **VAR_2 != '\0')
 VAR_5 = 0;
      if (VAR_5)
 FUNC_11 (VAR_3, VAR_6);
    }
  else
    {
      VAR_5 = 0;
    }
  return (VAR_5);
}
