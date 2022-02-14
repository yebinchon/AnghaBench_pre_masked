
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ count; int eol; scalar_t__ end_offset; int ** changes; scalar_t__ start_offset; } ;
typedef TYPE_1__ svn_fs_fs__changes_list_t ;
struct TYPE_30__ {int eol; int revision; TYPE_6__* fs; TYPE_9__* revision_file; scalar_t__ next_offset; int next; int rev_file_pool; } ;
typedef TYPE_2__ svn_fs_fs__changes_context_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_31__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_32__ {scalar_t__ changes_cache; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int change_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_33__ {scalar_t__ nelts; char* elts; scalar_t__ nalloc; } ;
typedef TYPE_5__ apr_array_header_t ;
struct TYPE_35__ {int file; int stream; } ;
struct TYPE_34__ {TYPE_4__* fsap_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (TYPE_6__*,int ,int *,scalar_t__,int *) ;
 TYPE_5__* FUNC_2 (int *,int ,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_6__*,int ,scalar_t__,TYPE_9__*,int *,int *) ;
 int FUNC_5 (TYPE_6__*,int ,scalar_t__,TYPE_5__*,int ,int *) ;
 int FUNC_6 (int *,scalar_t__*,TYPE_9__*,TYPE_6__*,int ,int *) ;
 int FUNC_7 (void**,scalar_t__*,scalar_t__,TYPE_3__*,int *) ;
 int FUNC_8 (scalar_t__,TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (int ,TYPE_6__*,int *) ;
 int FUNC_11 (scalar_t__*,TYPE_6__*,TYPE_9__*,int ,int *,scalar_t__,int *) ;
 int FUNC_12 (TYPE_9__**,TYPE_6__*,int ,int ,int *) ;
 int FUNC_13 (TYPE_5__**,int ,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_16 (TYPE_6__*) ;

svn_error_t *
FUNC_17(apr_array_header_t **VAR_5,
                       svn_fs_fs__changes_context_t *VAR_6,
                       apr_pool_t *VAR_7,
                       apr_pool_t *VAR_8)
{
  apr_off_t VAR_9 = VAR_2;
  svn_boolean_t VAR_10;
  fs_fs_data_t *VAR_11 = VAR_6->fs->fsap_data;
  svn_fs_fs__changes_list_t *VAR_12;

  pair_cache_key_t VAR_13;
  VAR_13.revision = VAR_6->revision;
  VAR_13.second = VAR_6->next;



  if (VAR_11->changes_cache)
    {
      FUNC_0(FUNC_7((void **)&VAR_12, &VAR_10,
                             VAR_11->changes_cache, &VAR_13, VAR_7));
    }
  else
    {
      VAR_10 = VAR_0;
    }

  if (!VAR_10)
    {


      if (!VAR_6->revision_file)
        {
          FUNC_0(FUNC_10(VAR_6->revision,
                                                    VAR_6->fs,
                                                    VAR_8));
          FUNC_0(FUNC_12(&VAR_6->revision_file,
                                                   VAR_6->fs,
                                                   VAR_6->revision,
                                                   VAR_6->rev_file_pool,
                                                   VAR_8));
        }

      if (FUNC_16(VAR_6->fs))
        {




          FUNC_0(FUNC_4(((void*)0), VAR_6->fs,
                             VAR_6->revision, VAR_2,
                             VAR_6->revision_file, VAR_8,
                             VAR_8));


          FUNC_0(FUNC_7((void **)&VAR_12, &VAR_10,
                                 VAR_11->changes_cache, &VAR_13, VAR_7));
        }


      if (!VAR_10)
        {
          apr_off_t VAR_14;



          if (FUNC_14(VAR_6->fs))
            {
              FUNC_0(FUNC_11(&VAR_14, VAR_6->fs,
                                             VAR_6->revision_file,
                                             VAR_6->revision, ((void*)0),
                                             VAR_2,
                                             VAR_8));
            }
          else
            {
              FUNC_0(FUNC_6(((void*)0), &VAR_14,
                                              VAR_6->revision_file,
                                              VAR_6->fs, VAR_6->revision,
                                              VAR_8));


              VAR_9 = VAR_14;
            }


          FUNC_0(FUNC_1(VAR_6->fs, VAR_6->revision_file->file,
                               ((void*)0), VAR_14 + VAR_6->next_offset,
                               VAR_8));

          FUNC_0(FUNC_13(VAR_5,
                                          VAR_6->revision_file->stream,
                                          VAR_1,
                                          VAR_7, VAR_8));


          VAR_12 = FUNC_3(VAR_8, sizeof(*VAR_12));
          FUNC_0(FUNC_15(&VAR_12->end_offset,
                                         VAR_6->revision_file->file,
                                         VAR_8));
          VAR_12->end_offset -= VAR_14;
          VAR_12->start_offset = VAR_6->next_offset;
          VAR_12->count = (*VAR_5)->nelts;
          VAR_12->changes = (change_t **)(*VAR_5)->elts;
          VAR_12->eol = VAR_12->count < VAR_1;



          if (VAR_11->changes_cache)
            FUNC_0(FUNC_8(VAR_11->changes_cache, &VAR_13, VAR_12,
                                   VAR_8));
        }
    }

  if (VAR_10)
    {

      (*VAR_5) = FUNC_2(VAR_7, 0, sizeof(void *));
      (*VAR_5)->elts = (char *)VAR_12->changes;
      (*VAR_5)->nelts = VAR_12->count;
      (*VAR_5)->nalloc = VAR_12->count;
    }


  VAR_6->next += (*VAR_5)->nelts;
  VAR_6->next_offset = VAR_12->end_offset;
  VAR_6->eol = VAR_12->eol;


  if (VAR_6->eol && VAR_6->revision_file)
    {
      FUNC_0(FUNC_9(VAR_6->revision_file));
      VAR_6->revision_file = ((void*)0);
    }

  FUNC_0(FUNC_5(VAR_6->fs, VAR_6->revision, VAR_9, *VAR_5,
                         VAR_3, VAR_8));

  return VAR_4;
}
