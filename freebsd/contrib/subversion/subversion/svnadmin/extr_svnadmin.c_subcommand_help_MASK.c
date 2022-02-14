
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct svnadmin_opt_state {int quiet; int version; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int ,char const*,int ,int ,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_getopt_t *VAR_4, void *VAR_5, apr_pool_t *VAR_6)
{
  struct svnadmin_opt_state *VAR_7 = VAR_5;
  const char *VAR_8 =
    FUNC_1("general usage: svnadmin SUBCOMMAND REPOS_PATH  [ARGS & OPTIONS ...]\n"
      "Subversion repository administration tool.\n"
      "Type 'svnadmin help <subcommand>' for help on a specific subcommand.\n"
      "Type 'svnadmin --version' to see the program version and FS modules.\n"
      "\n"
      "Available subcommands:\n");

  const char *VAR_9
    = FUNC_1("The following repository back-end (FS) modules are available:\n\n");

  svn_stringbuf_t *VAR_10;

  VAR_10 = FUNC_4(VAR_9, VAR_6);
  FUNC_0(FUNC_2(VAR_10, VAR_6));

  FUNC_0(FUNC_3(VAR_4, "svnadmin",
                              VAR_7 ? VAR_7->version : VAR_0,
                              VAR_7 ? VAR_7->quiet : VAR_0,
                                                                      VAR_0,
                              VAR_10->data,
                              VAR_8, VAR_2, VAR_3, ((void*)0), ((void*)0),
                              VAR_6));

  return VAR_1;
}
