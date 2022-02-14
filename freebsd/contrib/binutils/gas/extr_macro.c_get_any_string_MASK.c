
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,int,TYPE_1__*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int,TYPE_1__*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int,TYPE_1__*,int*) ;
 char* FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15 (int VAR_3, sb *VAR_4, sb *VAR_5)
{
  FUNC_8 (VAR_5);
  VAR_3 = FUNC_9 (VAR_3, VAR_4);

  if (VAR_3 < VAR_4->len)
    {
      if (VAR_4->len > VAR_3 + 2 && VAR_4->ptr[VAR_3 + 1] == '\'' && FUNC_0 (VAR_4->ptr[VAR_3]))
 {
   while (!FUNC_1 (VAR_4->ptr[VAR_3]))
     FUNC_6 (VAR_5, VAR_4->ptr[VAR_3++]);
 }
      else if (VAR_4->ptr[VAR_3] == '%' && VAR_0)
 {
   int VAR_6;
   char VAR_7[20];



   VAR_3 = FUNC_5) (FUNC_2("% operator needs absolute expression"),
          VAR_3 + 1,
          VAR_4,
          &VAR_6);
   FUNC_10 (VAR_7, "%d", VAR_6);
   FUNC_7 (VAR_5, VAR_7);
 }
      else if (VAR_4->ptr[VAR_3] == '"'
        || (VAR_4->ptr[VAR_3] == '<' && (VAR_0 || VAR_1))
        || (VAR_0 && VAR_4->ptr[VAR_3] == '\''))
 {
   if (VAR_0 && ! VAR_2 && VAR_4->ptr[VAR_3] != '<')
     {

       FUNC_6 (VAR_5, '"');
       VAR_3 = FUNC_4 (VAR_3, VAR_4, VAR_5);
       FUNC_6 (VAR_5, '"');
     }
   else
     {
       VAR_3 = FUNC_4 (VAR_3, VAR_4, VAR_5);
     }
 }
      else
 {
   char *VAR_8 = FUNC_14(1);
   char *VAR_9 = VAR_8;

   *VAR_9 = '\0';
   while (VAR_3 < VAR_4->len
   && (*VAR_9
       || (VAR_4->ptr[VAR_3] != ' '
    && VAR_4->ptr[VAR_3] != '\t'))
   && VAR_4->ptr[VAR_3] != ','
   && (VAR_4->ptr[VAR_3] != '<'
       || (! VAR_0 && ! VAR_1)))
     {
       char VAR_10 = VAR_4->ptr[VAR_3];

       switch (VAR_10)
  {
  case '"':
  case '\'':
    FUNC_6 (VAR_5, VAR_4->ptr[VAR_3++]);
    while (VAR_3 < VAR_4->len
    && VAR_4->ptr[VAR_3] != VAR_10)
      FUNC_6 (VAR_5, VAR_4->ptr[VAR_3++]);
    if (VAR_3 == VAR_4->len)
      return VAR_3;
    break;
  case '(':
  case '[':
    if (VAR_9 > VAR_8)
      --VAR_9;
    else
      {
        VAR_8 = FUNC_14(FUNC_12(VAR_9) + 2);
        FUNC_11(VAR_8 + 1, VAR_9);
        FUNC_3(VAR_9);
        VAR_9 = VAR_8;
      }
    *VAR_9 = VAR_10;
    break;
  case ')':
    if (*VAR_9 == '(')
      ++VAR_9;
    break;
  case ']':
    if (*VAR_9 == '[')
      ++VAR_9;
    break;
  }
       FUNC_6 (VAR_5, VAR_10);
       ++VAR_3;
     }
   FUNC_3(VAR_8);
 }
    }

  return VAR_3;
}
