
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,int ,int ,int ,int *,char const*,int ,int ,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_getopt_t *VAR_3,
         void *VAR_4,
         apr_pool_t *VAR_5)
{
  const char *VAR_6 =
    FUNC_0("general usage: svnrdump SUBCOMMAND URL [-r LOWER[:UPPER]]\n"
      "Subversion remote repository dump and load tool.\n"
      "Type 'svnrdump help <subcommand>' for help on a specific subcommand.\n"
      "Type 'svnrdump --version' to see the program version and RA modules.\n"
      "\n"
      "Available subcommands:\n");

  return FUNC_1(VAR_3, "svnrdump", VAR_0, VAR_0, VAR_0, ((void*)0),
                             VAR_6, VAR_1, VAR_2,
                             ((void*)0), ((void*)0), VAR_5);
}
