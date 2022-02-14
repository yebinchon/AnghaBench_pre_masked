
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_prefix {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct path_prefix*,char const*,char const*,int,int,int) ;
 char* FUNC_2 (scalar_t__,char const*,int *) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4 (struct path_prefix *VAR_2, const char *VAR_3,
        const char *VAR_4,
                                   int VAR_5,
        int VAR_6, int VAR_7)
{
  if (!FUNC_0 (VAR_3))
    FUNC_3 ("system path '%s' is not absolute", VAR_3);

  if (VAR_1)
    {
      if (VAR_0)
   VAR_3 = FUNC_2 (VAR_0, VAR_3, ((void*)0));
      VAR_3 = FUNC_2 (VAR_1, VAR_3, ((void*)0));



      VAR_4 = "GCC";
    }

  FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7);
}
