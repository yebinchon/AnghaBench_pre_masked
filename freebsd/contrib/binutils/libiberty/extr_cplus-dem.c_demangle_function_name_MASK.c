
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct work_stuff {int constructor; int destructor; } ;
struct TYPE_14__ {char* p; char* b; } ;
typedef TYPE_1__ string ;
struct TYPE_15__ {char* in; char* out; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_9__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct work_stuff*,char const**,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct work_stuff*,char const**,TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 TYPE_9__* VAR_5 ;
 int * FUNC_5 (int ,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char const*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14 (struct work_stuff *VAR_6, const char **VAR_7,
                        string *VAR_8, const char *VAR_9)
{
  size_t VAR_10;
  string VAR_11;
  const char *VAR_12;

  FUNC_8 (VAR_8, (*VAR_7), VAR_9 - (*VAR_7));
  FUNC_12 (VAR_8, 1);
  *(VAR_8 -> p) = '\0';





  (*VAR_7) = VAR_9 + 2;





  if (VAR_2 && (**VAR_7 == 'X'))
    {
      FUNC_2 (VAR_6, VAR_7, 0, VAR_8);

    }

  if (VAR_3 || VAR_0 || VAR_2 || VAR_1)
    {






      if (FUNC_6 (VAR_8 -> b, "__ct") == 0)
 {
   VAR_6 -> constructor += 1;
   FUNC_10 (VAR_8);
   return;
 }
      else if (FUNC_6 (VAR_8 -> b, "__dt") == 0)
 {
   VAR_6 -> destructor += 1;
   FUNC_10 (VAR_8);
   return;
 }
    }

  if (VAR_8->p - VAR_8->b >= 3
      && VAR_8->b[0] == 'o'
      && VAR_8->b[1] == 'p'
      && FUNC_5 (VAR_4, VAR_8->b[2]) != ((void*)0))
    {

      if (VAR_8->p - VAR_8->b >= 10
   && FUNC_4 (VAR_8->b + 3, "assign_", 7) == 0)
 {
   for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_5); VAR_10++)
     {
       int VAR_13 = VAR_8->p - VAR_8->b - 10;
       if ((int) FUNC_13 (VAR_5[VAR_10].in) == VAR_13
    && FUNC_4 (VAR_5[VAR_10].in, VAR_8->b + 10, VAR_13) == 0)
  {
    FUNC_10 (VAR_8);
    FUNC_7 (VAR_8, "operator");
    FUNC_7 (VAR_8, VAR_5[VAR_10].out);
    FUNC_7 (VAR_8, "=");
    break;
  }
     }
 }
      else
 {
   for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_5); VAR_10++)
     {
       int VAR_14 = VAR_8->p - VAR_8->b - 3;
       if ((int) FUNC_13 (VAR_5[VAR_10].in) == VAR_14
    && FUNC_4 (VAR_5[VAR_10].in, VAR_8->b + 3, VAR_14) == 0)
  {
    FUNC_10 (VAR_8);
    FUNC_7 (VAR_8, "operator");
    FUNC_7 (VAR_8, VAR_5[VAR_10].out);
    break;
  }
     }
 }
    }
  else if (VAR_8->p - VAR_8->b >= 5 && FUNC_4 (VAR_8->b, "type", 4) == 0
    && FUNC_5 (VAR_4, VAR_8->b[4]) != ((void*)0))
    {

      VAR_12 = VAR_8->b + 5;
      if (FUNC_3 (VAR_6, &VAR_12, &VAR_11))
 {
   FUNC_10 (VAR_8);
   FUNC_7 (VAR_8, "operator ");
   FUNC_9 (VAR_8, &VAR_11);
   FUNC_11 (&VAR_11);
 }
    }
  else if (VAR_8->b[0] == '_' && VAR_8->b[1] == '_'
    && VAR_8->b[2] == 'o' && VAR_8->b[3] == 'p')
    {


      VAR_12 = VAR_8->b + 4;
      if (FUNC_3 (VAR_6, &VAR_12, &VAR_11))
 {
   FUNC_10 (VAR_8);
   FUNC_7 (VAR_8, "operator ");
   FUNC_9 (VAR_8, &VAR_11);
   FUNC_11 (&VAR_11);
 }
    }
  else if (VAR_8->b[0] == '_' && VAR_8->b[1] == '_'
    && FUNC_1((unsigned char)VAR_8->b[2])
    && FUNC_1((unsigned char)VAR_8->b[3]))
    {
      if (VAR_8->b[4] == '\0')
 {

   for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_5); VAR_10++)
     {
       if (FUNC_13 (VAR_5[VAR_10].in) == 2
    && FUNC_4 (VAR_5[VAR_10].in, VAR_8->b + 2, 2) == 0)
  {
    FUNC_10 (VAR_8);
    FUNC_7 (VAR_8, "operator");
    FUNC_7 (VAR_8, VAR_5[VAR_10].out);
    break;
  }
     }
 }
      else
 {
   if (VAR_8->b[2] == 'a' && VAR_8->b[5] == '\0')
     {

       for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_5); VAR_10++)
  {
    if (FUNC_13 (VAR_5[VAR_10].in) == 3
        && FUNC_4 (VAR_5[VAR_10].in, VAR_8->b + 2, 3) == 0)
      {
        FUNC_10 (VAR_8);
        FUNC_7 (VAR_8, "operator");
        FUNC_7 (VAR_8, VAR_5[VAR_10].out);
        break;
      }
  }
     }
 }
    }
}
