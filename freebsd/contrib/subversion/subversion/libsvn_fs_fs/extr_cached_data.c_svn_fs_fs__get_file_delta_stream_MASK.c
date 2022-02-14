
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
struct TYPE_20__ {TYPE_6__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_21__ {scalar_t__ type; scalar_t__ base_revision; scalar_t__ base_item_index; } ;
typedef TYPE_3__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
struct TYPE_22__ {TYPE_1__* sfile; } ;
typedef TYPE_4__ rep_state_t ;
struct TYPE_23__ {TYPE_11__* data_rep; } ;
typedef TYPE_5__ node_revision_t ;
struct TYPE_24__ {int fulltext_cache; } ;
typedef TYPE_6__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_19__ {int * rfile; } ;
struct TYPE_18__ {scalar_t__ revision; scalar_t__ item_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__**,TYPE_3__**,int *,TYPE_11__*,TYPE_2__*,int *,int *) ;
 int * FUNC_2 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,TYPE_2__*,TYPE_11__*,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int ,int *) ;

svn_error_t *
FUNC_7(svn_txdelta_stream_t **VAR_5,
                                 svn_fs_t *VAR_6,
                                 node_revision_t *VAR_7,
                                 node_revision_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  svn_stream_t *VAR_10, *VAR_11;
  rep_state_t *VAR_12;
  svn_fs_fs__rep_header_t *VAR_13;
  fs_fs_data_t *VAR_14 = VAR_6->fsap_data;




  if (VAR_8->data_rep && (VAR_7 || ! VAR_14->fulltext_cache))
    {

      FUNC_0(FUNC_1(&VAR_12, &VAR_13, ((void*)0),
                                VAR_8->data_rep, VAR_6, VAR_9, VAR_9));

      if (VAR_7 && VAR_7->data_rep && VAR_8->data_rep)
        {



          if (VAR_13->type == VAR_3
              && VAR_13->base_revision == VAR_7->data_rep->revision
              && VAR_13->base_item_index == VAR_7->data_rep->item_index)
            {
              *VAR_5 = FUNC_2(VAR_12, VAR_8, VAR_9);
              return VAR_1;
            }
        }
      else if (!VAR_7)
        {



          if (VAR_13->type == VAR_4)
            {
              *VAR_5 = FUNC_2(VAR_12, VAR_8, VAR_9);
              return VAR_1;
            }
        }


      if (VAR_12->sfile->rfile)
        {
          FUNC_0(FUNC_3(VAR_12->sfile->rfile));
          VAR_12->sfile->rfile = ((void*)0);
        }
    }


  if (VAR_7)
    FUNC_0(FUNC_4(&VAR_10, VAR_6, VAR_7->data_rep,
                                    VAR_2, VAR_9));
  else
    VAR_10 = FUNC_5(VAR_9);
  FUNC_0(FUNC_4(&VAR_11, VAR_6, VAR_8->data_rep,
                                  VAR_2, VAR_9));




  FUNC_6(VAR_5, VAR_10, VAR_11, VAR_0, VAR_9);

  return VAR_1;
}
