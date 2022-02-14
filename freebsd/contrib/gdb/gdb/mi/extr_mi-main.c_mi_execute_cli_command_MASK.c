
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 struct cleanup* FUNC_3 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char**,char*,char const*,char const*) ;
 int VAR_2 ;
 char* FUNC_5 (char const*) ;

void
FUNC_6 (const char *VAR_3, int VAR_4, const char *VAR_5)
{
  if (VAR_3 != 0)
    {
      struct cleanup *VAR_6;
      char *VAR_7;
      if (VAR_4)
 FUNC_4 (&VAR_7, "%s %s", VAR_3, VAR_5);
      else
 VAR_7 = FUNC_5 (VAR_3);
      if (VAR_1)

 FUNC_2 (VAR_0, "cli=%s run=%s\n",
       VAR_3, VAR_7);
      VAR_6 = FUNC_3 (VAR_2, VAR_7);
      FUNC_1 ( VAR_7, 0 );
      FUNC_0 (VAR_6);
      return;
    }
}
