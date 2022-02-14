
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_24__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_25__ {TYPE_2__* fs; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int const svn_fs_id_t ;
struct TYPE_26__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct txn_pred_id_args {int revision; int const* id; int const* origin_id; int const* pred_id; int * pool; int node_id; } ;
struct id_created_rev_args {int revision; int const* id; int const* origin_id; int const* pred_id; int * pool; int node_id; } ;
struct get_set_node_origin_args {int revision; int const* id; int const* origin_id; int const* pred_id; int * pool; int node_id; } ;
struct TYPE_27__ {scalar_t__ format; } ;
typedef TYPE_5__ base_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_2 (int const**,TYPE_3__*,char const*,int *) ;
 TYPE_4__* FUNC_3 (char const**,int *,TYPE_2__*,TYPE_3__*,char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 char* FUNC_6 (char const*,int *) ;
 int const* FUNC_7 (int const*,int *) ;
 int FUNC_8 (int const*) ;
 TYPE_4__* FUNC_9 (TYPE_2__*,int ,struct txn_pred_id_args*,int ,int *) ;
 TYPE_4__* FUNC_10 (TYPE_3__**,TYPE_2__*,int ,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (char const*,int *) ;
 int FUNC_15 (TYPE_1__*,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_revnum_t *VAR_10,
                     svn_fs_root_t *VAR_11,
                     const char *VAR_12,
                     apr_pool_t *VAR_13)
{
  svn_fs_t *VAR_14 = VAR_11->fs;
  base_fs_data_t *VAR_15 = VAR_14->fsap_data;
  struct get_set_node_origin_args VAR_16;
  const svn_fs_id_t *VAR_17 = ((void*)0);
  struct id_created_rev_args VAR_18;



  VAR_12 = FUNC_6(VAR_12, VAR_13);


  if (FUNC_4(VAR_12, "/") == 0)
    {
      *VAR_10 = 0;
      return VAR_4;
    }



  if (VAR_15->format >= VAR_2)
    {
      const svn_fs_id_t *VAR_19;
      svn_error_t *VAR_20;

      FUNC_0(FUNC_2(&VAR_19, VAR_11, VAR_12, VAR_13));
      VAR_16.node_id = FUNC_8(VAR_19);
      VAR_20 = FUNC_9(VAR_11->fs, VAR_6, &VAR_16,
                                   VAR_0, VAR_13);





      if (! VAR_20)
        {
          VAR_17 = VAR_16.origin_id;
        }
      else if (VAR_20->apr_err == VAR_1)
        {
          FUNC_5(VAR_20);
          VAR_20 = VAR_4;
        }
      FUNC_0(VAR_20);
    }


  if (! VAR_17)
    {
      svn_fs_root_t *VAR_21 = VAR_11;
      apr_pool_t *VAR_22 = FUNC_12(VAR_13);
      apr_pool_t *VAR_23 = FUNC_12(VAR_13);
      svn_stringbuf_t *VAR_24 =
        FUNC_14(VAR_12, VAR_13);
      svn_revnum_t VAR_25 = VAR_3;
      const svn_fs_id_t *VAR_26;






      while (1)
        {
          svn_revnum_t VAR_27;
          const char *VAR_28 = VAR_24->data;




          if (FUNC_1(VAR_25))
            FUNC_0(FUNC_10(&VAR_21, VAR_14,
                                               VAR_25, VAR_22));


          FUNC_0(FUNC_3(&VAR_28, &VAR_27, VAR_14, VAR_21,
                                VAR_28, VAR_22));
          if (! VAR_28)
            break;



          FUNC_15(VAR_24, VAR_28);
          VAR_25 = VAR_27;
        }


      FUNC_0(FUNC_2(&VAR_26, VAR_21, VAR_24->data, VAR_13));
      while (1)
        {
          struct txn_pred_id_args VAR_29;
          FUNC_11(VAR_22);
          VAR_29.id = VAR_26;
          VAR_29.pred_id = ((void*)0);
          VAR_29.pool = VAR_22;
          FUNC_0(FUNC_9(VAR_14, VAR_8, &VAR_29,
                                         VAR_0, VAR_22));
          if (! VAR_29.pred_id)
            break;
          FUNC_11(VAR_23);
          VAR_26 = FUNC_7(VAR_29.pred_id, VAR_23);
        }


      VAR_17 = FUNC_7(VAR_26, VAR_13);



      if (VAR_15->format >= VAR_2)
        {
          VAR_16.origin_id = VAR_17;
          FUNC_0(FUNC_9(VAR_11->fs, VAR_9,
                                         &VAR_16, VAR_5, VAR_22));
        }

      FUNC_13(VAR_23);
      FUNC_13(VAR_22);
    }



  VAR_18.id = VAR_17;
  FUNC_0(FUNC_9(VAR_11->fs, VAR_7, &VAR_18,
                                 VAR_5, VAR_13));
  *VAR_10 = VAR_18.revision;
  return VAR_4;
}
