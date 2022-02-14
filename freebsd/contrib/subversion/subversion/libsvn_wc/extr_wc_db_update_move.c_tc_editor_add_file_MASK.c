
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int db; TYPE_3__* wcroot; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_9__ {scalar_t__ skip; scalar_t__ shadowed; TYPE_1__* umb; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int abspath; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int **,TYPE_2__*,char const*,scalar_t__,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 char* FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_3__*,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int **,int ,char*,int *,int ,scalar_t__,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_3__*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(node_move_baton_t *VAR_16,
                   const char *VAR_17,
                   svn_node_kind_t VAR_18,
                   const svn_checksum_t *VAR_19,
                   apr_hash_t *VAR_20,
                   apr_pool_t *VAR_21)
{
  update_move_baton_t *VAR_22 = VAR_16->umb;
  svn_wc_conflict_reason_t VAR_23 = VAR_12;
  svn_node_kind_t VAR_24;
  const char *VAR_25;
  svn_skel_t *VAR_26 = ((void*)0);
  svn_skel_t *VAR_27 = ((void*)0);

  FUNC_0(FUNC_2(VAR_16, VAR_21));
  if (VAR_16->skip)
    return VAR_1;

  if (VAR_16->shadowed)
    {
      svn_wc__db_status_t VAR_28;

      FUNC_0(FUNC_5(&VAR_28, &VAR_24, ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0),
                                            VAR_22->wcroot, VAR_17,
                                            VAR_21, VAR_21));

      if (VAR_28 == VAR_6)
        VAR_23 = VAR_10;
      else if (VAR_28 != VAR_5)
        VAR_24 = VAR_4;
      else if (VAR_18 == VAR_4)
        VAR_23 = VAR_9;
      else
        VAR_23 = VAR_11;
    }
  else
    VAR_24 = VAR_4;

  VAR_25 = FUNC_3(VAR_22->wcroot->abspath, VAR_17, VAR_21);

  if (VAR_24 == VAR_4)
    {

      FUNC_0(FUNC_4(VAR_25, &VAR_24, VAR_21));
    }

  if (VAR_24 != VAR_4
      && (VAR_16->shadowed || VAR_24 != VAR_18))
    {
      FUNC_0(FUNC_1(&VAR_27, VAR_16, VAR_17,
                                        VAR_18, VAR_3,
                                        VAR_23,
                                        (VAR_18 == VAR_4)
                                          ? VAR_7
                                          : VAR_8,
                                        ((void*)0),
                                        VAR_21, VAR_21));
      VAR_16->skip = VAR_2;
    }
  else
    {

      FUNC_0(FUNC_6(&VAR_26, VAR_22->db,
                                            FUNC_3(VAR_22->wcroot->abspath,
                                                            VAR_17,
                                                            VAR_21),
                                            ((void*)0),
                                            VAR_0 ,
                                            VAR_2 ,
                                            VAR_21, VAR_21));
    }

  FUNC_0(FUNC_7(VAR_22->wcroot, VAR_17, VAR_22->db,
                               (VAR_18 == VAR_4)
                                  ? VAR_14
                                  : VAR_15,
                               VAR_3,
                               VAR_13,
                               VAR_13,
                               VAR_27, VAR_26, VAR_21));
  return VAR_1;
}
