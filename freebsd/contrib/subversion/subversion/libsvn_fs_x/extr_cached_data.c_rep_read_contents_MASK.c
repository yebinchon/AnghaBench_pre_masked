
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int fulltext_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int digest; int kind; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_16__ {scalar_t__ off; scalar_t__ len; int * current_fulltext; int scratch_pool; int fulltext_cache_key; TYPE_12__* fs; int md5_checksum_ctx; scalar_t__ checksum_finalized; int md5_digest; int fulltext_delivered; int filehandle_pool; int rep; int src_state; int base_window; int rs_list; int * fulltext_cache; } ;
typedef TYPE_3__ rep_read_baton_t ;
typedef int apr_size_t ;
struct TYPE_13__ {TYPE_1__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int *,TYPE_12__*,int *,int ,int ) ;
 int FUNC_3 (scalar_t__*,TYPE_3__*,char*,int *) ;
 int FUNC_4 (TYPE_3__*,char*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ,int *,int *,int ) ;
 int FUNC_7 (TYPE_2__**,int ,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int * FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_4,
                  char *VAR_5,
                  apr_size_t *VAR_6)
{
  rep_read_baton_t *VAR_7 = VAR_4;


  if (VAR_7->fulltext_cache)
    {
      svn_boolean_t VAR_8;
      FUNC_0(FUNC_3(&VAR_8, VAR_7, VAR_5, VAR_6));
      if (VAR_8)
        return VAR_1;



      VAR_7->fulltext_cache = ((void*)0);
    }


  if (!VAR_7->rs_list)
    {

      FUNC_0(FUNC_2(&VAR_7->rs_list, &VAR_7->base_window,
                             &VAR_7->src_state, VAR_7->fs, &VAR_7->rep,
                             VAR_7->filehandle_pool, VAR_7->scratch_pool));




      FUNC_0(FUNC_5(VAR_7, VAR_7->fulltext_delivered));
    }




  if (VAR_7->off == VAR_7->len)
    *VAR_6 = 0;
  else
    FUNC_0(FUNC_4(VAR_7, VAR_5, VAR_6));

  if (VAR_7->current_fulltext)
    FUNC_12(VAR_7->current_fulltext, VAR_5, *VAR_6);





  if (!VAR_7->checksum_finalized)
    {
      FUNC_0(FUNC_10(VAR_7->md5_checksum_ctx, VAR_5, *VAR_6));
      VAR_7->off += *VAR_6;
      if (VAR_7->off == VAR_7->len)
        {
          svn_checksum_t *VAR_9;
          svn_checksum_t VAR_10;
          VAR_10.kind = VAR_3;
          VAR_10.digest = VAR_7->md5_digest;

          VAR_7->checksum_finalized = VAR_2;
          FUNC_0(FUNC_7(&VAR_9, VAR_7->md5_checksum_ctx,
                                     VAR_7->scratch_pool));
          if (!FUNC_8(VAR_9, &VAR_10))
            return FUNC_11(VAR_0,
                    FUNC_9(&VAR_10, VAR_9,
                        VAR_7->scratch_pool,
                        FUNC_1("Checksum mismatch while reading representation")),
                    ((void*)0));
        }
    }

  if (VAR_7->off == VAR_7->len && VAR_7->current_fulltext)
    {
      svn_fs_x__data_t *VAR_11 = VAR_7->fs->fsap_data;
      FUNC_0(FUNC_6(VAR_11->fulltext_cache, &VAR_7->fulltext_cache_key,
                             VAR_7->current_fulltext, VAR_7->scratch_pool));
      VAR_7->current_fulltext = ((void*)0);
    }

  return VAR_1;
}
