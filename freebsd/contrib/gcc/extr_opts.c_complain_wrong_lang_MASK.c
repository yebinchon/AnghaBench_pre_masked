
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cl_option {unsigned int flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,char*,char*) ;
 char* FUNC_2 (unsigned int) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_0, const struct cl_option *VAR_1,
       unsigned int VAR_2)
{
  char *VAR_3, *VAR_4;

  VAR_3 = FUNC_2 (VAR_1->flags);
  VAR_4 = FUNC_2 (VAR_2);


  FUNC_1 (0, "command line option \"%s\" is valid for %s but not for %s",
    VAR_0, VAR_3, VAR_4);

  FUNC_0 (VAR_3);
  FUNC_0 (VAR_4);
}
