
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_19__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_20__ {int * prop_hash; int path_or_url; } ;
typedef TYPE_3__ svn_prop_inherited_item_t ;
struct TYPE_21__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;
struct TYPE_18__ {TYPE_4__* (* get_dir ) (TYPE_2__*,int *,int *,int **,char*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int * FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,char const*) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 TYPE_4__* FUNC_13 (TYPE_2__*,int *,int *,int **,char*,int ,int ,int *) ;
 int FUNC_14 (TYPE_4__*) ;
 TYPE_4__* FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (TYPE_2__*,char const**,int *) ;
 int FUNC_21 (TYPE_2__*,char const**,int *) ;
 int FUNC_22 (TYPE_2__*,char const*,int *) ;
 int FUNC_23 (int *,TYPE_3__**,int ) ;
 int * FUNC_24 (int *,int *) ;
 char* FUNC_25 (char const*,int *) ;
 int FUNC_26 (char const*,char const*,int *) ;

svn_error_t *
FUNC_27(svn_ra_session_t *VAR_5,
                                 const char *VAR_6,
                                 svn_revnum_t VAR_7,
                                 apr_array_header_t **VAR_8,
                                 apr_pool_t *VAR_9,
                                 apr_pool_t *VAR_10)
{
  const char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  apr_pool_t *VAR_14 = FUNC_17(VAR_10);

  *VAR_8 =
    FUNC_1(VAR_9, 1, sizeof(svn_prop_inherited_item_t *));



  FUNC_0(FUNC_20(VAR_5, &VAR_11, VAR_10));
  FUNC_0(FUNC_21(VAR_5, &VAR_12, VAR_10));
  VAR_13 = VAR_12;

  while (FUNC_12(VAR_11, VAR_13))
    {
      apr_hash_index_t *VAR_15;
      apr_hash_t *VAR_16;
      apr_hash_t *VAR_17 = FUNC_4(VAR_9);
      svn_error_t *VAR_18;

      FUNC_16(VAR_14);
      VAR_13 = FUNC_25(VAR_13, VAR_10);
      FUNC_0(FUNC_22(VAR_5, VAR_13, VAR_14));
      VAR_18 = VAR_5->vtable->get_dir(VAR_5, ((void*)0), ((void*)0),
                                     &VAR_16, "",
                                     VAR_7, VAR_0,
                                     VAR_14);



      if (VAR_18)
        {
          if ((VAR_18->apr_err == VAR_2)
              || (VAR_18->apr_err == VAR_1))
            {
              FUNC_14(VAR_18);
              continue;
            }
          else
            {
              return FUNC_15(VAR_18);
            }
        }

      for (VAR_15 = FUNC_3(VAR_10, VAR_16);
           VAR_15;
           VAR_15 = FUNC_5(VAR_15))
        {
          const char *VAR_19 = FUNC_7(VAR_15);
          apr_ssize_t VAR_20 = FUNC_8(VAR_15);
          svn_string_t *VAR_21 = FUNC_9(VAR_15);

          if (FUNC_19(VAR_19) == VAR_4)
            {
              VAR_19 = FUNC_11(VAR_9, VAR_19);
              VAR_21 = FUNC_24(VAR_21, VAR_9);
              FUNC_6(VAR_17, VAR_19, VAR_20, VAR_21);
            }
        }

      if (FUNC_2(VAR_17))
        {
          svn_prop_inherited_item_t *VAR_22 =
            FUNC_10(VAR_9, sizeof(*VAR_22));
          VAR_22->path_or_url = FUNC_26(VAR_11,
                                                         VAR_13,
                                                         VAR_9);
          VAR_22->prop_hash = VAR_17;
          FUNC_23(*VAR_8, &VAR_22, 0);
        }
    }


  FUNC_0(FUNC_22(VAR_5, VAR_12, VAR_10));

  FUNC_18(VAR_14);
  return VAR_3;
}
