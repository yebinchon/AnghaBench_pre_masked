
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int * FUNC_5 (char const*,scalar_t__*,int *) ;
 int * FUNC_6 (char const*,int ,int ,void*,int *) ;
 int * FUNC_7 (char const*,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_6,
                          svn_boolean_t VAR_7,
                          svn_cancel_func_t VAR_8,
                          void *VAR_9,
                          apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;


  VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_10);
  if (VAR_11)
    {

      FUNC_3(VAR_11);

      VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9,
                               VAR_10);

      if (VAR_11)
        {



          svn_node_kind_t VAR_12;

          FUNC_3(VAR_11);
          FUNC_0(FUNC_5(VAR_6, &VAR_12, VAR_10));
          if (VAR_12 == VAR_4)
            FUNC_0(FUNC_7(VAR_6, VAR_7, VAR_10));
          else if (VAR_12 == VAR_3)
            FUNC_0(FUNC_6(VAR_6, VAR_7,
                                       VAR_8, VAR_9,
                                       VAR_10));
          else if (VAR_12 == VAR_5)
            return FUNC_4(VAR_0, ((void*)0),
                                     FUNC_1("'%s' does not exist"),
                                     FUNC_2(VAR_6,
                                                            VAR_10));
          else
            return FUNC_4(VAR_1, ((void*)0),
                                     FUNC_1("Unsupported node kind for path '%s'"),
                                     FUNC_2(VAR_6,
                                                            VAR_10));

        }
    }

  return VAR_2;
}
