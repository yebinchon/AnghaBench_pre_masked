
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ original_length; scalar_t__ modified_length; struct TYPE_8__* next; scalar_t__ latest_length; scalar_t__ latest_start; scalar_t__ modified_start; scalar_t__ original_start; int type; } ;
typedef TYPE_2__ svn_diff_t ;
struct TYPE_9__ {scalar_t__ length; struct TYPE_9__* next; TYPE_1__** position; } ;
typedef TYPE_3__ svn_diff__lcs_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_7__ {scalar_t__ offset; } ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

svn_diff_t *
FUNC_1(svn_diff__lcs_t *VAR_2,
               apr_off_t VAR_3, apr_off_t VAR_4,
               svn_boolean_t VAR_5,
               apr_pool_t *VAR_6)
{
  svn_diff_t *VAR_7;
  svn_diff_t **VAR_8 = &VAR_7;

  while (1)
    {
      if (VAR_3 < VAR_2->position[0]->offset
          || VAR_4 < VAR_2->position[1]->offset)
      {
          (*VAR_8) = FUNC_0(VAR_6, sizeof(**VAR_8));

          (*VAR_8)->type = VAR_1;
          (*VAR_8)->original_start = VAR_3 - 1;
          (*VAR_8)->original_length =
            VAR_2->position[0]->offset - VAR_3;
          (*VAR_8)->modified_start = VAR_4 - 1;
          (*VAR_8)->modified_length =
            VAR_2->position[1]->offset - VAR_4;
          (*VAR_8)->latest_start = 0;
          (*VAR_8)->latest_length = 0;

          VAR_8 = &(*VAR_8)->next;
      }


      if (VAR_2->length == 0)
          break;

      VAR_3 = VAR_2->position[0]->offset;
      VAR_4 = VAR_2->position[1]->offset;

      if (VAR_5)
        {
          (*VAR_8) = FUNC_0(VAR_6, sizeof(**VAR_8));

          (*VAR_8)->type = VAR_0;
          (*VAR_8)->original_start = VAR_3 - 1;
          (*VAR_8)->original_length = VAR_2->length;
          (*VAR_8)->modified_start = VAR_4 - 1;
          (*VAR_8)->modified_length = VAR_2->length;
          (*VAR_8)->latest_start = 0;
          (*VAR_8)->latest_length = 0;

          VAR_8 = &(*VAR_8)->next;
        }

      VAR_3 += VAR_2->length;
      VAR_4 += VAR_2->length;

      VAR_2 = VAR_2->next;
    }

  *VAR_8 = ((void*)0);

  return VAR_7;
}
