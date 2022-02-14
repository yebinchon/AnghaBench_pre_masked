
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef TYPE_2__* svn_mergeinfo_t ;
typedef int svn_mergeinfo_inheritance_t ;
struct TYPE_15__ {TYPE_1__* fs; } ;
typedef TYPE_4__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_16__ {scalar_t__ mergeinfo_cache; scalar_t__ mergeinfo_existence_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {TYPE_5__* fsap_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__**,TYPE_4__*,char const*,int ,scalar_t__,int *,int *) ;
 char* FUNC_2 (char const*,TYPE_4__*,int ,scalar_t__,int *) ;
 int FUNC_3 (void**,scalar_t__*,scalar_t__,char const*,int *) ;
 int FUNC_4 (scalar_t__,char const*,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_5 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_mergeinfo_t *VAR_2,
                       svn_fs_root_t *VAR_3,
                       const char *VAR_4,
                       svn_mergeinfo_inheritance_t VAR_5,
                       svn_boolean_t VAR_6,
                       apr_pool_t *VAR_7,
                       apr_pool_t *VAR_8)
{
  fs_fs_data_t *VAR_9 = VAR_3->fs->fsap_data;
  const char *VAR_10;
  svn_boolean_t VAR_11 = VAR_0;
  svn_stringbuf_t *VAR_12;

  *VAR_2 = ((void*)0);

  VAR_10 = FUNC_2(VAR_4, VAR_3, VAR_5,
                                  VAR_6, VAR_8);
  if (VAR_9->mergeinfo_existence_cache)
    {
      FUNC_0(FUNC_3((void **)&VAR_12, &VAR_11,
                             VAR_9->mergeinfo_existence_cache,
                             VAR_10, VAR_7));
      if (VAR_11 && VAR_12->data[0] == '1')
        FUNC_0(FUNC_3((void **)VAR_2, &VAR_11,
                              VAR_9->mergeinfo_cache,
                              VAR_10, VAR_7));
    }

  if (! VAR_11)
    {
      FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4,
                                              VAR_5,
                                              VAR_6,
                                              VAR_7, VAR_8));
      if (VAR_9->mergeinfo_existence_cache)
        {
          VAR_12 = FUNC_5(*VAR_2 ? "1" : "0",
                                                  VAR_8);
          FUNC_0(FUNC_4(VAR_9->mergeinfo_existence_cache,
                                 VAR_10, VAR_12, VAR_8));
          if (*VAR_2)
            FUNC_0(FUNC_4(VAR_9->mergeinfo_cache,
                                  VAR_10, *VAR_2, VAR_8));
        }
    }

  return VAR_1;
}
