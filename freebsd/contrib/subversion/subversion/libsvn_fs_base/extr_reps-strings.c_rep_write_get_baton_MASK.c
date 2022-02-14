
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trail_t ;
typedef int svn_fs_t ;
struct rep_write_baton {char const* rep_key; char const* txn_id; int * pool; int * trail; int * fs; void* sha1_checksum_ctx; void* md5_checksum_ctx; } ;
typedef int apr_pool_t ;


 struct rep_write_baton* FUNC_0 (int *,int) ;
 void* FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct rep_write_baton *
FUNC_2(svn_fs_t *VAR_2,
                    const char *VAR_3,
                    const char *VAR_4,
                    trail_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  struct rep_write_baton *VAR_7;

  VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  VAR_7->md5_checksum_ctx = FUNC_1(VAR_0, VAR_6);
  VAR_7->sha1_checksum_ctx = FUNC_1(VAR_1, VAR_6);
  VAR_7->fs = VAR_2;
  VAR_7->trail = VAR_5;
  VAR_7->pool = VAR_6;
  VAR_7->rep_key = VAR_3;
  VAR_7->txn_id = VAR_4;
  return VAR_7;
}
