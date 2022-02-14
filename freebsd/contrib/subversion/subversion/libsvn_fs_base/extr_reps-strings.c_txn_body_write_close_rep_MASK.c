
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct rep_write_baton {int rep_key; int fs; int sha1_checksum; int md5_checksum; } ;
struct TYPE_9__ {void* sha1_checksum; void* md5_checksum; } ;
typedef TYPE_2__ representation_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__**,int ,int ,TYPE_1__*,int ) ;
 int * FUNC_3 (int ,int ,TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0, trail_t *VAR_1)
{
  struct rep_write_baton *VAR_2 = VAR_0;
  representation_t *VAR_3;

  FUNC_0(FUNC_2(&VAR_3, VAR_2->fs, VAR_2->rep_key,
                               VAR_1, VAR_1->pool));
  VAR_3->md5_checksum = FUNC_1(VAR_2->md5_checksum, VAR_1->pool);
  VAR_3->sha1_checksum = FUNC_1(VAR_2->sha1_checksum, VAR_1->pool);
  return FUNC_3(VAR_2->fs, VAR_2->rep_key, VAR_3,
                               VAR_1, VAR_1->pool);
}
