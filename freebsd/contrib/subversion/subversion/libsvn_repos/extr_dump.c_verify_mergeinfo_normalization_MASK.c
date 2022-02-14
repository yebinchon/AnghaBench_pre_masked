
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int pool; } ;
struct verify_mergeinfo_normalization_baton {int path; int notify_baton; int notify_func; TYPE_1__ buffer; int normalized_paths; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,int ,char const*,int ,int ) ;
 char* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,int ,char const*) ;
 int VAR_4 ;
 int FUNC_6 (char const**,char const* const,int ,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_5, const void *VAR_6, apr_ssize_t VAR_7,
                               void *VAR_8, apr_pool_t *VAR_9)
{
  struct verify_mergeinfo_normalization_baton *const VAR_10 = VAR_5;

  const char *const VAR_11 = VAR_6;
  const char *VAR_12;
  const char *VAR_13;

  FUNC_0(FUNC_6(&VAR_12, VAR_11, VAR_7, &VAR_10->buffer));
  VAR_13 = FUNC_4(VAR_10->normalized_paths, VAR_12);
  if (!VAR_13)
      FUNC_5(VAR_10->normalized_paths,
                    FUNC_2(VAR_10->buffer.pool, VAR_12),
                    VAR_3);
  else if (VAR_13 == VAR_2)
                                         ;
  else
    {

      FUNC_5(VAR_10->normalized_paths,
                    FUNC_2(VAR_10->buffer.pool, VAR_12),
                    VAR_2);

      FUNC_3(VAR_9, VAR_10->notify_func, VAR_10->notify_baton,
                     VAR_4,
                     FUNC_1("Duplicate representation of path '%s'"
                       " in %s property of '%s'"),
                     VAR_12, VAR_1, VAR_10->path);
    }
  return VAR_0;
}
