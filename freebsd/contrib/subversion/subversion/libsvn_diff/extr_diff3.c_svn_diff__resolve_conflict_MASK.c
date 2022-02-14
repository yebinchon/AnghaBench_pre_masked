
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ modified_start; scalar_t__ latest_start; scalar_t__ modified_length; scalar_t__ latest_length; struct TYPE_11__* next; struct TYPE_11__* resolved_diff; int original_length; int original_start; void* type; } ;
typedef TYPE_1__ svn_diff_t ;
typedef int svn_diff__token_index_t ;
struct TYPE_12__ {scalar_t__ offset; scalar_t__ token_index; struct TYPE_12__* next; } ;
typedef TYPE_2__ svn_diff__position_t ;
struct TYPE_13__ {scalar_t__ length; struct TYPE_13__* next; TYPE_2__** position; } ;
typedef TYPE_3__ svn_diff__lcs_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 void* FUNC_0 (int *,int) ;
 int * FUNC_1 (TYPE_2__*,int ,int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,TYPE_2__*,int *,int *,int ,int ,int ,int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(svn_diff_t *VAR_2,
                           svn_diff__position_t **VAR_3,
                           svn_diff__position_t **VAR_4,
                           svn_diff__token_index_t VAR_5,
                           apr_pool_t *VAR_6)
{
  apr_off_t VAR_7 = VAR_2->modified_start + 1;
  apr_off_t VAR_8 = VAR_2->latest_start + 1;
  apr_off_t VAR_9;
  apr_off_t VAR_10 = VAR_2->modified_length;
  apr_off_t VAR_11 = VAR_2->latest_length;
  svn_diff__position_t *VAR_12[2];
  svn_diff__position_t *VAR_13[2];
  svn_diff__token_index_t *VAR_14[2];
  svn_diff__lcs_t *VAR_15 = ((void*)0);
  svn_diff__lcs_t **VAR_16 = &VAR_15;
  svn_diff_t **VAR_17 = &VAR_2->resolved_diff;
  apr_pool_t *VAR_18;





  VAR_12[0] = *VAR_3;
  VAR_12[1] = *VAR_4;

  while (VAR_12[0]->offset < VAR_7)
    VAR_12[0] = VAR_12[0]->next;

  while (VAR_12[1]->offset < VAR_8)
    VAR_12[1] = VAR_12[1]->next;

  VAR_13[0] = VAR_12[0];
  VAR_13[1] = VAR_12[1];

  VAR_9 = VAR_10 < VAR_11
                ? VAR_10 : VAR_11;

  while (VAR_9 > 0
         && VAR_13[0]->token_index == VAR_13[1]->token_index)
    {
      VAR_13[0] = VAR_13[0]->next;
      VAR_13[1] = VAR_13[1]->next;

      VAR_9--;
    }

  if (VAR_9 == 0
      && VAR_10 == VAR_11)
    {
      VAR_2->type = VAR_1;
      VAR_2->resolved_diff = ((void*)0);

      *VAR_3 = VAR_13[0];
      *VAR_4 = VAR_13[1];

      return;
    }

  VAR_2->type = VAR_0;
  VAR_18 = FUNC_3(VAR_6);




  VAR_9 = (VAR_10 < VAR_11
                  ? VAR_10 : VAR_11)
                - VAR_9;




  if (VAR_9 > 0)
    {
      VAR_15 = FUNC_0(VAR_18, sizeof(*VAR_15));
      VAR_15->next = ((void*)0);
      VAR_15->position[0] = VAR_12[0];
      VAR_15->position[1] = VAR_12[1];
      VAR_15->length = VAR_9;

      VAR_16 = &VAR_15->next;
    }

  VAR_10 -= VAR_9;
  VAR_11 -= VAR_9;

  VAR_7 = VAR_12[0]->offset;
  VAR_8 = VAR_12[1]->offset;

  VAR_12[0] = VAR_13[0];
  VAR_12[1] = VAR_13[1];





  if (VAR_10 == 0)
    {
      *VAR_3 = VAR_13[0];
      VAR_13[0] = ((void*)0);
    }
  else
    {
      while (--VAR_10)
        VAR_13[0] = VAR_13[0]->next;

      *VAR_3 = VAR_13[0]->next;
      VAR_13[0]->next = VAR_12[0];
    }

  if (VAR_11 == 0)
    {
      *VAR_4 = VAR_13[1];
      VAR_13[1] = ((void*)0);
    }
  else
    {
      while (--VAR_11)
        VAR_13[1] = VAR_13[1]->next;

      *VAR_4 = VAR_13[1]->next;
      VAR_13[1]->next = VAR_12[1];
    }

  VAR_14[0] = FUNC_1(VAR_13[0], VAR_5,
                                               VAR_18);
  VAR_14[1] = FUNC_1(VAR_13[1], VAR_5,
                                               VAR_18);

  *VAR_16 = FUNC_2(VAR_13[0], VAR_13[1], VAR_14[0],
                           VAR_14[1], VAR_5, 0, 0, VAR_18);




  if ((*VAR_16)->position[0]->offset == 1)
    (*VAR_16)->position[0] = *VAR_3;

  if ((*VAR_16)->position[1]->offset == 1)
    (*VAR_16)->position[1] = *VAR_4;


  while (1)
    {
      if (VAR_7 < VAR_15->position[0]->offset
          || VAR_8 < VAR_15->position[1]->offset)
        {
          (*VAR_17) = FUNC_0(VAR_6, sizeof(**VAR_17));

          (*VAR_17)->type = VAR_0;
          (*VAR_17)->original_start = VAR_2->original_start;
          (*VAR_17)->original_length = VAR_2->original_length;
          (*VAR_17)->modified_start = VAR_7 - 1;
          (*VAR_17)->modified_length = VAR_15->position[0]->offset
                                         - VAR_7;
          (*VAR_17)->latest_start = VAR_8 - 1;
          (*VAR_17)->latest_length = VAR_15->position[1]->offset
                                       - VAR_8;
          (*VAR_17)->resolved_diff = ((void*)0);

          VAR_17 = &(*VAR_17)->next;
        }


      if (VAR_15->length == 0)
        break;

      VAR_7 = VAR_15->position[0]->offset;
      VAR_8 = VAR_15->position[1]->offset;

      (*VAR_17) = FUNC_0(VAR_6, sizeof(**VAR_17));

      (*VAR_17)->type = VAR_1;
      (*VAR_17)->original_start = VAR_2->original_start;
      (*VAR_17)->original_length = VAR_2->original_length;
      (*VAR_17)->modified_start = VAR_7 - 1;
      (*VAR_17)->modified_length = VAR_15->length;
      (*VAR_17)->latest_start = VAR_8 - 1;
      (*VAR_17)->latest_length = VAR_15->length;
      (*VAR_17)->resolved_diff = ((void*)0);

      VAR_17 = &(*VAR_17)->next;

      VAR_7 += VAR_15->length;
      VAR_8 += VAR_15->length;

      VAR_15 = VAR_15->next;
    }

  *VAR_17 = ((void*)0);

  FUNC_4(VAR_18);
}
