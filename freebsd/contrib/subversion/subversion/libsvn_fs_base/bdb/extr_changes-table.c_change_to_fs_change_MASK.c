
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int copyfrom_known; int node_kind; int prop_mod; int text_mod; } ;
typedef TYPE_1__ svn_fs_path_change2_t ;
struct TYPE_7__ {int prop_mod; int text_mod; int kind; int noderev_id; } ;
typedef TYPE_2__ change_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_fs_path_change2_t *
FUNC_2(const change_t *VAR_2,
                    apr_pool_t *VAR_3)
{
  svn_fs_path_change2_t *VAR_4 = FUNC_0(
                                    FUNC_1(VAR_2->noderev_id,
                                                         VAR_3),
                                    VAR_2->kind,
                                    VAR_3);
  VAR_4->text_mod = VAR_2->text_mod;
  VAR_4->prop_mod = VAR_2->prop_mod;
  VAR_4->node_kind = VAR_1;
  VAR_4->copyfrom_known = VAR_0;

  return VAR_4;
}
