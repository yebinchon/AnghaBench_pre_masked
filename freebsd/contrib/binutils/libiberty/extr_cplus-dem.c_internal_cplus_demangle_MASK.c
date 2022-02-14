
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int constructor; int destructor; int static_type; int type_quals; int dllimported; } ;
typedef int string ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct work_stuff*,char const**,int *) ;
 int FUNC_1 (struct work_stuff*,char const**,int *) ;
 int FUNC_2 (struct work_stuff*,char const**,int *) ;
 char* FUNC_3 (struct work_stuff*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static char *
FUNC_6 (struct work_stuff *VAR_3, const char *VAR_4)
{

  string VAR_5;
  int VAR_6 = 0;
  char *VAR_7 = ((void*)0);
  int VAR_8, VAR_9, VAR_10, VAR_11;
  VAR_8 = VAR_3->constructor;
  VAR_9 = VAR_3->destructor;
  VAR_10 = VAR_3->static_type;
  VAR_11 = VAR_3->type_quals;
  VAR_3->constructor = VAR_3->destructor = 0;
  VAR_3->type_quals = VAR_2;
  VAR_3->dllimported = 0;

  if ((VAR_4 != ((void*)0)) && (*VAR_4 != '\0'))
    {
      FUNC_4 (&VAR_5);
      if ((VAR_0 || VAR_1))
 {
   VAR_6 = FUNC_2 (VAR_3, &VAR_4, &VAR_5);
 }
      if (!VAR_6)
 {
   VAR_6 = FUNC_0 (VAR_3, &VAR_4, &VAR_5);
 }
      if (VAR_6 && (*VAR_4 != '\0'))
 {
   VAR_6 = FUNC_1 (VAR_3, &VAR_4, &VAR_5);
 }
      if (VAR_3->constructor == 2)
        {
          FUNC_5 (&VAR_5, "global constructors keyed to ");
          VAR_3->constructor = 0;
        }
      else if (VAR_3->destructor == 2)
        {
          FUNC_5 (&VAR_5, "global destructors keyed to ");
          VAR_3->destructor = 0;
        }
      else if (VAR_3->dllimported == 1)
        {
          FUNC_5 (&VAR_5, "import stub for ");
          VAR_3->dllimported = 0;
        }
      VAR_7 = FUNC_3 (VAR_3, &VAR_5, VAR_6);
    }
  VAR_3->constructor = VAR_8;
  VAR_3->destructor = VAR_9;
  VAR_3->static_type = VAR_10;
  VAR_3->type_quals = VAR_11;
  return VAR_7;
}
