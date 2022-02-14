
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_16__ {scalar_t__ rep_sharing_allowed; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_17__ {int uuid; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_18__ {TYPE_2__* fs; } ;
typedef TYPE_3__ recover_baton_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int * FUNC_5 (int ,int *,int ,scalar_t__,...) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__*,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int ,int *,scalar_t__,int *) ;
 int * FUNC_13 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_14 (scalar_t__*,TYPE_2__*,int *) ;
 int FUNC_15 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_16(void *VAR_5,
             apr_pool_t *VAR_6)
{
  recover_baton_t *VAR_7 = VAR_5;
  svn_fs_t *VAR_8 = VAR_7->fs;
  svn_fs_x__data_t *VAR_9 = VAR_8->fsap_data;
  svn_revnum_t VAR_10;
  svn_revnum_t VAR_11;
  svn_boolean_t VAR_12 = VAR_2;
  svn_boolean_t VAR_13 = VAR_0;


  FUNC_0(FUNC_11(VAR_8, VAR_6));




  FUNC_0(FUNC_12(VAR_8, VAR_8->uuid, ((void*)0), VAR_2, VAR_6));




  FUNC_0(FUNC_2(VAR_8, VAR_6));
  FUNC_0(FUNC_4(VAR_8, VAR_6));


  FUNC_0(FUNC_3(VAR_8, &VAR_10, VAR_6));


  FUNC_0(FUNC_14(&VAR_11, VAR_8, VAR_6));
  if (VAR_11 > VAR_10)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_1("Expected current rev to be <= %ld "
                               "but found %ld"), VAR_10, VAR_11);



  if (FUNC_8(VAR_8, VAR_10))
    {
      VAR_13
        = FUNC_9(&VAR_12, VAR_8, VAR_10,
                                             VAR_6);
    }
  else
    {
      svn_node_kind_t VAR_14;
      FUNC_0(FUNC_15(FUNC_10(VAR_8, VAR_10,
                                                        VAR_6),
                                &VAR_14, VAR_6));

      if (VAR_14 == VAR_3)
        {
          VAR_12 = VAR_0;
          VAR_13 = VAR_2;
        }
      else if (VAR_14 != VAR_4)
        {
          return FUNC_5(VAR_1, ((void*)0),
                                  FUNC_1("Revision %ld has a non-file where its "
                                    "revprops file should be"),
                                  VAR_10);
        }
    }

  if (!VAR_13)
    {
      if (VAR_12)
        {
          return FUNC_5(VAR_1, ((void*)0),
                                  FUNC_1("Revision %ld has a revs file but no "
                                    "revprops file"),
                                  VAR_10);
        }
      else
        {
          return FUNC_5(VAR_1, ((void*)0),
                                  FUNC_1("Revision %ld has a revs file but the "
                                    "revprops file is inaccessible"),
                                  VAR_10);
        }
    }




  if (VAR_9->rep_sharing_allowed)
    {
      svn_boolean_t VAR_15;

      FUNC_0(FUNC_7(&VAR_15, VAR_8,
                                         VAR_6));
      if (VAR_15)
        FUNC_0(FUNC_6(VAR_8, VAR_10, VAR_6));
    }



  return FUNC_13(VAR_8, VAR_10, VAR_6);
}
