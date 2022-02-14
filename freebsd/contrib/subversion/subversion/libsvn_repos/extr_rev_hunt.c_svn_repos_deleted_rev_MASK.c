
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef scalar_t__ svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_5 (int **,char const**,int *,char const*,int *) ;
 int FUNC_6 (scalar_t__*,int *,char const*,int *,char const*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int **,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

svn_error_t *
FUNC_12(svn_fs_t *VAR_5,
                      const char *VAR_6,
                      svn_revnum_t VAR_7,
                      svn_revnum_t VAR_8,
                      svn_revnum_t *VAR_9,
                      apr_pool_t *VAR_10)
{
  apr_pool_t *VAR_11;
  svn_fs_root_t *VAR_12, *VAR_13;
  svn_revnum_t VAR_14;
  svn_node_kind_t VAR_15;
  svn_fs_node_relation_t VAR_16;


  if (! FUNC_1(VAR_7))
    return FUNC_3
      (VAR_0, 0,
       FUNC_2("Invalid start revision %ld"), VAR_7);
  if (! FUNC_1(VAR_8))
    return FUNC_3
      (VAR_0, 0,
       FUNC_2("Invalid end revision %ld"), VAR_8);


  if (VAR_7 > VAR_8)
    {
      svn_revnum_t VAR_17 = VAR_7;
      VAR_7 = VAR_8;
      VAR_8 = VAR_17;
    }


  FUNC_0(FUNC_7(&VAR_12, VAR_5, VAR_7, VAR_10));
  FUNC_0(FUNC_4(&VAR_15, VAR_12, VAR_6, VAR_10));
  if (VAR_15 == VAR_4)
    {

      *VAR_9 = VAR_1;
      return VAR_2;
    }


  FUNC_0(FUNC_7(&VAR_13, VAR_5, VAR_8, VAR_10));
  FUNC_0(FUNC_4(&VAR_15, VAR_13, VAR_6, VAR_10));
  if (VAR_15 != VAR_4)
    {
      FUNC_0(FUNC_6(&VAR_16, VAR_12, VAR_6,
                                   VAR_13, VAR_6, VAR_10));
      if (VAR_16 != VAR_3)
        {
          svn_fs_root_t *VAR_18;
          const char *VAR_19;
          FUNC_0(FUNC_5(&VAR_18, &VAR_19, VAR_13,
                                      VAR_6, VAR_10));
          if (!VAR_18 ||
              (FUNC_8(VAR_18) <= VAR_7))
            {

              *VAR_9 = VAR_1;
              return VAR_2;
            }
        }
    }
  VAR_14 = (VAR_7 + VAR_8) / 2;
  VAR_11 = FUNC_10(VAR_10);

  while (1)
    {
      FUNC_9(VAR_11);


      FUNC_0(FUNC_7(&VAR_13, VAR_5, VAR_14, VAR_11));
      FUNC_0(FUNC_4(&VAR_15, VAR_13, VAR_6, VAR_11));
      if (VAR_15 == VAR_4)
        {

          VAR_8 = VAR_14;
          VAR_14 = (VAR_7 + VAR_14) / 2;
        }
      else
        {
          svn_fs_root_t *VAR_20;
          const char *VAR_21;


          FUNC_0(FUNC_6(&VAR_16, VAR_12, VAR_6,
                                       VAR_13, VAR_6, VAR_11));
          if (VAR_16 != VAR_3)
            FUNC_0(FUNC_5(&VAR_20, &VAR_21, VAR_13,
                                        VAR_6, VAR_11));
          if (VAR_16 == VAR_3 ||
              (VAR_20 &&
               (FUNC_8(VAR_20) > VAR_7)))
            {

              VAR_8 = VAR_14;
              VAR_14 = (VAR_7 + VAR_14) / 2;
            }
          else if (VAR_8 - VAR_14 == 1)
            {

              *VAR_9 = VAR_8;
              break;
            }
          else
            {

              VAR_7 = VAR_14;
              VAR_14 = (VAR_7 + VAR_8) / 2;
            }
        }
    }

  FUNC_11(VAR_11);
  return VAR_2;
}
