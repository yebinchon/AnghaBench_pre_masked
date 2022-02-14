
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int quiet; int version; } ;
typedef TYPE_2__ opt_baton_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ,char const*,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_getopt_t *VAR_4, void *VAR_5, apr_pool_t *VAR_6)
{
  opt_baton_t *VAR_7 = VAR_5;

  const char *VAR_8 =
    FUNC_1("general usage: svnsync SUBCOMMAND DEST_URL  [ARGS & OPTIONS ...]\n"
      "Subversion repository replication tool.\n"
      "Type 'svnsync help <subcommand>' for help on a specific subcommand.\n"
      "Type 'svnsync --version' to see the program version and RA modules.\n"
      "\n"
      "Available subcommands:\n");

  const char *VAR_9
    = FUNC_1("The following repository access (RA) modules are available:\n\n");

  svn_stringbuf_t *VAR_10 = FUNC_4(VAR_9,
                                                         VAR_6);

  FUNC_0(FUNC_3(VAR_10, VAR_6));

  FUNC_0(FUNC_2(VAR_4, "svnsync",
                              VAR_7 ? VAR_7->version : VAR_0,
                              VAR_7 ? VAR_7->quiet : VAR_0,
                                                                      VAR_0,
                              VAR_10->data, VAR_8,
                              VAR_2, VAR_3, ((void*)0),
                              ((void*)0), VAR_6));

  return VAR_1;
}
