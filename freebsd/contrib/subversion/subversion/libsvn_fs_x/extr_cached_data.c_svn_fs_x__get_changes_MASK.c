
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ second; int revision; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_25__ {int number; int change_set; } ;
typedef TYPE_2__ svn_fs_x__id_t ;
struct TYPE_26__ {int changes_cache; int changes_container_cache; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_27__ {scalar_t__ count; scalar_t__ changes; int end_offset; int eol; } ;
typedef TYPE_4__ svn_fs_x__changes_list_t ;
struct TYPE_28__ {int start; int sub_item; int * eol; } ;
typedef TYPE_5__ svn_fs_x__changes_get_list_baton_t ;
struct TYPE_29__ {TYPE_8__* fs; scalar_t__ next; int revision_file; int next_offset; int eol; int revision; } ;
typedef TYPE_6__ svn_fs_x__changes_context_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_30__ {char* elts; scalar_t__ nelts; scalar_t__ nalloc; } ;
typedef TYPE_7__ apr_array_header_t ;
struct TYPE_31__ {TYPE_3__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_7__* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (void**,TYPE_8__*,TYPE_2__*,int ,TYPE_6__*,int *,int *) ;
 int FUNC_3 (TYPE_8__*,TYPE_2__*,TYPE_7__*,int ,int *) ;
 int FUNC_4 (void**,int *,int ,TYPE_1__*,int *) ;
 int FUNC_5 (void**,int *,int ,TYPE_1__*,int ,TYPE_5__*,int *) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (scalar_t__*,int *,TYPE_8__*,int ,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_8__*,int ) ;

svn_error_t *
FUNC_10(apr_array_header_t **VAR_4,
                      svn_fs_x__changes_context_t *VAR_5,
                      apr_pool_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  svn_fs_x__data_t *VAR_9 = VAR_5->fs->fsap_data;

  svn_fs_x__id_t VAR_10;
  VAR_10.change_set = FUNC_6(VAR_5->revision);
  VAR_10.number = VAR_0;



  if (FUNC_7(VAR_5->fs, VAR_5->revision))
    {
      apr_off_t VAR_11;
      svn_fs_x__pair_cache_key_t VAR_12;
      svn_fs_x__changes_get_list_baton_t VAR_13;
      VAR_13.start = (int)VAR_5->next;
      VAR_13.eol = &VAR_5->eol;

      FUNC_0(FUNC_8(&VAR_11, &VAR_13.sub_item, VAR_5->fs,
                                    VAR_5->revision_file,
                                    &VAR_10, VAR_7));
      VAR_12.revision = FUNC_9(VAR_5->fs,
                                               VAR_5->revision);
      VAR_12.second = VAR_11;

      FUNC_0(FUNC_5((void **)VAR_4, &VAR_8,
                                     VAR_9->changes_container_cache, &VAR_12,
                                     VAR_3,
                                     &VAR_13, VAR_6));
    }
  else
    {
      svn_fs_x__changes_list_t *VAR_14;
      svn_fs_x__pair_cache_key_t VAR_15;
      VAR_15.revision = VAR_5->revision;
      VAR_15.second = VAR_5->next;

      FUNC_0(FUNC_4((void **)&VAR_14, &VAR_8,
                             VAR_9->changes_cache, &VAR_15, VAR_6));

      if (VAR_8)
        {

          VAR_5->eol = VAR_14->eol;
          VAR_5->next_offset = VAR_14->end_offset;


          (*VAR_4) = FUNC_1(VAR_6, 0, sizeof(void *));
          (*VAR_4)->elts = (char *)VAR_14->changes;
          (*VAR_4)->nelts = VAR_14->count;
          (*VAR_4)->nalloc = VAR_14->count;
        }
    }

  if (!VAR_8)
    {

      FUNC_0(FUNC_2((void **)VAR_4, VAR_5->fs, &VAR_10,
                         VAR_5->revision_file, VAR_5,
                         VAR_6, VAR_7));
    }

  VAR_5->next += (*VAR_4)->nelts;

  FUNC_0(FUNC_3(VAR_5->fs, &VAR_10, *VAR_4,
                          VAR_1, VAR_7));

  return VAR_2;
}
