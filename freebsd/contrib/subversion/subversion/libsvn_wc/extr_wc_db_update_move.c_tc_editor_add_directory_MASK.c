
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
struct TYPE_9__ {scalar_t__ skip; scalar_t__ shadowed; TYPE_1__* umb; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int **,TYPE_2__*,char const*,scalar_t__,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 char* FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_3__*,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int **,int ,char const*,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_3__*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(node_move_baton_t *VAR_15,
                        const char *VAR_16,
                        svn_node_kind_t VAR_17,
                        apr_hash_t *VAR_18,
                        apr_pool_t *VAR_19)
{
  update_move_baton_t *VAR_20 = VAR_15->umb;
  const char *VAR_21;
  svn_node_kind_t VAR_22;
  svn_skel_t *VAR_23 = ((void*)0);
  svn_skel_t *VAR_24 = ((void*)0);
  svn_wc_conflict_reason_t VAR_25 = VAR_11;

  FUNC_0(FUNC_2(VAR_15, VAR_19));
  if (VAR_15->skip)
    return VAR_0;

  if (VAR_15->shadowed)
    {
      svn_wc__db_status_t VAR_26;

      FUNC_0(FUNC_5(&VAR_26, &VAR_22, ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0),
                                            VAR_20->wcroot, VAR_16,
                                            VAR_19, VAR_19));

      if (VAR_26 == VAR_5)
        VAR_25 = VAR_9;
      else if (VAR_26 != VAR_4)
        VAR_22 = VAR_3;
      else if (VAR_17 == VAR_3)
        VAR_25 = VAR_8;
      else
        VAR_25 = VAR_10;
    }
  else
    VAR_22 = VAR_3;

  VAR_21 = FUNC_3(VAR_20->wcroot->abspath, VAR_16, VAR_19);

  if (VAR_22 == VAR_3)
    {

      FUNC_0(FUNC_4(VAR_21, &VAR_22, VAR_19));
    }

  if (!VAR_15->shadowed && VAR_22 == VAR_17)
    VAR_22 = VAR_3;

  if (VAR_22 != VAR_3
      && (VAR_15->shadowed || VAR_22 != VAR_17))
    {
      FUNC_0(FUNC_1(&VAR_24, VAR_15, VAR_16,
                                        VAR_17, VAR_2,
                                        VAR_25,
                                        (VAR_17 == VAR_3)
                                          ? VAR_6
                                          : VAR_7,
                                        ((void*)0),
                                        VAR_19, VAR_19));
      VAR_15->skip = VAR_1;
    }
  else
    {
      FUNC_0(FUNC_6(&VAR_23, VAR_20->db, VAR_21,
                                           VAR_19, VAR_19));
    }

  FUNC_0(FUNC_7(VAR_20->wcroot, VAR_16, VAR_20->db,
                               (VAR_17 == VAR_3)
                                  ? VAR_13
                                  : VAR_14,
                               VAR_2,
                               VAR_12,
                               VAR_12,
                               VAR_24, VAR_23, VAR_19));
  return VAR_0;
}
