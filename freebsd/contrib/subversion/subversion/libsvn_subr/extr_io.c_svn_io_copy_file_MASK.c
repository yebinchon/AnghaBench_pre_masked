
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (scalar_t__,int ,int ,int ) ;
 int FUNC_9 (char const*,char const*,int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_5 ;
 int FUNC_11 (int **,char const*,int ,int ,int *) ;
 int FUNC_12 (char const*,char const*,int ,int *) ;
 int FUNC_13 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_14 (char const*,int ,int *) ;

svn_error_t *
FUNC_15(const char *VAR_6,
                 const char *VAR_7,
                 svn_boolean_t VAR_8,
                 apr_pool_t *VAR_9)
{
  apr_file_t *VAR_10, *VAR_11;
  apr_status_t VAR_12;
  const char *VAR_13;
  svn_error_t *VAR_14;
  FUNC_0(FUNC_11(&VAR_10, VAR_6, VAR_1,
                           VAR_0, VAR_9));




  FUNC_0(FUNC_13(&VAR_11, &VAR_13,
                                   FUNC_4(VAR_7, VAR_9),
                                   VAR_5, VAR_9, VAR_9));

  VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_9);

  if (VAR_12)
    {
      VAR_14 = FUNC_8(VAR_12, FUNC_1("Can't copy '%s' to '%s'"),
                               FUNC_5(VAR_6, VAR_9),
                               FUNC_5(VAR_13, VAR_9));
    }
   else
     VAR_14 = ((void*)0);

  VAR_14 = FUNC_6(VAR_14,
                                 FUNC_10(VAR_10, VAR_9));

  VAR_14 = FUNC_6(VAR_14,
                                 FUNC_10(VAR_11, VAR_9));

  if (VAR_14)
    {
      return FUNC_6(
                                 VAR_14,
                                 FUNC_14(VAR_13, VAR_4, VAR_9));
    }





  if (VAR_8)
    FUNC_0(FUNC_9(VAR_6, VAR_13, VAR_9));

  return FUNC_7(FUNC_12(VAR_13, VAR_7, VAR_2, VAR_9));
}
