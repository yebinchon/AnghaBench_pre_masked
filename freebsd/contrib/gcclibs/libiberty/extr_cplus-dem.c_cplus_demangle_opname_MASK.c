
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int work ;
struct work_stuff {int options; } ;
struct TYPE_6__ {scalar_t__ b; scalar_t__ p; } ;
typedef TYPE_1__ string ;
struct TYPE_7__ {char const* in; char* out; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct work_stuff*,char const**,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char*,int ,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (struct work_stuff*) ;
 int FUNC_6 (char*,char*) ;
 int * FUNC_7 (int ,char const) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__) ;

int
FUNC_11 (const char *VAR_2, char *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6, VAR_7;
  string VAR_8;
  struct work_stuff VAR_9[1];
  const char *VAR_10;

  VAR_5 = FUNC_9(VAR_2);
  VAR_3[0] = '\0';
  VAR_7 = 0;
  FUNC_4 ((char *) VAR_9, 0, sizeof (VAR_9));
  VAR_9->options = VAR_4;

  if (VAR_2[0] == '_' && VAR_2[1] == '_'
      && VAR_2[2] == 'o' && VAR_2[3] == 'p')
    {


      VAR_10 = VAR_2 + 4;
      if (FUNC_2 (VAR_9, &VAR_10, &VAR_8))
 {
   FUNC_6 (VAR_3, "operator ");
   FUNC_10 (VAR_3, VAR_8.b, VAR_8.p - VAR_8.b);
   FUNC_8 (&VAR_8);
   VAR_7 = 1;
 }
    }
  else if (VAR_2[0] == '_' && VAR_2[1] == '_'
    && FUNC_1((unsigned char)VAR_2[2])
    && FUNC_1((unsigned char)VAR_2[3]))
    {
      if (VAR_2[4] == '\0')
 {

   size_t VAR_11;
   for (VAR_11 = 0; VAR_11 < FUNC_0 (VAR_1); VAR_11++)
     {
       if (FUNC_9 (VAR_1[VAR_11].in) == 2
    && FUNC_3 (VAR_1[VAR_11].in, VAR_2 + 2, 2) == 0)
  {
    FUNC_6 (VAR_3, "operator");
    FUNC_6 (VAR_3, VAR_1[VAR_11].out);
    VAR_7 = 1;
    break;
  }
     }
 }
      else
 {
   if (VAR_2[2] == 'a' && VAR_2[5] == '\0')
     {

       size_t VAR_12;
       for (VAR_12 = 0; VAR_12 < FUNC_0 (VAR_1); VAR_12++)
  {
    if (FUNC_9 (VAR_1[VAR_12].in) == 3
        && FUNC_3 (VAR_1[VAR_12].in, VAR_2 + 2, 3) == 0)
      {
        FUNC_6 (VAR_3, "operator");
        FUNC_6 (VAR_3, VAR_1[VAR_12].out);
        VAR_7 = 1;
        break;
      }
  }
     }
 }
    }
  else if (VAR_5 >= 3
    && VAR_2[0] == 'o'
    && VAR_2[1] == 'p'
    && FUNC_7 (VAR_0, VAR_2[2]) != ((void*)0))
    {

      if (VAR_5 >= 10
   && FUNC_3 (VAR_2 + 3, "assign_", 7) == 0)
 {
   size_t VAR_13;
   for (VAR_13 = 0; VAR_13 < FUNC_0 (VAR_1); VAR_13++)
     {
       VAR_6 = VAR_5 - 10;
       if ((int) FUNC_9 (VAR_1[VAR_13].in) == VAR_6
    && FUNC_3 (VAR_1[VAR_13].in, VAR_2 + 10, VAR_6) == 0)
  {
    FUNC_6 (VAR_3, "operator");
    FUNC_6 (VAR_3, VAR_1[VAR_13].out);
    FUNC_6 (VAR_3, "=");
    VAR_7 = 1;
    break;
  }
     }
 }
      else
 {
   size_t VAR_14;
   for (VAR_14 = 0; VAR_14 < FUNC_0 (VAR_1); VAR_14++)
     {
       VAR_6 = VAR_5 - 3;
       if ((int) FUNC_9 (VAR_1[VAR_14].in) == VAR_6
    && FUNC_3 (VAR_1[VAR_14].in, VAR_2 + 3, VAR_6) == 0)
  {
    FUNC_6 (VAR_3, "operator");
    FUNC_6 (VAR_3, VAR_1[VAR_14].out);
    VAR_7 = 1;
    break;
  }
     }
 }
    }
  else if (VAR_5 >= 5 && FUNC_3 (VAR_2, "type", 4) == 0
    && FUNC_7 (VAR_0, VAR_2[4]) != ((void*)0))
    {

      VAR_10 = VAR_2 + 5;
      if (FUNC_2 (VAR_9, &VAR_10, &VAR_8))
 {
   FUNC_6 (VAR_3, "operator ");
   FUNC_10 (VAR_3, VAR_8.b, VAR_8.p - VAR_8.b);
   FUNC_8 (&VAR_8);
   VAR_7 = 1;
 }
    }
  FUNC_5 (VAR_9);
  return VAR_7;

}
