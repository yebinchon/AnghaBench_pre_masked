
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
struct TYPE_6__ {char* comment; int owner; int token; scalar_t__ expiration_date; scalar_t__ creation_date; } ;
typedef TYPE_2__ svn_lock_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {int arg1; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct svnlook_opt_state*,int) ;
 int FUNC_4 (TYPE_1__**,struct svnlook_opt_state*,int *) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__**,int ,int ,int *) ;
 char* FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_getopt_t *VAR_1, void *VAR_2, apr_pool_t *VAR_3)
{
  struct svnlook_opt_state *VAR_4 = VAR_2;
  svnlook_ctxt_t *VAR_5;
  svn_lock_t *VAR_6;

  FUNC_1(FUNC_3(VAR_4, 1));

  FUNC_1(FUNC_4(&VAR_5, VAR_4, VAR_3));

  FUNC_1(FUNC_7(&VAR_6, VAR_5->fs, VAR_4->arg1, VAR_3));

  if (VAR_6)
    {
      const char *VAR_7, *VAR_8 = "";
      int VAR_9 = 0;

      VAR_7 = FUNC_8(VAR_6->creation_date, VAR_3);

      if (VAR_6->expiration_date)
        VAR_8 = FUNC_8(VAR_6->expiration_date, VAR_3);

      if (VAR_6->comment)
        VAR_9 = FUNC_6(VAR_6->comment) + 1;

      FUNC_1(FUNC_5(VAR_3, FUNC_2("UUID Token: %s\n"), VAR_6->token));
      FUNC_1(FUNC_5(VAR_3, FUNC_2("Owner: %s\n"), VAR_6->owner));
      FUNC_1(FUNC_5(VAR_3, FUNC_2("Created: %s\n"), VAR_7));
      FUNC_1(FUNC_5(VAR_3, FUNC_2("Expires: %s\n"), VAR_8));
      FUNC_1(FUNC_5(VAR_3,
                                 FUNC_0("Comment (%i line):\n%s\n",
                                    "Comment (%i lines):\n%s\n",
                                    VAR_9),
                                 VAR_9,
                                 VAR_6->comment ? VAR_6->comment : ""));
    }

  return VAR_0;
}
