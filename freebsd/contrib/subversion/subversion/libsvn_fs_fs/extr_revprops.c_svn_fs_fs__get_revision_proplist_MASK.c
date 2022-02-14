
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_22__ {TYPE_5__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_23__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_24__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_25__ {int * properties; } ;
typedef TYPE_4__ packed_revprops_t ;
struct TYPE_26__ {scalar_t__ format; int revprop_cache; int revprop_prefix; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_6 (int **,TYPE_1__*,int ,int,int *) ;
 int FUNC_7 (TYPE_4__**,TYPE_1__*,int ,int ,int,int *) ;
 int FUNC_8 (void**,int*,int ,TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;

svn_error_t *
FUNC_15(apr_hash_t **VAR_4,
                                 svn_fs_t *VAR_5,
                                 svn_revnum_t VAR_6,
                                 svn_boolean_t VAR_7,
                                 apr_pool_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_5->fsap_data;




  svn_boolean_t VAR_11 = !VAR_7;


  *VAR_4 = ((void*)0);


  FUNC_1(FUNC_12(VAR_6, VAR_5, VAR_9));

  if (VAR_7)
    {

      FUNC_14(VAR_5);
    }
  else
    {

      svn_boolean_t VAR_12;
      pair_cache_key_t VAR_13;


      FUNC_1(FUNC_5(VAR_5, VAR_9));
      VAR_13.revision = VAR_6;
      VAR_13.second = VAR_10->revprop_prefix;


      FUNC_2(FUNC_8((void **) VAR_4, &VAR_12,
                               VAR_10->revprop_cache, &VAR_13, VAR_8),
                FUNC_4(VAR_9,
                             "Failed to parse revprops for r%ld.",
                             VAR_6));
      if (VAR_12)
        return VAR_3;
    }




  if (!FUNC_13(VAR_5, VAR_6))
    {
      svn_error_t *VAR_14 = FUNC_6(VAR_4, VAR_5, VAR_6,
                                                 VAR_11, VAR_8);
      if (VAR_14)
        {
          if (!FUNC_0(VAR_14->apr_err)
              || VAR_10->format < VAR_2)
            return FUNC_11(VAR_14);

          FUNC_9(VAR_14);
          *VAR_4 = ((void*)0);
        }
    }




  if (VAR_10->format >= VAR_2 && !*VAR_4)
    {
      packed_revprops_t *VAR_15;
      FUNC_1(FUNC_7(&VAR_15, VAR_5, VAR_6, VAR_0, VAR_11,
                                VAR_8));
      *VAR_4 = VAR_15->properties;
    }


  if (!*VAR_4)
    return FUNC_10(VAR_1, ((void*)0),
                             FUNC_3("Could not read revprops for revision %ld"),
                             VAR_6);

  return VAR_3;
}
