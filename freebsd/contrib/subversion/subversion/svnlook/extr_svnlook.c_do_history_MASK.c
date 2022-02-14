
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rev_id; int fs; int limit; scalar_t__ show_ids; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_error_t ;
struct print_history_baton {scalar_t__ count; int limit; scalar_t__ show_ids; int fs; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char const*,int ,struct print_history_baton*,int *,int *,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svnlook_ctxt_t *VAR_3,
           const char *VAR_4,
           apr_pool_t *VAR_5)
{
  struct print_history_baton VAR_6;

  if (VAR_3->show_ids)
    {
      FUNC_0(FUNC_2(VAR_5, FUNC_1("REVISION   PATH <ID>\n"
                                         "--------   ---------\n")));
    }
  else
    {
      FUNC_0(FUNC_2(VAR_5, FUNC_1("REVISION   PATH\n"
                                         "--------   ----\n")));
    }




  VAR_6.fs = VAR_3->fs;
  VAR_6.show_ids = VAR_3->show_ids;
  VAR_6.limit = VAR_3->limit;
  VAR_6.count = 0;
  FUNC_0(FUNC_3(VAR_3->fs, VAR_4, VAR_2, &VAR_6,
                             ((void*)0), ((void*)0), 0, VAR_3->rev_id, VAR_1, VAR_5));
  return VAR_0;
}
