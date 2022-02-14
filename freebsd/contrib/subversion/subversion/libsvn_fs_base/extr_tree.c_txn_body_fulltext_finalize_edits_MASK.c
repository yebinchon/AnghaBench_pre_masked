
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
struct text_baton_t {int node; int path; TYPE_1__* root; int result_checksum; } ;
struct TYPE_6__ {int txn; int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3, trail_t *VAR_4)
{
  struct text_baton_t *VAR_5 = VAR_3;
  FUNC_0(FUNC_2(VAR_5->node,
                                          VAR_5->result_checksum,
                                          VAR_5->root->txn,
                                          VAR_4, VAR_4->pool));


  return FUNC_1(VAR_5->root->fs, VAR_5->root->txn, VAR_5->path,
                    FUNC_3(VAR_5->node),
                    VAR_2, VAR_1, VAR_0, VAR_4,
                    VAR_4->pool);
}
