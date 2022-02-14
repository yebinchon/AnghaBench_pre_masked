
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_8__ {int chunk_index; int item_index; scalar_t__ revision; } ;
typedef TYPE_2__ svn_fs_x__window_cache_key_t ;
struct TYPE_7__ {int number; int change_set; } ;
struct TYPE_9__ {int chunk_index; TYPE_1__ rep_id; } ;
typedef TYPE_3__ rep_state_t ;
typedef scalar_t__ apr_uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static svn_fs_x__window_cache_key_t *
FUNC_2(svn_fs_x__window_cache_key_t *VAR_1,
               rep_state_t *VAR_2)
{
  svn_revnum_t VAR_3 = FUNC_1(VAR_2->rep_id.change_set);
  FUNC_0(VAR_3 <= VAR_0);

  VAR_1->revision = (apr_uint32_t)VAR_3;
  VAR_1->item_index = VAR_2->rep_id.number;
  VAR_1->chunk_index = VAR_2->chunk_index;

  return VAR_1;
}
