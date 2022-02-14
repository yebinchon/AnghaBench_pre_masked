
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int expanded_size; int md5_digest; } ;
typedef TYPE_1__ svn_fs_x__representation_t ;
typedef int svn_fs_x__pair_cache_key_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int * current_fulltext; scalar_t__ fulltext_delivered; int * fulltext_cache; void* filehandle_pool; void* scratch_pool; int fulltext_cache_key; scalar_t__ off; int len; int md5_digest; int checksum_finalized; int md5_checksum_ctx; int * buf; scalar_t__ chunk_index; int * base_window; TYPE_1__ rep; int * fs; } ;
typedef TYPE_2__ rep_read_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(rep_read_baton_t **VAR_3,
                   svn_fs_t *VAR_4,
                   svn_fs_x__representation_t *VAR_5,
                   svn_fs_x__pair_cache_key_t VAR_6,
                   apr_pool_t *VAR_7)
{
  rep_read_baton_t *VAR_8;

  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->fs = VAR_4;
  VAR_8->rep = *VAR_5;
  VAR_8->base_window = ((void*)0);
  VAR_8->chunk_index = 0;
  VAR_8->buf = ((void*)0);
  VAR_8->md5_checksum_ctx = FUNC_2(VAR_2,
                                                VAR_7);
  VAR_8->checksum_finalized = VAR_0;
  FUNC_1(VAR_8->md5_digest, VAR_5->md5_digest, sizeof(VAR_5->md5_digest));
  VAR_8->len = VAR_5->expanded_size;
  VAR_8->off = 0;
  VAR_8->fulltext_cache_key = VAR_6;




  VAR_8->scratch_pool = FUNC_3(VAR_7);
  VAR_8->filehandle_pool = FUNC_3(VAR_7);
  VAR_8->fulltext_cache = ((void*)0);
  VAR_8->fulltext_delivered = 0;
  VAR_8->current_fulltext = ((void*)0);


  *VAR_3 = VAR_8;

  return VAR_1;
}
