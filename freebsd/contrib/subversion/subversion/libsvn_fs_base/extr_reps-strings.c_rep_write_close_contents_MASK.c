
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct rep_write_baton {int pool; int fs; scalar_t__ trail; scalar_t__ finalized; int sha1_checksum_ctx; int sha1_checksum; int md5_checksum_ctx; int md5_checksum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,int * (*) (struct rep_write_baton*,scalar_t__),struct rep_write_baton*,int ,int ) ;
 int * FUNC_3 (struct rep_write_baton*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2)
{
  struct rep_write_baton *VAR_3 = VAR_2;
  if (! VAR_3->finalized)
    {
      FUNC_0(FUNC_1(&VAR_3->md5_checksum, VAR_3->md5_checksum_ctx,
                                 VAR_3->pool));
      FUNC_0(FUNC_1(&VAR_3->sha1_checksum, VAR_3->sha1_checksum_ctx,
                                 VAR_3->pool));
      VAR_3->finalized = VAR_1;
    }


  if (VAR_3->trail)
    return FUNC_3(VAR_3, VAR_3->trail);
  else


    return FUNC_2(VAR_3->fs, FUNC_3,
                                  VAR_3, VAR_0, VAR_3->pool);
}
