
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_12__ {TYPE_2__* editor; } ;
typedef TYPE_4__ report_context_t ;
struct TYPE_13__ {int file_baton; scalar_t__ found_lock_prop; scalar_t__ lock_token; TYPE_1__* parent_dir; } ;
typedef TYPE_5__ file_baton_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int (* change_file_prop ) (int ,char const*,TYPE_3__ const*,int *) ;} ;
struct TYPE_9__ {TYPE_4__* ctx; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char const*,TYPE_3__ const*,int *) ;
 char* FUNC_6 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_2,
               const char *VAR_3,
               const char *VAR_4,
               const char *VAR_5,
               const svn_string_t *VAR_6,
               apr_pool_t *VAR_7)
{
  file_baton_t *VAR_8 = VAR_2;
  report_context_t *VAR_9 = VAR_8->parent_dir->ctx;
  const char *VAR_10;

  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_7);

  if (!VAR_10)
    {
      if (VAR_8->lock_token
          && !VAR_8->found_lock_prop
          && VAR_6
          && FUNC_4(VAR_4, "DAV:") == 0
          && FUNC_4(VAR_5, "lockdiscovery") == 0)
        {
          char *VAR_11;
          VAR_11 = FUNC_2(VAR_7, VAR_6->data);
          FUNC_1(VAR_11, VAR_11);

          if (VAR_11[0] != '\0')
            VAR_8->found_lock_prop = VAR_1;
        }

      return VAR_0;
    }

  FUNC_0(FUNC_3(VAR_8, VAR_7));

  FUNC_0(VAR_9->editor->change_file_prop(VAR_8->file_baton,
                                        VAR_10, VAR_6,
                                        VAR_7));

  return VAR_0;
}
