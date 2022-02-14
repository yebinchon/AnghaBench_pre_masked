
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct rep_read_baton {char const* rep_key; scalar_t__ offset; int scratch_pool; int * trail; int * fs; int checksum_finalized; scalar_t__ size; void* sha1_checksum_ctx; void* md5_checksum_ctx; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct rep_read_baton* FUNC_1 (int *,int) ;
 void* FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,int *,char const*,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct rep_read_baton **VAR_4,
                   svn_fs_t *VAR_5,
                   const char *VAR_6,
                   svn_boolean_t VAR_7,
                   trail_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  struct rep_read_baton *VAR_10;

  VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10));
  VAR_10->md5_checksum_ctx = FUNC_2(VAR_2, VAR_9);
  VAR_10->sha1_checksum_ctx = FUNC_2(VAR_3, VAR_9);

  if (VAR_6)
    FUNC_0(FUNC_3(&(VAR_10->size), VAR_5, VAR_6,
                                           VAR_8, VAR_9));
  else
    VAR_10->size = 0;

  VAR_10->checksum_finalized = VAR_0;
  VAR_10->fs = VAR_5;
  VAR_10->trail = VAR_7 ? VAR_8 : ((void*)0);
  VAR_10->scratch_pool = FUNC_4(VAR_9);
  VAR_10->rep_key = VAR_6;
  VAR_10->offset = 0;

  *VAR_4 = VAR_10;

  return VAR_1;
}
