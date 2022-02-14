
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
typedef int svn_checksum_t ;
struct TYPE_9__ {scalar_t__ skip; TYPE_1__* umb; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int abspath; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*,char const*,TYPE_3__*,int *) ;
 int FUNC_2 (int **,TYPE_2__*,char const*,scalar_t__,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,scalar_t__,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int **,int ,char const*,char const*,int ,scalar_t__,int *,int *) ;
 int FUNC_8 (int **,int ,int ,char const*,int *,int *) ;
 int * FUNC_9 (int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_3__*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(node_move_baton_t *VAR_11,
                            const char *VAR_12,
                            svn_node_kind_t VAR_13,
                            const svn_checksum_t *VAR_14,
                            apr_hash_t *VAR_15,
                            const char *VAR_16,
                            const char *VAR_17,
                            apr_pool_t *VAR_18)
{
  update_move_baton_t *VAR_19 = VAR_11->umb;
  svn_wc_conflict_reason_t VAR_20 = VAR_7;
  svn_node_kind_t VAR_21;
  const char *VAR_22;
  svn_skel_t *VAR_23 = ((void*)0);
  svn_skel_t *VAR_24 = ((void*)0);
  svn_skel_t *VAR_25 = ((void*)0);

  FUNC_0(FUNC_3(VAR_11, VAR_18));
  if (VAR_11->skip)
    {
      FUNC_0(FUNC_6(VAR_17, VAR_2, VAR_18));
      return VAR_1;
    }

  VAR_22 = FUNC_4(VAR_19->wcroot->abspath, VAR_12, VAR_18);


  FUNC_0(FUNC_5(VAR_22, &VAR_21, VAR_18));

  if (VAR_21 != VAR_4 && VAR_21 != VAR_13)
    {
      FUNC_0(FUNC_2(&VAR_25, VAR_11, VAR_12,
                                        VAR_13, VAR_3,
                                        VAR_20,
                                        (VAR_13 == VAR_4)
                                          ? VAR_5
                                          : VAR_6,
                                        ((void*)0),
                                        VAR_18, VAR_18));
      VAR_11->skip = VAR_2;
      FUNC_0(FUNC_6(VAR_17, VAR_2, VAR_18));
    }
  else
    {
      const char *VAR_26;

      FUNC_0(FUNC_1(VAR_16, VAR_12, VAR_19->wcroot,
                                VAR_18));


      VAR_26 = FUNC_4(VAR_19->wcroot->abspath, VAR_16,
                                    VAR_18);
      FUNC_0(FUNC_7(&VAR_24, VAR_19->db, VAR_22,
                                            VAR_26,
                                            VAR_0 ,
                                            VAR_2 ,
                                            VAR_18, VAR_18));
      VAR_23 = FUNC_9(VAR_23, VAR_24, VAR_18);


      FUNC_0(FUNC_8(&VAR_24, VAR_19->db,
                                           VAR_19->wcroot->abspath, VAR_26,
                                           VAR_18, VAR_18));

      VAR_23 = FUNC_9(VAR_23, VAR_24, VAR_18);
    }

  FUNC_0(FUNC_10(VAR_19->wcroot, VAR_12, VAR_19->db,
                               (VAR_13 == VAR_4)
                                  ? VAR_9
                                  : VAR_10,
                               VAR_3,
                               VAR_8,
                               VAR_8,
                               VAR_25, VAR_23, VAR_18));
  return VAR_1;
}
