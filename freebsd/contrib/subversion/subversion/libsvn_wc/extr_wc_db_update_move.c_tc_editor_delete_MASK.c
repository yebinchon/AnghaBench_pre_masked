
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* wcroot; int db; int dst_op_depth; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {scalar_t__ skip; TYPE_1__* umb; scalar_t__ shadowed; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int abspath; int wc_id; int sdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int **,TYPE_2__*,char const*,scalar_t__,scalar_t__,int ,int ,int *,int *,int *) ;
 int VAR_4 ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int * FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,int ,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int * FUNC_5 (int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*,int ,char const*,int ) ;
 char const* FUNC_10 (int *,int ,int *) ;
 scalar_t__ FUNC_11 (int *,int,int ) ;
 int * FUNC_12 (int **,int ,int ) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (scalar_t__*,int *) ;
 int * FUNC_15 (TYPE_3__*,char const*,int ,int *,int *,int *) ;
 int * FUNC_16 (TYPE_3__*,int *,int *) ;
 int * FUNC_17 (scalar_t__*,scalar_t__*,int ,char const*,int ,int *,int *,int *) ;
 int * FUNC_18 (int **,int ,int ,char const*,int ,int *,int *) ;
 int * FUNC_19 (int **,int ,int ,char const*,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_20 (TYPE_3__*,char const*,int ,int ,scalar_t__,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(node_move_baton_t *VAR_12,
                 const char *VAR_13,
                 svn_node_kind_t VAR_14,
                 svn_node_kind_t VAR_15,
                 apr_pool_t *VAR_16)
{
  update_move_baton_t *VAR_17 = VAR_12->umb;
  svn_sqlite__stmt_t *VAR_18;
  const char *VAR_19;
  svn_boolean_t VAR_20, VAR_21;
  svn_skel_t *VAR_22 = ((void*)0);
  svn_skel_t *VAR_23 = ((void*)0);

  FUNC_0(FUNC_2(VAR_12, VAR_16));
  if (VAR_12->skip)
    return VAR_2;




  if (VAR_12->shadowed)
    {
      FUNC_0(FUNC_3(VAR_12,
                                 VAR_14, VAR_15,
                                 VAR_7,
                                 VAR_16));
      return VAR_2;
    }

  VAR_19 = FUNC_4(VAR_17->wcroot->abspath, VAR_13, VAR_16);
  FUNC_0(FUNC_17(&VAR_20, &VAR_21,
                                      VAR_12->umb->db, VAR_19, VAR_0,
                                      ((void*)0), ((void*)0), VAR_16));
  if (VAR_20)
    {
      svn_wc_conflict_reason_t VAR_24;
      FUNC_0(FUNC_15(VAR_17->wcroot, VAR_13, VAR_0,
                                               ((void*)0), ((void*)0), VAR_16));

      VAR_24 = VAR_9;

      FUNC_0(FUNC_1(&VAR_23, VAR_12, VAR_13,
                                        VAR_14, VAR_15, VAR_24,
                                        (VAR_15 == VAR_6)
                                          ? VAR_7
                                          : VAR_8,
                                        ((void*)0),
                                        VAR_16, VAR_16));
      VAR_12->skip = VAR_3;
    }
  else
    {
      apr_pool_t *VAR_25 = FUNC_7(VAR_16);
      const char *VAR_26;
      svn_boolean_t VAR_27;



      FUNC_0(FUNC_12(&VAR_18, VAR_17->wcroot->sdb,
                                        VAR_1));
      FUNC_0(FUNC_9(VAR_18, "isd", VAR_17->wcroot->wc_id, VAR_13,
                                VAR_17->dst_op_depth));
      FUNC_0(FUNC_14(&VAR_27, VAR_18));
      while (VAR_27)
        {
          svn_error_t *VAR_28;
          svn_skel_t *VAR_29;
          svn_node_kind_t VAR_30;

          FUNC_6(VAR_25);

          VAR_30 = FUNC_11(VAR_18, 1, VAR_4);
          VAR_26 = FUNC_4(VAR_17->wcroot->abspath,
                                        FUNC_10(VAR_18, 0, ((void*)0)),
                                        VAR_25);
          if (VAR_30 == VAR_5)
            VAR_28 = FUNC_18(&VAR_29, VAR_17->db,
                                              VAR_17->wcroot->abspath, VAR_26,
                                              VAR_0 ,
                                              VAR_25, VAR_25);
          else
            VAR_28 = FUNC_19(&VAR_29, VAR_17->db,
                                               VAR_17->wcroot->abspath, VAR_26,
                                               VAR_25, VAR_25);
          if (!VAR_28)
            VAR_28 = FUNC_16(VAR_17->wcroot, VAR_29, VAR_25);
          if (VAR_28)
            return FUNC_5(VAR_28, FUNC_13(VAR_18));

          FUNC_0(FUNC_14(&VAR_27, VAR_18));
        }
      FUNC_0(FUNC_13(VAR_18));

      if (VAR_14 == VAR_5)
        FUNC_0(FUNC_18(&VAR_22, VAR_17->db,
                                            VAR_17->wcroot->abspath, VAR_19,
                                            VAR_0 ,
                                            VAR_16, VAR_25));
      else
        FUNC_0(FUNC_19(&VAR_22, VAR_17->db,
                                             VAR_17->wcroot->abspath, VAR_19,
                                             VAR_16, VAR_25));

      FUNC_8(VAR_25);
    }


  if (VAR_23 || (VAR_15 == VAR_6))
    FUNC_0(FUNC_20(VAR_17->wcroot, VAR_13, VAR_17->db,
                                 VAR_11,
                                 VAR_15,
                                 VAR_10,
                                 VAR_10,
                                 VAR_23, VAR_22, VAR_16));
  else if (VAR_22)
    FUNC_0(FUNC_16(VAR_17->wcroot, VAR_22,
                                       VAR_16));

  return VAR_2;
}
