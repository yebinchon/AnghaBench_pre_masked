
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_path_change2_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int changed_paths; int deletions; } ;
typedef TYPE_3__ process_changes_baton_t ;
struct TYPE_8__ {int len; char* data; } ;
struct TYPE_7__ {scalar_t__ change_kind; } ;
struct TYPE_10__ {TYPE_2__ path; TYPE_1__ info; } ;
typedef TYPE_4__ change_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,void const*,int,int *) ;
 int FUNC_4 (int *,void const**,int*,void**) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_6 (char*,void const*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3,
                change_t *VAR_4,
                apr_pool_t *VAR_5)
{
  process_changes_baton_t *VAR_6 = VAR_3;

  FUNC_0(FUNC_5(VAR_6->changed_paths, VAR_6->deletions, VAR_4));
  if ((VAR_4->info.change_kind == VAR_1)
       || (VAR_4->info.change_kind == VAR_2))
    {
      apr_hash_index_t *VAR_7;






      apr_ssize_t VAR_8 = VAR_4->path.len;
      apr_ssize_t VAR_9 = VAR_8 == 0
                                ? 1
                                : VAR_4->path.data[VAR_8-1] == '/'
                                    ? VAR_8 + 1
                                    : VAR_8 + 2;





      for (VAR_7 = FUNC_1(VAR_5, VAR_6->changed_paths);
           VAR_7;
           VAR_7 = FUNC_2(VAR_7))
        {

          const void *VAR_10;
          apr_ssize_t VAR_11;
          svn_fs_path_change2_t *VAR_12;
          FUNC_4(VAR_7, &VAR_10, &VAR_11, (void**)&VAR_12);





          if (VAR_11 >= VAR_9)
            {
              const char *VAR_13;

              VAR_13 = FUNC_6(VAR_4->path.data, VAR_10);
              if (VAR_13 && VAR_13[0] != '\0')
                {
                  FUNC_3(VAR_6->changed_paths, VAR_10, VAR_11, ((void*)0));
                }
            }
        }
    }

  return VAR_0;
}
