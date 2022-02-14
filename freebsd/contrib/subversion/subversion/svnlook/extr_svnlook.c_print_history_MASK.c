
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct print_history_baton {scalar_t__ limit; scalar_t__ count; int fs; scalar_t__ show_ids; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,char const*,...) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int const**,int *,char const*,int *) ;
 int FUNC_6 (int **,int ,int ,int *) ;
 TYPE_1__* FUNC_7 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_2,
              const char *VAR_3,
              svn_revnum_t VAR_4,
              apr_pool_t *VAR_5)
{
  struct print_history_baton *VAR_6 = VAR_2;

  FUNC_0(FUNC_2(((void*)0)));

  if (VAR_6->show_ids)
    {
      const svn_fs_id_t *VAR_7;
      svn_fs_root_t *VAR_8;
      svn_string_t *VAR_9;

      FUNC_0(FUNC_6(&VAR_8, VAR_6->fs, VAR_4, VAR_5));
      FUNC_0(FUNC_5(&VAR_7, VAR_8, VAR_3, VAR_5));
      VAR_9 = FUNC_7(VAR_7, VAR_5);
      FUNC_0(FUNC_3(VAR_5, "%8ld   %s <%s>\n",
                                 VAR_4, VAR_3, VAR_9->data));
    }
  else
    {
      FUNC_0(FUNC_3(VAR_5, "%8ld   %s\n", VAR_4, VAR_3));
    }

  if (VAR_6->limit > 0)
    {
      VAR_6->count++;
      if (VAR_6->count >= VAR_6->limit)

        return FUNC_4(VAR_0, ((void*)0),
                                FUNC_1("History item limit reached"));
    }

  return VAR_1;
}
