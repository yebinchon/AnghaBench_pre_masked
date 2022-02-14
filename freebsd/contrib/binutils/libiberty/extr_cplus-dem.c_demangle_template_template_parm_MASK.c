
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct work_stuff {int dummy; } ;
struct TYPE_8__ {char* p; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (struct work_stuff*,char const**,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const**,int*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (struct work_stuff *VAR_0,
                                 const char **VAR_1, string *VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 1;
  string VAR_7;

  FUNC_2 (VAR_2, "template <");

  if (FUNC_1 (VAR_1, &VAR_4))
    {
      for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
   if (VAR_5)
     {
       FUNC_2 (VAR_2, ", ");
     }


     if (**VAR_1 == 'Z')
       {
  (*VAR_1)++;
  FUNC_2 (VAR_2, "class");
       }

     else if (**VAR_1 == 'z')
       {
  (*VAR_1)++;
  VAR_6 =
    FUNC_5 (VAR_0, VAR_1, VAR_2);
  if (!VAR_6)
    {
      break;
    }
       }
     else
       {

  VAR_6 = FUNC_0 (VAR_0, VAR_1, &VAR_7);
  if (VAR_6)
    {
      FUNC_3 (VAR_2, &VAR_7);
    }
  FUNC_4(&VAR_7);
  if (!VAR_6)
    {
      break;
    }
       }
   VAR_5 = 1;
 }

    }
  if (VAR_2->p[-1] == '>')
    FUNC_2 (VAR_2, " ");
  FUNC_2 (VAR_2, "> class");
  return (VAR_6);
}
