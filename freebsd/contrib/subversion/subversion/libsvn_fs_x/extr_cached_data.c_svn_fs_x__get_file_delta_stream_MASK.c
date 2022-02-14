
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ base_revision; scalar_t__ base_item_index; } ;
typedef TYPE_3__ svn_fs_x__rep_header_t ;
struct TYPE_17__ {TYPE_8__* data_rep; } ;
typedef TYPE_4__ svn_fs_x__noderev_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_18__ {TYPE_2__* sfile; } ;
typedef TYPE_5__ rep_state_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {scalar_t__ number; int change_set; } ;
struct TYPE_19__ {TYPE_1__ id; } ;
struct TYPE_15__ {int * rfile; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__**,TYPE_3__**,int *,TYPE_8__*,int *,int *,int *) ;
 int * FUNC_2 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,TYPE_8__*,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int ,int *) ;

svn_error_t *
FUNC_8(svn_txdelta_stream_t **VAR_5,
                                svn_fs_t *VAR_6,
                                svn_fs_x__noderev_t *VAR_7,
                                svn_fs_x__noderev_t *VAR_8,
                                apr_pool_t *VAR_9,
                                apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11, *VAR_12;
  rep_state_t *VAR_13;
  svn_fs_x__rep_header_t *VAR_14;




  if (VAR_8->data_rep && VAR_7)
    {

      FUNC_0(FUNC_1(&VAR_13, &VAR_14, ((void*)0),
                               VAR_8->data_rep, VAR_6, VAR_9,
                               VAR_10));



      if (VAR_7 && VAR_7->data_rep && VAR_8->data_rep)
        {



          if (VAR_14->type == VAR_3
              && VAR_14->base_revision
                 == FUNC_5(VAR_7->data_rep->id.change_set)
              && VAR_14->base_item_index == VAR_7->data_rep->id.number)
            {
              *VAR_5 = FUNC_2(VAR_13, VAR_8,
                                                    VAR_9);
              return VAR_1;
            }
        }
      else if (!VAR_7)
        {



          if (VAR_14->type == VAR_4)
            {
              *VAR_5 = FUNC_2(VAR_13, VAR_8,
                                                    VAR_9);
              return VAR_1;
            }
        }


      if (VAR_13->sfile->rfile)
        {
          FUNC_0(FUNC_3(VAR_13->sfile->rfile));
          VAR_13->sfile->rfile = ((void*)0);
        }
    }


  if (VAR_7)
    FUNC_0(FUNC_4(&VAR_11, VAR_6, VAR_7->data_rep,
                                   VAR_2, VAR_9));
  else
    VAR_11 = FUNC_6(VAR_9);

  FUNC_0(FUNC_4(&VAR_12, VAR_6, VAR_8->data_rep,
                                 VAR_2, VAR_9));




  FUNC_7(VAR_5, VAR_11, VAR_12, VAR_0, VAR_9);

  return VAR_1;
}
