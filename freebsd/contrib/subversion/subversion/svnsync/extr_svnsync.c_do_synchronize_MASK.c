
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int source_prop_encoding; int quiet; int skip_unchanged; int config; int source_callbacks; int from_url; } ;
typedef TYPE_2__ subcommand_baton_t ;
struct TYPE_15__ {int normalized_rev_props_count; int normalized_node_props_count; int has_atomic_revprops_capability; int to_session; int has_commit_revprops_capability; } ;
typedef TYPE_3__ replay_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__,int ,int ,int ,int ,int*,int *) ;
 int FUNC_6 (int,int ,int *) ;
 int FUNC_7 (TYPE_3__**,int *,int *,TYPE_2__*,int *) ;
 int FUNC_8 (int **,TYPE_1__**,int ,int *,int *,int ,TYPE_2__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_9 (int ,int *,int ,scalar_t__,scalar_t__,...) ;
 int FUNC_10 (int *,int ,int ,int *,TYPE_1__*,int *) ;
 int FUNC_11 (int *,scalar_t__*,int *) ;
 int FUNC_12 (int ,int *,int ,int *) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,int ,int ,int ,int ,TYPE_3__*,int *) ;
 int FUNC_14 (int *,int ,int ,TYPE_1__**,int *) ;
 TYPE_1__* FUNC_15 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_ra_session_t *VAR_9,
               subcommand_baton_t *VAR_10, apr_pool_t *VAR_11)
{
  svn_string_t *VAR_12;
  svn_revnum_t VAR_13;
  svn_ra_session_t *VAR_14;
  svn_string_t *VAR_15;
  svn_revnum_t VAR_16, VAR_17, VAR_18;
  svn_revnum_t VAR_19, VAR_20;
  replay_baton_t *VAR_21;
  int VAR_22 = 0;

  FUNC_0(FUNC_8(&VAR_14, &VAR_12,
                              VAR_10->from_url, VAR_9,
                              &(VAR_10->source_callbacks), VAR_10->config,
                              VAR_10, VAR_11));
  FUNC_0(FUNC_14(VAR_9, 0, VAR_1,
                          &VAR_15, VAR_11));

  FUNC_0(FUNC_11(VAR_9, &VAR_16, VAR_11));

  VAR_18 = FUNC_1(VAR_12->data);

  if (VAR_15)
    {
      VAR_17 = FUNC_1(VAR_15->data);

      if ((VAR_17 < VAR_18)
          || (VAR_17 > (VAR_18 + 1))
          || ((VAR_16 != VAR_18) && (VAR_16 != VAR_17)))
        {
          return FUNC_9
            (VAR_0, ((void*)0),
             FUNC_2("Revision being currently copied (%ld), last merged revision "
               "(%ld), and destination HEAD (%ld) are inconsistent; have you "
               "committed to the destination without using svnsync?"),
             VAR_17, VAR_18, VAR_16);
        }
      else if (VAR_17 == VAR_16)
        {
          if (VAR_17 > VAR_18)
            {
              FUNC_0(FUNC_5(VAR_14, VAR_9, VAR_16, VAR_6,
                                    VAR_10->skip_unchanged, VAR_10->quiet,
                                    VAR_10->source_prop_encoding,
                                    &VAR_22, VAR_11));
              VAR_18 = VAR_17;
              VAR_12 = FUNC_15
                (FUNC_3(VAR_11, "%ld", VAR_18), VAR_11);
            }







          FUNC_0(FUNC_10(VAR_9, 0,
                                          VAR_2,
                                          ((void*)0), VAR_12, VAR_11));
          FUNC_0(FUNC_10(VAR_9, 0,
                                          VAR_1,
                                          ((void*)0), ((void*)0), VAR_11));
        }


    }
  else
    {
      if (VAR_16 != VAR_18)
        return FUNC_9(VAR_0, ((void*)0),
                                 FUNC_2("Destination HEAD (%ld) is not the last "
                                   "merged revision (%ld); have you "
                                   "committed to the destination without "
                                   "using svnsync?"),
                                 VAR_16, VAR_18);
    }


  FUNC_0(FUNC_11(VAR_14, &VAR_13, VAR_11));

  if (VAR_13 <= VAR_18)
    return VAR_3;



  FUNC_0(FUNC_7(&VAR_21, VAR_14, VAR_9, VAR_10, VAR_11));



  FUNC_0(FUNC_12(VAR_21->to_session,
                                &VAR_21->has_commit_revprops_capability,
                                VAR_5,
                                VAR_11));

  FUNC_0(FUNC_12(VAR_21->to_session,
                                &VAR_21->has_atomic_revprops_capability,
                                VAR_4,
                                VAR_11));

  VAR_19 = VAR_18 + 1;
  VAR_20 = VAR_13;

  FUNC_0(FUNC_4(((void*)0)));

  FUNC_0(FUNC_13(VAR_14, VAR_19, VAR_20,
                              0, VAR_6, VAR_8,
                              VAR_7, VAR_21, VAR_11));

  FUNC_0(FUNC_6(VAR_21->normalized_rev_props_count
                                      + VAR_22,
                                    VAR_21->normalized_node_props_count,
                                    VAR_11));


  return VAR_3;
}
