
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {int notify_baton; int notify_func; } ;
struct dir_baton {int path; struct edit_baton* edit_baton; } ;
struct TYPE_2__ {int pool; } ;
struct check_name_collision_baton {TYPE_1__ buffer; int normalized; struct dir_baton* dir_baton; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,int ,char const*) ;
 char* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,int ,char const*) ;
 void const* FUNC_6 (int ,char const*,int *) ;
 int VAR_4 ;
 int FUNC_7 (char const**,void const*,int ,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_5, const void *VAR_6, apr_ssize_t VAR_7,
                     void *VAR_8, apr_pool_t *VAR_9)
{
  struct check_name_collision_baton *const VAR_10 = VAR_5;
  const char *VAR_11;
  const char *VAR_12;

  FUNC_0(FUNC_7(&VAR_11, VAR_6, VAR_7, &VAR_10->buffer));

  VAR_12 = FUNC_4(VAR_10->normalized, VAR_11);
  if (!VAR_12)
    FUNC_5(VAR_10->normalized, FUNC_2(VAR_10->buffer.pool, VAR_11),
                  VAR_3);
  else if (VAR_12 == VAR_2)
                                         ;
  else
    {
      struct dir_baton *const VAR_13 = VAR_10->dir_baton;
      struct edit_baton *const VAR_14 = VAR_13->edit_baton;
      const char* VAR_15;

      FUNC_5(VAR_10->normalized, FUNC_2(VAR_10->buffer.pool, VAR_11),
                    VAR_2);

      FUNC_0(FUNC_7(
                  &VAR_15, FUNC_6(VAR_13->path, VAR_11, VAR_9),
                  VAR_1, &VAR_10->buffer));
      FUNC_3(VAR_9, VAR_14->notify_func, VAR_14->notify_baton,
                     VAR_4,
                     FUNC_1("Duplicate representation of path '%s'"), VAR_15);
    }
  return VAR_0;
}
