
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type_kind_t ;
struct work_stuff {int dummy; } ;
typedef int string ;
struct TYPE_3__ {char const* in; int out; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct work_stuff*,char const**,int *,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6 (struct work_stuff *VAR_1, const char **VAR_2,
                     string *VAR_3, type_kind_t VAR_4)
{
  int VAR_5 = 0;
  int VAR_6;

  VAR_6 = 1;
  FUNC_4 (VAR_3, "(", 1);
  (*VAR_2)++;
  while (VAR_6 && **VAR_2 != 'W' && **VAR_2 != '\0')
    {
      if (VAR_5)
 {
   size_t VAR_7;
   size_t VAR_8;

   VAR_6 = 0;

   VAR_8 = FUNC_5 (*VAR_2);

   for (VAR_7 = 0; VAR_7 < FUNC_0 (VAR_0); ++VAR_7)
     {
       size_t VAR_9 = FUNC_5 (VAR_0[VAR_7].in);

       if (VAR_9 <= VAR_8
    && FUNC_2 (VAR_0[VAR_7].in, *VAR_2, VAR_9) == 0)
  {
    FUNC_4 (VAR_3, " ", 1);
    FUNC_3 (VAR_3, VAR_0[VAR_7].out);
    FUNC_4 (VAR_3, " ", 1);
    VAR_6 = 1;
    (*VAR_2) += VAR_9;
    break;
  }
     }

   if (!VAR_6)
     break;
 }
      else
 VAR_5 = 1;

      VAR_6 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
    }

  if (**VAR_2 != 'W')
    VAR_6 = 0;
  else
    {
      FUNC_4 (VAR_3, ")", 1);
      (*VAR_2)++;
    }

  return VAR_6;
}
