
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2, sb *VAR_3, sb *VAR_4)
{
  while (VAR_2 < VAR_3->len
  && (VAR_3->ptr[VAR_2] == '"'
      || (VAR_3->ptr[VAR_2] == '<' && (VAR_0 || VAR_1))
      || (VAR_3->ptr[VAR_2] == '\'' && VAR_0)))
    {
      if (VAR_3->ptr[VAR_2] == '<')
 {
   int VAR_5 = 0;
   VAR_2++;
   while ((VAR_3->ptr[VAR_2] != '>' || VAR_5)
   && VAR_2 < VAR_3->len)
     {
       if (VAR_3->ptr[VAR_2] == '!')
  {
    VAR_2++;
    FUNC_0 (VAR_4, VAR_3->ptr[VAR_2++]);
  }
       else
  {
    if (VAR_3->ptr[VAR_2] == '>')
      VAR_5--;
    if (VAR_3->ptr[VAR_2] == '<')
      VAR_5++;
    FUNC_0 (VAR_4, VAR_3->ptr[VAR_2++]);
  }
     }
   VAR_2++;
 }
      else if (VAR_3->ptr[VAR_2] == '"' || VAR_3->ptr[VAR_2] == '\'')
 {
   char VAR_6 = VAR_3->ptr[VAR_2];
   int VAR_7 = 0;

   VAR_2++;

   while (VAR_2 < VAR_3->len)
     {
       if (VAR_3->ptr[VAR_2 - 1] == '\\')
  VAR_7 ^= 1;
       else
  VAR_7 = 0;

       if (VAR_0 && VAR_3->ptr[VAR_2] == '!')
  {
    VAR_2 ++;

    FUNC_0 (VAR_4, VAR_3->ptr[VAR_2]);

    VAR_2 ++;
  }
       else if (VAR_7 && VAR_3->ptr[VAR_2] == VAR_6)
  {
    FUNC_0 (VAR_4, VAR_6);
    VAR_2 ++;
  }
       else
  {
    if (VAR_3->ptr[VAR_2] == VAR_6)
      {
        VAR_2 ++;

        if (VAR_2 >= VAR_3->len || VAR_3->ptr[VAR_2] != VAR_6)
   break;
      }

    FUNC_0 (VAR_4, VAR_3->ptr[VAR_2]);
    VAR_2 ++;
  }
     }
 }
    }

  return VAR_2;
}
