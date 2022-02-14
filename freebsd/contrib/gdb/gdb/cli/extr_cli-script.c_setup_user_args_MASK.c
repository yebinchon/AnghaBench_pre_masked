
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_args {int count; TYPE_1__* a; struct user_args* next; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {char* arg; int len; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 struct cleanup* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct user_args*,int ,int) ;
 struct user_args* VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct cleanup *
FUNC_4 (char *VAR_3)
{
  struct user_args *VAR_4;
  struct cleanup *VAR_5;
  unsigned int VAR_6 = 0;

  VAR_4 = (struct user_args *) FUNC_3 (sizeof (struct user_args));
  FUNC_2 (VAR_4, 0, sizeof (struct user_args));

  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;

  VAR_5 = FUNC_1 (VAR_1, 0 );

  if (VAR_3 == ((void*)0))
    return VAR_5;

  while (*VAR_3)
    {
      char *VAR_7;
      int VAR_8 = 0;
      int VAR_9 = 0;
      int VAR_10 = 0;

      if (VAR_6 >= VAR_0)
 {
   FUNC_0 ("user defined function may only have %d arguments.\n",
   VAR_0);
   return VAR_5;
 }


      while (*VAR_3 == ' ' || *VAR_3 == '\t')
 VAR_3++;


      VAR_7 = VAR_3;
      VAR_2->a[VAR_6].arg = VAR_3;


      while (*VAR_3)
 {
   if (((*VAR_3 == ' ' || *VAR_3 == '\t')) && !VAR_8 && !VAR_9 && !VAR_10)
     break;
   else
     {
       if (VAR_10)
  VAR_10 = 0;
       else if (*VAR_3 == '\\')
  VAR_10 = 1;
       else if (VAR_8)
  {
    if (*VAR_3 == '\'')
      VAR_8 = 0;
  }
       else if (VAR_9)
  {
    if (*VAR_3 == '"')
      VAR_9 = 0;
  }
       else
  {
    if (*VAR_3 == '\'')
      VAR_8 = 1;
    else if (*VAR_3 == '"')
      VAR_9 = 1;
  }
       VAR_3++;
     }
 }

      VAR_2->a[VAR_6].len = VAR_3 - VAR_7;
      VAR_6++;
      VAR_2->count++;
    }
  return VAR_5;
}
