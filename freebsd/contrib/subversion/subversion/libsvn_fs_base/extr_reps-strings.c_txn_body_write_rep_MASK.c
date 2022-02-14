
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
struct write_rep_args {int len; int buf; TYPE_1__* wb; } ;
struct TYPE_5__ {int sha1_checksum_ctx; int md5_checksum_ctx; int txn_id; int rep_key; int fs; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, trail_t *VAR_2)
{
  struct write_rep_args *VAR_3 = VAR_1;

  FUNC_0(FUNC_1(VAR_3->wb->fs,
                    VAR_3->wb->rep_key,
                    VAR_3->buf,
                    VAR_3->len,
                    VAR_3->wb->txn_id,
                    VAR_2,
                    VAR_2->pool));
  FUNC_0(FUNC_2(VAR_3->wb->md5_checksum_ctx,
                              VAR_3->buf, VAR_3->len));
  FUNC_0(FUNC_2(VAR_3->wb->sha1_checksum_ctx,
                              VAR_3->buf, VAR_3->len));
  return VAR_0;
}
