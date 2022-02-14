
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quiet; int version; } ;
typedef TYPE_1__ svnfsfs__opt_state ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int ,int ,int ,int *,char const*,int ,int ,int *,int *,int *) ;

svn_error_t *
FUNC_3(apr_getopt_t *VAR_4, void *VAR_5, apr_pool_t *VAR_6)
{
  svnfsfs__opt_state *VAR_7 = VAR_5;
  const char *VAR_8 =
    FUNC_1("general usage: svnfsfs SUBCOMMAND REPOS_PATH  [ARGS & OPTIONS ...]\n"
      "Subversion FSFS repository manipulation tool.\n"
      "Type 'svnfsfs help <subcommand>' for help on a specific subcommand.\n"
      "Type 'svnfsfs --version' to see the program version.\n"
      "\n"
      "Available subcommands:\n");

  FUNC_0(FUNC_2(VAR_4, "svnfsfs",
                              VAR_7 ? VAR_7->version : VAR_0,
                              VAR_7 ? VAR_7->quiet : VAR_0,
                                                                      VAR_0,
                              ((void*)0),
                              VAR_8, VAR_2, VAR_3, ((void*)0), ((void*)0),
                              VAR_6));

  return VAR_1;
}
