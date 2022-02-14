
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct work_stuff {int constructor; int destructor; int temp_start; } ;
struct TYPE_10__ {char* p; char* b; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (struct work_stuff*) ;
 scalar_t__ FUNC_2 (struct work_stuff*,char const**,TYPE_1__*) ;
 int FUNC_3 (struct work_stuff*) ;
 int FUNC_4 (struct work_stuff*,char*,int ,int) ;
 int FUNC_5 (struct work_stuff*,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10 (struct work_stuff *VAR_0, const char **VAR_1, string *VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;
  string VAR_5;
  char *VAR_6 = 0;

  FUNC_7 (&VAR_5);
  VAR_4 = FUNC_3 (VAR_0);
  if (FUNC_2 (VAR_0, VAR_1, &VAR_5))
    {
      VAR_6 = VAR_5.p;
      if ((VAR_0->constructor & 1) || (VAR_0->destructor & 1))
 {

          if (VAR_0->temp_start && (VAR_0->temp_start != -1))
            {
              VAR_5.p = VAR_5.b + VAR_0->temp_start;
            }
   FUNC_9 (VAR_2, &VAR_5);
   if (VAR_0 -> destructor & 1)
     {
       FUNC_8 (VAR_2, "~");
              VAR_0 -> destructor -= 1;
     }
   else
     {
       VAR_0 -> constructor -= 1;
     }
 }
      VAR_5.p = VAR_6;
      FUNC_5 (VAR_0, VAR_5.b, FUNC_0(&VAR_5));
      FUNC_4 (VAR_0, VAR_5.b, FUNC_0(&VAR_5), VAR_4);
      FUNC_8 (VAR_2, FUNC_1 (VAR_0));
      FUNC_9 (VAR_2, &VAR_5);
      VAR_3 = 1;
    }
  FUNC_6 (&VAR_5);
  return (VAR_3);
}
