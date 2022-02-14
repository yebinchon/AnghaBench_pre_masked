
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_23__ {int second; int revision; int member_0; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_24__ {int revprop_cache; int revprop_generation; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_25__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
struct TYPE_26__ {int apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_27__ {int * properties; } ;
typedef TYPE_5__ packed_revprops_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_4__* FUNC_5 (int **,TYPE_3__*,int ,int *,int *) ;
 int FUNC_6 (TYPE_5__**,TYPE_3__*,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (void**,scalar_t__*,int ,TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_4__* FUNC_10 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ,TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*,int ) ;

svn_error_t *
FUNC_14(apr_hash_t **VAR_3,
                                svn_fs_t *VAR_4,
                                svn_revnum_t VAR_5,
                                svn_boolean_t VAR_6,
                                svn_boolean_t VAR_7,
                                apr_pool_t *VAR_8,
                                apr_pool_t *VAR_9)
{
  svn_fs_x__data_t *VAR_10 = VAR_4->fsap_data;


  *VAR_3 = ((void*)0);


  FUNC_1(FUNC_12(VAR_5, VAR_4, VAR_9));


  if (VAR_7 || !FUNC_4(VAR_4))
    FUNC_1(FUNC_7(VAR_4, VAR_9));


  if (!VAR_6 && FUNC_3(VAR_4, VAR_9))
    {
      svn_boolean_t VAR_11;
      svn_fs_x__pair_cache_key_t VAR_12 = { 0 };

      VAR_12.revision = VAR_5;
      VAR_12.second = VAR_10->revprop_generation;
      FUNC_1(FUNC_8((void **) VAR_3, &VAR_11,
                             VAR_10->revprop_cache, &VAR_12, VAR_8));
      if (VAR_11)
        return VAR_2;
    }




  if (!FUNC_13(VAR_4, VAR_5))
    {
      svn_error_t *VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_5,
                                                 VAR_8, VAR_9);
      if (VAR_13)
        {
          if (!FUNC_0(VAR_13->apr_err))
            return FUNC_11(VAR_13);

          FUNC_9(VAR_13);
          *VAR_3 = ((void*)0);
        }
    }




  if (!*VAR_3)
    {
      packed_revprops_t *VAR_14;
      FUNC_1(FUNC_6(&VAR_14, VAR_4, VAR_5, VAR_0,
                                VAR_8, VAR_9));
      *VAR_3 = VAR_14->properties;
    }


  if (!*VAR_3)
    return FUNC_10(VAR_1, ((void*)0),
                             FUNC_2("Could not read revprops for revision %ld"),
                             VAR_5);

  return VAR_2;
}
