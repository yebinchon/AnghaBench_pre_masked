
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* wcroot; int db; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {scalar_t__ skip; TYPE_1__* umb; scalar_t__ shadowed; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int wc_id; int sdb; int abspath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int **,TYPE_2__*,char const*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int ,char const*,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *,char*,int ,char const*,int ,int ) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,char const*,int ,int *,int *,int *) ;
 int FUNC_10 (TYPE_3__*,int *,int *) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,int ,char const*,int ,int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (TYPE_3__*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(node_move_baton_t *VAR_10,
                          const char *VAR_11,
                          svn_node_kind_t VAR_12,
                          svn_node_kind_t VAR_13,
                          apr_pool_t *VAR_14)
{
  update_move_baton_t *VAR_15 = VAR_10->umb;
  svn_sqlite__stmt_t *VAR_16;
  const char *VAR_17;
  svn_boolean_t VAR_18, VAR_19;
  svn_skel_t *VAR_20 = ((void*)0);
  svn_skel_t *VAR_21 = ((void*)0);

  FUNC_0(FUNC_2(VAR_10, VAR_14));
  if (VAR_10->skip)
    return VAR_2;




  if (VAR_10->shadowed)
    {
      FUNC_0(FUNC_3(VAR_10,
                                 VAR_12, VAR_13,
                                 VAR_5,
                                 VAR_14));
      return VAR_2;
    }

  VAR_17 = FUNC_5(VAR_15->wcroot->abspath, VAR_11, VAR_14);
  FUNC_0(FUNC_11(&VAR_18, &VAR_19,
                                      VAR_10->umb->db, VAR_17, VAR_0,
                                      ((void*)0), ((void*)0), VAR_14));
  if (VAR_18)
    {
      svn_wc_conflict_reason_t VAR_22;
      FUNC_0(FUNC_9(VAR_15->wcroot, VAR_11, VAR_0,
                                               ((void*)0), ((void*)0), VAR_14));

      VAR_22 = VAR_7;

      FUNC_0(FUNC_1(&VAR_21, VAR_10, VAR_11,
                                        VAR_12, VAR_13, VAR_22,
                                        (VAR_13 == VAR_4)
                                          ? VAR_5
                                          : VAR_6,
                                        ((void*)0),
                                        VAR_14, VAR_14));
      VAR_10->skip = VAR_3;
    }
  else
    {

      FUNC_0(FUNC_7(&VAR_16, VAR_15->wcroot->sdb,
                                 VAR_1));
      FUNC_0(FUNC_6(VAR_16, "isdd",
                                VAR_15->wcroot->wc_id, VAR_11,
                                0, FUNC_4(VAR_11)));
      FUNC_0(FUNC_8(VAR_16));
    }


  if (VAR_21 || (VAR_13 == VAR_4))
    FUNC_0(FUNC_12(VAR_15->wcroot, VAR_11, VAR_15->db,
                                 VAR_9,
                                 VAR_13,
                                 VAR_8,
                                 VAR_8,
                                 VAR_21, VAR_20, VAR_14));
  else if (VAR_20)
    FUNC_0(FUNC_10(VAR_15->wcroot, VAR_20,
                                       VAR_14));

  return VAR_2;
}
