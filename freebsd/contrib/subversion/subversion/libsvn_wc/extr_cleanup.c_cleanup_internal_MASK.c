
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int *,char const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,char const*,int,scalar_t__,int *) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int *,char const*,int ,int ,int ,int ,int *,int ,int *,int ,void*,int *) ;
 int FUNC_10 (int *,char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc__db_t *VAR_5,
                 const char *VAR_6,
                 svn_boolean_t VAR_7,
                 svn_boolean_t VAR_8,
                 svn_boolean_t VAR_9,
                 svn_cancel_func_t VAR_10,
                 void *VAR_11,
                 apr_pool_t *VAR_12)
{
  int VAR_13;
  svn_boolean_t VAR_14;
  const char *VAR_15;


  FUNC_0(FUNC_1(&VAR_13, VAR_5, VAR_6, VAR_12));



  FUNC_0(FUNC_6(&VAR_15, VAR_5, VAR_6,
                                      VAR_12, VAR_12));
  if (VAR_15)
    VAR_6 = VAR_15;
  FUNC_0(FUNC_7(VAR_5, VAR_6, -1, VAR_7, VAR_12));



  if (VAR_13 >= VAR_2)
    FUNC_0(FUNC_10(VAR_5, VAR_6, VAR_10, VAR_11,
                           VAR_12));

  FUNC_0(FUNC_3(&VAR_14, VAR_5, VAR_6, VAR_12));
  if (VAR_14 && VAR_9)
    {



      FUNC_0(FUNC_2(VAR_5, VAR_6, VAR_12));


      FUNC_0(FUNC_4(VAR_5, VAR_6, VAR_12));
    }

  if (VAR_8)
    {



      FUNC_0(FUNC_9(VAR_5, VAR_6, VAR_4,
                                           VAR_0 ,
                                           VAR_0 ,
                                           VAR_0 ,
                                           ((void*)0) ,
                                           VAR_3, ((void*)0),
                                           VAR_10, VAR_11,
                                           VAR_12));
    }


  FUNC_0(FUNC_8(VAR_5, VAR_6, VAR_12));

  return VAR_1;
}
