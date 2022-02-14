
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_13__ {int uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct recover_baton {int cancel_baton; int (* cancel_func ) (int ) ;TYPE_1__* fs; } ;
struct TYPE_14__ {scalar_t__ format; scalar_t__ rep_sharing_allowed; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *,int ,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,int *) ;
 int FUNC_4 (int *,scalar_t__,int *,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int ,scalar_t__,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_9 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_10 (int **,TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_11 (scalar_t__*,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_13 (TYPE_1__*,int ,int *,int *) ;
 int * FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_15 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_16 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(void *VAR_5, apr_pool_t *VAR_6)
{
  struct recover_baton *VAR_7 = VAR_5;
  svn_fs_t *VAR_8 = VAR_7->fs;
  fs_fs_data_t *VAR_9 = VAR_8->fsap_data;
  svn_revnum_t VAR_10;
  apr_uint64_t VAR_11 = 0;
  apr_uint64_t VAR_12 = 0;
  svn_revnum_t VAR_13;
  svn_node_kind_t VAR_14;




  FUNC_0(FUNC_13(VAR_8, VAR_8->uuid, ((void*)0), VAR_6));


  FUNC_0(FUNC_3(VAR_8, &VAR_10, VAR_6));


  FUNC_0(FUNC_15(&VAR_13, VAR_8, VAR_6));
  if (VAR_13 > VAR_10)
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_1("Expected current rev to be <= %ld "
                               "but found %ld"), VAR_10, VAR_13);



  if (VAR_9->format < VAR_1)
    {




      svn_revnum_t VAR_15;
      apr_pool_t *VAR_16 = FUNC_18(VAR_6);

      for (VAR_15 = 0; VAR_15 <= VAR_10; VAR_15++)
        {
          svn_fs_fs__revision_file_t *VAR_17;
          apr_off_t VAR_18;

          FUNC_17(VAR_16);

          if (VAR_7->cancel_func)
            FUNC_0(VAR_7->cancel_func(VAR_7->cancel_baton));

          FUNC_0(FUNC_10(&VAR_17, VAR_8, VAR_15, VAR_6,
                                                   VAR_16));
          FUNC_0(FUNC_4(&VAR_18, VAR_15, VAR_17, VAR_6));
          FUNC_0(FUNC_2(VAR_8, VAR_15, VAR_17, VAR_18,
                                       &VAR_11, &VAR_12, VAR_6));
          FUNC_0(FUNC_7(VAR_17));
        }
      FUNC_19(VAR_16);



      VAR_11++;
      VAR_12++;
    }



  FUNC_0(FUNC_16(FUNC_12(VAR_8, VAR_10, VAR_6),
                            &VAR_14, VAR_6));
  if (VAR_14 == VAR_4)
    {
      svn_boolean_t VAR_19 = VAR_2;
      if (!FUNC_11(&VAR_19, VAR_8, VAR_10, VAR_6))
        {
          if (VAR_19)
            {
              return FUNC_6(VAR_0, ((void*)0),
                                      FUNC_1("Revision %ld has a revs file but no "
                                        "revprops file"),
                                      VAR_10);
            }
          else
            {
              return FUNC_6(VAR_0, ((void*)0),
                                      FUNC_1("Revision %ld has a revs file but the "
                                        "revprops file is inaccessible"),
                                      VAR_10);
            }
          }
    }
  else if (VAR_14 != VAR_3)
    {
      return FUNC_6(VAR_0, ((void*)0),
                               FUNC_1("Revision %ld has a non-file where its "
                                 "revprops file should be"),
                               VAR_10);
    }




  if (VAR_9->rep_sharing_allowed)
    {
      svn_boolean_t VAR_20;

      FUNC_0(FUNC_9(&VAR_20, VAR_8, VAR_6));
      if (VAR_20)
        FUNC_0(FUNC_8(VAR_8, VAR_10, VAR_6));
    }



  return FUNC_14(VAR_8, VAR_10, VAR_11, VAR_12,
                                  VAR_6);
}
