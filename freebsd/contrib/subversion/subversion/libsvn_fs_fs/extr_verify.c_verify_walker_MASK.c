
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iteration_count; int file_count; scalar_t__ last_notified_revision; void* hint; int pool; int notify_baton; int (* notify_func ) (scalar_t__,int ,int *) ;} ;
typedef TYPE_1__ verify_walker_baton_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ revision; } ;
typedef TYPE_2__ representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *,void**,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(representation_t *VAR_1,
              void *VAR_2,
              svn_fs_t *VAR_3,
              apr_pool_t *VAR_4)
{
  verify_walker_baton_t *VAR_5 = VAR_2;
  void *VAR_6;


  if ( VAR_5->iteration_count > 1000
      || VAR_5->file_count > 16)
    {
      if ( VAR_5->notify_func
          && VAR_1->revision != VAR_5->last_notified_revision)
        {
          VAR_5->notify_func(VAR_1->revision,
                                    VAR_5->notify_baton,
                                    VAR_4);
          VAR_5->last_notified_revision = VAR_1->revision;
        }

      FUNC_3(VAR_5->pool);

      VAR_5->iteration_count = 0;
      VAR_5->file_count = 0;
      VAR_5->hint = ((void*)0);
    }


  VAR_6 = VAR_5->hint;
  FUNC_0(FUNC_2(VAR_1, VAR_3, &VAR_5->hint,
                               VAR_5->pool));


  VAR_5->iteration_count++;
  if (VAR_6 != VAR_5->hint)
    VAR_5->file_count++;

  return VAR_0;
}
