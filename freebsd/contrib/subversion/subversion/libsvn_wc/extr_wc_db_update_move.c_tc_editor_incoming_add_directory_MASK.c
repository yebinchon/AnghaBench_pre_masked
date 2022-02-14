
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
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ skip; TYPE_1__* umb; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,char const*,TYPE_3__*,int *) ;
 int FUNC_2 (int **,TYPE_2__*,char const*,scalar_t__,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int **,int ,char const*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_3__*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(node_move_baton_t *VAR_10,
                                 const char *VAR_11,
                                 svn_node_kind_t VAR_12,
                                 apr_hash_t *VAR_13,
                                 const char *VAR_14,
                                 apr_pool_t *VAR_15)
{
  update_move_baton_t *VAR_16 = VAR_10->umb;
  const char *VAR_17;
  svn_node_kind_t VAR_18;
  svn_skel_t *VAR_19 = ((void*)0);
  svn_skel_t *VAR_20 = ((void*)0);
  svn_wc_conflict_reason_t VAR_21 = VAR_6;

  FUNC_0(FUNC_3(VAR_10, VAR_15));
  if (VAR_10->skip)
    return VAR_0;

  VAR_17 = FUNC_4(VAR_16->wcroot->abspath, VAR_11, VAR_15);


  FUNC_0(FUNC_5(VAR_17, &VAR_18, VAR_15));

  if (VAR_18 == VAR_12)
    VAR_18 = VAR_3;

  if (VAR_18 != VAR_3 && VAR_18 != VAR_12)
    {
      FUNC_0(FUNC_2(&VAR_20, VAR_10, VAR_11,
                                        VAR_12, VAR_2,
                                        VAR_21,
                                        (VAR_12 == VAR_3)
                                          ? VAR_4
                                          : VAR_5,
                                        ((void*)0),
                                        VAR_15, VAR_15));
      VAR_10->skip = VAR_1;
    }
  else
    {
      FUNC_0(FUNC_1(VAR_14, VAR_11, VAR_16->wcroot,
                                VAR_15));
      FUNC_0(FUNC_6(&VAR_19, VAR_16->db, VAR_17,
                                           VAR_15, VAR_15));
    }

  FUNC_0(FUNC_7(VAR_16->wcroot, VAR_11, VAR_16->db,
                               (VAR_12 == VAR_3)
                                  ? VAR_8
                                  : VAR_9,
                               VAR_2,
                               VAR_7,
                               VAR_7,
                               VAR_20, VAR_19, VAR_15));
  return VAR_0;
}
