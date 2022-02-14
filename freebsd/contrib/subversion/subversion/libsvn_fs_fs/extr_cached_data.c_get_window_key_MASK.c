
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int chunk_index; int item_index; scalar_t__ revision; } ;
typedef TYPE_1__ window_cache_key_t ;
struct TYPE_7__ {scalar_t__ revision; int chunk_index; int item_index; } ;
typedef TYPE_2__ rep_state_t ;
typedef scalar_t__ apr_uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static window_cache_key_t *
FUNC_1(window_cache_key_t *VAR_1, rep_state_t *VAR_2)
{
  FUNC_0(VAR_2->revision <= VAR_0);
  VAR_1->revision = (apr_uint32_t)VAR_2->revision;
  VAR_1->item_index = VAR_2->item_index;
  VAR_1->chunk_index = VAR_2->chunk_index;

  return VAR_1;
}
