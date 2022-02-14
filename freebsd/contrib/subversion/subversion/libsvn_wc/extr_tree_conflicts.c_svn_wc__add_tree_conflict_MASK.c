
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_15__ {int operation; int local_abspath; int src_right_version; int src_left_version; int action; int reason; } ;
typedef TYPE_2__ svn_wc_conflict_description2_t ;
typedef int svn_skel_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int *,int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int *,int *) ;
 int FUNC_10 (int *,int ,int ,int *,int *) ;
 int FUNC_11 (int *,int ,int ,int *,int *) ;
 TYPE_3__* FUNC_12 (int ,int ,int *,int *,int *) ;
 TYPE_3__* FUNC_13 (int *,int *,scalar_t__*,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;




svn_error_t *
FUNC_14(svn_wc_context_t *VAR_5,
                          const svn_wc_conflict_description2_t *VAR_6,
                          apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  svn_skel_t *VAR_9;
  svn_error_t *VAR_10;

  FUNC_1(VAR_6 != ((void*)0));
  FUNC_1(VAR_6->operation == 130 ||
                 (VAR_6->reason != VAR_3 &&
                  VAR_6->reason != VAR_4));


  VAR_10 = FUNC_13(((void*)0), ((void*)0), &VAR_8,
                                      VAR_5->db, VAR_6->local_abspath,
                                      VAR_7);
  if (VAR_10)
    {
      if (VAR_10->apr_err != VAR_0)
        return FUNC_6(VAR_10);

      FUNC_4(VAR_10);
    }
  else if (VAR_8)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_2("Attempt to add tree conflict that already "
                               "exists at '%s'"),
                             FUNC_3(VAR_6->local_abspath,
                                                    VAR_7));
  else if (!VAR_6)
    return VAR_2;

  VAR_9 = FUNC_8(VAR_7);

  FUNC_0(FUNC_7(VAR_9, VAR_5->db,
                                                  VAR_6->local_abspath,
                                                  VAR_6->reason,
                                                  VAR_6->action,
                                                  ((void*)0),
                                                  VAR_7, VAR_7));

  switch (VAR_6->operation)
    {
      case 128:
      default:
        FUNC_0(FUNC_11(VAR_9,
                                                    VAR_6->src_left_version,
                                                    VAR_6->src_right_version,
                                                    VAR_7, VAR_7));
        break;
      case 129:
        FUNC_0(FUNC_10(VAR_9,
                                                    VAR_6->src_left_version,
                                                    VAR_6->src_right_version,
                                                    VAR_7, VAR_7));
        break;
      case 130:
        FUNC_0(FUNC_9(VAR_9,
                                                   VAR_6->src_left_version,
                                                   VAR_6->src_right_version,
                                                   VAR_7, VAR_7));
        break;
    }

  return FUNC_6(
                FUNC_12(VAR_5->db, VAR_6->local_abspath,
                                            VAR_9, ((void*)0), VAR_7));
}
