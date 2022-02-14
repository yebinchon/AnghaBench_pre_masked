
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct default_include {int cxx_aware; scalar_t__ multilib; int component; scalar_t__ fname; scalar_t__ add_sysroot; int cplusplus; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 char* FUNC_1 (char const*,int ,char const*,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct default_include* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ,size_t) ;
 char* FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_5, const char *VAR_6,
      const char *VAR_7, int VAR_8)
{
  const struct default_include *VAR_9;
  size_t VAR_10;

  if (VAR_6 && (VAR_10 = VAR_2) != 0)
    {



      for (VAR_9 = VAR_3; VAR_9->fname; VAR_9++)
 {
   if (!VAR_9->cplusplus || VAR_8)
     {



       if (VAR_5 && VAR_9->add_sysroot)
  continue;
       if (!FUNC_2 (VAR_9->fname, VAR_1, VAR_10))
  {
    char *VAR_11 = FUNC_1 (VAR_6, VAR_9->fname + VAR_10, ((void*)0));
    if (VAR_9->multilib && VAR_7)
      VAR_11 = FUNC_1 (VAR_11, VAR_4, VAR_7, ((void*)0));
    FUNC_0 (VAR_11, VAR_0, VAR_9->cxx_aware, 0);
  }
     }
 }
    }

  for (VAR_9 = VAR_3; VAR_9->fname; VAR_9++)
    {
      if (!VAR_9->cplusplus || VAR_8)
 {
   char *VAR_12;


   if (VAR_5 && VAR_9->add_sysroot)
     VAR_12 = FUNC_1 (VAR_5, VAR_9->fname, ((void*)0));
   else
     VAR_12 = FUNC_3 (VAR_9->fname, VAR_9->component);

   if (VAR_9->multilib && VAR_7)
     VAR_12 = FUNC_1 (VAR_12, VAR_4, VAR_7, ((void*)0));

   FUNC_0 (VAR_12, VAR_0, VAR_9->cxx_aware, 0);
 }
    }
}
