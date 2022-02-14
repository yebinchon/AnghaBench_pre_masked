
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,int ) ;
 struct cleanup* FUNC_2 (int ,char*) ;
 int FUNC_3 (char**,char*,char const*,char const*) ;
 int VAR_0 ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1, const char *VAR_2)
{
  if (VAR_1 != 0)
    {
      struct cleanup *VAR_3;
      char *VAR_4;
      if (VAR_2 != ((void*)0))
 FUNC_3 (&VAR_4, "%s %s", VAR_1, VAR_2);
      else
 VAR_4 = FUNC_4 (VAR_1);
      VAR_3 = FUNC_2 (VAR_0, VAR_4);
      FUNC_1 ( VAR_4, 0 );
      FUNC_0 (VAR_3);
      return;
    }
}
