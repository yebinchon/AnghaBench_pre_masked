
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int (* svn_repos_authz_func_t ) (scalar_t__*,int *,char const*,void*,int *) ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef scalar_t__ svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_6__ {int elt_size; int nelts; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__ const*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*,int,int ) ;
 char* FUNC_5 (int *,char*,char const*,int ) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (scalar_t__*,int *,char const*,scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (int *,char const*,int (*) (scalar_t__*,int *,char const*,void*,int *),void*,int *) ;
 int FUNC_9 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_10 (scalar_t__*,int *,char const*,int *,char const*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int **,int *,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,char const**,scalar_t__*,int *,scalar_t__,char const*,int *) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int VAR_5 ;

svn_error_t *
FUNC_17(svn_fs_t *VAR_6,
                               apr_hash_t **VAR_7,
                               const char *VAR_8,
                               svn_revnum_t VAR_9,
                               const apr_array_header_t *VAR_10,
                               svn_repos_authz_func_t VAR_11,
                               void *VAR_12,
                               apr_pool_t *VAR_13)
{
  apr_array_header_t *VAR_14;
  svn_revnum_t *VAR_15, *VAR_16;
  svn_fs_root_t *VAR_17;
  const char *VAR_18;
  svn_revnum_t VAR_19;
  svn_boolean_t VAR_20;
  apr_pool_t *VAR_21, *VAR_22;

  FUNC_1(VAR_10->elt_size == sizeof(svn_revnum_t));



  if (*VAR_8 != '/')
    VAR_8 = FUNC_5(VAR_13, "/", VAR_8, VAR_2);


  if (VAR_11)
    {
      svn_fs_root_t *VAR_23;
      FUNC_0(FUNC_11(&VAR_23, VAR_6, VAR_9, VAR_13));
      FUNC_0(FUNC_8(VAR_23, VAR_8,
                                VAR_11, VAR_12, VAR_13));
    }

  *VAR_7 = FUNC_3(VAR_13);


  VAR_21 = FUNC_13(VAR_13);
  VAR_22 = FUNC_13(VAR_13);



  VAR_14 = FUNC_2(VAR_13, VAR_10);
  FUNC_16(VAR_14, VAR_5);

  VAR_15 = (svn_revnum_t *)VAR_14->elts;
  VAR_16 = VAR_15 + VAR_14->nelts;



  VAR_20 = VAR_0;
  while (VAR_15 < VAR_16 && *VAR_15 > VAR_9)
    {
      FUNC_12(VAR_22);
      FUNC_0(FUNC_7(&VAR_20, VAR_6, VAR_8,
                                         VAR_9, *VAR_15,
                                         VAR_22));
      if (VAR_20)
        break;
      ++VAR_15;
    }

  VAR_19 = VAR_20 ? *VAR_15 : VAR_9;
  VAR_18 = VAR_8;
  if (VAR_11)
    {
      FUNC_0(FUNC_11(&VAR_17, VAR_6, VAR_19, VAR_13));
      FUNC_0(FUNC_8(VAR_17, VAR_8, VAR_11,
                                VAR_12, VAR_13));
    }

  while (VAR_15 < VAR_16)
    {
      apr_pool_t *VAR_24;
      svn_revnum_t VAR_25, VAR_26;
      const char *VAR_27;



      FUNC_0(FUNC_15(&VAR_25, &VAR_27, &VAR_26,
                                       VAR_6, VAR_19, VAR_18, VAR_22));
      if (! VAR_27)
        break;



      while ((VAR_15 < VAR_16)
             && (*VAR_15 >= VAR_25))
        {


          FUNC_4(*VAR_7, VAR_15, sizeof(*VAR_15),
                       FUNC_6(VAR_13, VAR_18));
          VAR_15++;
        }



      while ((VAR_15 < VAR_16)
             && (*VAR_15 > VAR_26))
        VAR_15++;


      VAR_18 = VAR_27;
      VAR_19 = VAR_26;

      if (VAR_11)
        {
          svn_boolean_t VAR_28;
          FUNC_0(FUNC_11(&VAR_17, VAR_6, VAR_19, VAR_22));
          FUNC_0(VAR_11(&VAR_28, VAR_17, VAR_18,
                                  VAR_12, VAR_22));
          if (!VAR_28)
            {
              FUNC_14(VAR_21);
              FUNC_14(VAR_22);
              return VAR_1;
            }
        }


      FUNC_12(VAR_21);
      VAR_24 = VAR_21;
      VAR_21 = VAR_22;
      VAR_22 = VAR_24;
    }






  FUNC_0(FUNC_11(&VAR_17, VAR_6, VAR_19, VAR_21));
  while (VAR_15 < VAR_16)
    {
      svn_node_kind_t VAR_29;
      svn_fs_node_relation_t VAR_30;
      svn_fs_root_t *VAR_31;

      FUNC_12(VAR_22);
      FUNC_0(FUNC_11(&VAR_31, VAR_6, *VAR_15,
                                   VAR_22));
      FUNC_0(FUNC_9(&VAR_29, VAR_31, VAR_18, VAR_22));
      if (VAR_29 == VAR_4)
        break;
      FUNC_0(FUNC_10(&VAR_30, VAR_17, VAR_18,
                                   VAR_31, VAR_18, VAR_22));
      if (VAR_30 == VAR_3)
        break;


      FUNC_4(*VAR_7, VAR_15, sizeof(*VAR_15),
                   FUNC_6(VAR_13, VAR_18));
      VAR_15++;
    }




  FUNC_14(VAR_21);
  FUNC_14(VAR_22);

  return VAR_1;
}
