
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t svn_diff__token_index_t ;
struct TYPE_16__ {TYPE_4__* lcs; TYPE_3__** position; } ;
typedef TYPE_2__ svn_diff__snake_t ;
struct TYPE_17__ {int offset; int token_index; struct TYPE_17__* next; } ;
typedef TYPE_3__ svn_diff__position_t ;
struct TYPE_18__ {int refcount; struct TYPE_18__* next; TYPE_1__** position; int length; } ;
typedef TYPE_4__ svn_diff__lcs_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_15__ {int offset; } ;


 TYPE_4__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (TYPE_4__*,int,int,int,int *) ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,size_t**,TYPE_4__**,int *) ;

svn_diff__lcs_t *
FUNC_5(svn_diff__position_t *VAR_0,
              svn_diff__position_t *VAR_1,
              svn_diff__token_index_t *VAR_2,
              svn_diff__token_index_t *VAR_3,
              svn_diff__token_index_t VAR_4,
              apr_off_t VAR_5,
              apr_off_t VAR_6,
              apr_pool_t *VAR_7)
{
  apr_off_t VAR_8[2];
  svn_diff__token_index_t *VAR_9[2];
  svn_diff__token_index_t VAR_10[2];
  svn_diff__token_index_t VAR_11;
  svn_diff__snake_t *VAR_12;
  apr_off_t VAR_13;
  apr_off_t VAR_14;
  apr_off_t VAR_15 = 0;
  svn_diff__lcs_t *VAR_16, *VAR_17 = ((void*)0);

  svn_diff__position_t VAR_18[2];




  VAR_16 = FUNC_0(VAR_7, sizeof(*VAR_16));
  VAR_16->position[0] = FUNC_1(VAR_7, sizeof(*VAR_16->position[0]));
  VAR_16->position[0]->offset = VAR_0
                             ? VAR_0->offset + VAR_6 + 1
                             : VAR_5 + VAR_6 + 1;
  VAR_16->position[1] = FUNC_1(VAR_7, sizeof(*VAR_16->position[1]));
  VAR_16->position[1]->offset = VAR_1
                             ? VAR_1->offset + VAR_6 + 1
                             : VAR_5 + VAR_6 + 1;
  VAR_16->length = 0;
  VAR_16->refcount = 1;
  VAR_16->next = ((void*)0);

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    {
      if (VAR_6)
        VAR_16 = FUNC_2(VAR_16, VAR_6,
                          VAR_16->position[0]->offset - VAR_6,
                          VAR_16->position[1]->offset - VAR_6,
                          VAR_7);
      if (VAR_5)
        VAR_16 = FUNC_2(VAR_16, VAR_5, 1, 1, VAR_7);

      return VAR_16;
    }

  VAR_10[1] = VAR_10[0] = 0;
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
    {
      if (VAR_2[VAR_11] == 0)
        VAR_10[1] += VAR_3[VAR_11];
      if (VAR_3[VAR_11] == 0)
        VAR_10[0] += VAR_2[VAR_11];
    }




  VAR_8[0] = VAR_0->offset - VAR_0->next->offset + 1
              - VAR_10[0];
  VAR_8[1] = VAR_1->offset - VAR_1->next->offset + 1
              - VAR_10[1];




  VAR_12 = FUNC_1(VAR_7,
                   sizeof(*VAR_12) * (apr_size_t)(VAR_8[0] + VAR_8[1] + 3));







  VAR_12 += VAR_8[1] + 1;

  VAR_18[0].next = VAR_0->next;
  VAR_0->next = &VAR_18[0];
  VAR_18[0].offset = VAR_0->offset + 1;
  VAR_9[0] = VAR_2;

  VAR_18[1].next = VAR_1->next;
  VAR_1->next = &VAR_18[1];
  VAR_18[1].offset = VAR_1->offset + 1;
  VAR_9[1] = VAR_3;



  VAR_18[0].token_index = -1;
  VAR_18[1].token_index = -2;




  VAR_13 = VAR_8[0] - VAR_8[1];





  VAR_12[VAR_13 - 1].position[0] = VAR_18[0].next;
  VAR_12[VAR_13 - 1].position[1] = &VAR_18[1];

  VAR_15 = 0;
  do
    {

      for (VAR_14 = (VAR_13 < 0 ? VAR_13 : 0) - VAR_15; VAR_14 < 0; VAR_14++)
        {
          FUNC_4(VAR_12 + VAR_14, VAR_9, &VAR_17, VAR_7);
        }

      for (VAR_14 = (VAR_13 > 0 ? VAR_13 : 0) + VAR_15; VAR_14 >= 0; VAR_14--)
        {
          FUNC_4(VAR_12 + VAR_14, VAR_9, &VAR_17, VAR_7);
        }

      VAR_15++;
    }
  while (VAR_12[0].position[1] != &VAR_18[1]);

  if (VAR_6)
    VAR_16->next = FUNC_2(VAR_12[0].lcs, VAR_6,
                            VAR_16->position[0]->offset - VAR_6,
                            VAR_16->position[1]->offset - VAR_6,
                            VAR_7);
  else
    VAR_16->next = VAR_12[0].lcs;

  VAR_16 = FUNC_3(VAR_16);

  VAR_0->next = VAR_18[0].next;
  VAR_1->next = VAR_18[1].next;

  if (VAR_5)
    return FUNC_2(VAR_16, VAR_5, 1, 1, VAR_7);
  else
    return VAR_16;
}
