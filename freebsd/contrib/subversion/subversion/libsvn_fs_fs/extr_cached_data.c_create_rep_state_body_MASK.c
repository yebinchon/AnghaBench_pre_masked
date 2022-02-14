
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_11__ ;


struct TYPE_31__ {TYPE_7__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_32__ {scalar_t__ type; int header_size; } ;
typedef TYPE_2__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_33__ {int revision; TYPE_11__* rfile; TYPE_1__* fs; int * pool; } ;
typedef TYPE_3__ shared_file_t ;
struct TYPE_34__ {int revision; int expanded_size; int item_index; int txn_id; int size; } ;
typedef TYPE_4__ representation_t ;
struct TYPE_35__ {int revision; int ver; int start; int current; int header_size; TYPE_3__* sfile; int * combined_cache; int * window_cache; int * raw_window_cache; int item_index; int size; } ;
typedef TYPE_5__ rep_state_t ;
struct TYPE_36__ {int revision; int second; } ;
typedef TYPE_6__ pair_cache_key_t ;
struct TYPE_37__ {int min_unpacked_rev; int max_files_per_dir; scalar_t__ rep_header_cache; int * combined_window_cache; int * txdelta_window_cache; int * raw_window_cache; } ;
typedef TYPE_7__ fs_fs_data_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_30__ {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_4 ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_1__*,int,int ,TYPE_11__*,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int,int ,TYPE_2__*,int ,int *) ;
 int FUNC_7 (int*,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_11__**,TYPE_1__*,TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_5__*,int *,int ,int *) ;
 int FUNC_10 (void**,int*,scalar_t__,TYPE_6__*,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (scalar_t__,TYPE_6__*,TYPE_2__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_11__*,int,int *,int ,int *) ;
 int FUNC_15 (TYPE_2__**,int ,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_17(rep_state_t **VAR_6,
                      svn_fs_fs__rep_header_t **VAR_7,
                      shared_file_t **VAR_8,
                      representation_t *VAR_9,
                      svn_fs_t *VAR_10,
                      apr_pool_t *VAR_11,
                      apr_pool_t *VAR_12)
{
  fs_fs_data_t *VAR_13 = VAR_10->fsap_data;
  rep_state_t *VAR_14 = FUNC_3(VAR_11, sizeof(*VAR_14));
  svn_fs_fs__rep_header_t *VAR_15;
  svn_boolean_t VAR_16 = VAR_1;
  apr_uint64_t VAR_17;
  svn_boolean_t VAR_18
    = VAR_8 && *VAR_8 && (*VAR_8)->rfile
      && FUNC_2((*VAR_8)->revision)
      && (*VAR_8)->revision < VAR_13->min_unpacked_rev
      && VAR_9->revision < VAR_13->min_unpacked_rev
      && ( ((*VAR_8)->revision / VAR_13->max_files_per_dir)
          == (VAR_9->revision / VAR_13->max_files_per_dir));

  pair_cache_key_t VAR_19;
  VAR_19.revision = VAR_9->revision;
  VAR_19.second = VAR_9->item_index;


  VAR_14->size = VAR_9->size;
  VAR_14->revision = VAR_9->revision;
  VAR_14->item_index = VAR_9->item_index;
  VAR_14->raw_window_cache = FUNC_16(VAR_10) ? VAR_13->raw_window_cache : ((void*)0);
  VAR_14->ver = -1;
  VAR_14->start = -1;






  VAR_17 = 4 * (VAR_9->expanded_size + VAR_2);
  VAR_17 = FUNC_0(VAR_17, VAR_0);

  VAR_14->window_cache = VAR_13->txdelta_window_cache
                     && FUNC_11(VAR_13->txdelta_window_cache,
                                       (apr_size_t)VAR_17)
                   ? VAR_13->txdelta_window_cache
                   : ((void*)0);
  VAR_14->combined_cache = VAR_13->combined_window_cache
                       && FUNC_11(VAR_13->combined_window_cache,
                                       (apr_size_t)VAR_17)
                     ? VAR_13->combined_window_cache
                     : ((void*)0);


  if (VAR_13->rep_header_cache && !FUNC_13(&VAR_9->txn_id))
    FUNC_1(FUNC_10((void **) &VAR_15, &VAR_16,
                           VAR_13->rep_header_cache, &VAR_19, VAR_11));


  if (VAR_18)
    {
      VAR_14->sfile = *VAR_8;
    }
  else
    {
      shared_file_t *VAR_20 = FUNC_3(VAR_11, sizeof(*VAR_20));
      VAR_20->revision = VAR_9->revision;
      VAR_20->pool = VAR_11;
      VAR_20->fs = VAR_10;
      VAR_14->sfile = VAR_20;


      if (VAR_8)
        *VAR_8 = VAR_20;
    }


  if (!VAR_16)
    {

      if (VAR_18)
        {
          apr_off_t VAR_21;




          VAR_14->sfile = *VAR_8;
          FUNC_1(FUNC_4(VAR_14->sfile));
          FUNC_1(FUNC_14(&VAR_21, VAR_10, VAR_14->sfile->rfile,
                                         VAR_9->revision, ((void*)0), VAR_9->item_index,
                                         VAR_12));
          FUNC_1(FUNC_9(VAR_14, ((void*)0), VAR_21, VAR_12));
        }
      else
        {



          FUNC_1(FUNC_8(&VAR_14->sfile->rfile, VAR_10, VAR_9,
                                               VAR_11));
        }

      FUNC_1(FUNC_15(&VAR_15, VAR_14->sfile->rfile->stream,
                                         VAR_11, VAR_12));
      FUNC_1(FUNC_7(&VAR_14->start, VAR_14, VAR_11));


      if (! FUNC_13(&VAR_9->txn_id))
        {
          if (FUNC_16(VAR_10))
            FUNC_1(FUNC_5(((void*)0), VAR_10, VAR_9->revision, VAR_9->item_index,
                               VAR_14->sfile->rfile, VAR_11, VAR_12));
          else
            if (VAR_13->rep_header_cache)
              FUNC_1(FUNC_12(VAR_13->rep_header_cache, &VAR_19, VAR_15,
                                     VAR_12));
        }
    }


  FUNC_1(FUNC_6(VAR_10, VAR_9->revision, VAR_9->item_index, VAR_15,
                         VAR_3, VAR_12));

  VAR_14->header_size = VAR_15->header_size;
  *VAR_6 = VAR_14;
  *VAR_7 = VAR_15;

  if (VAR_15->type == VAR_5)

    return VAR_4;


  VAR_14->current = 4;

  return VAR_4;
}
