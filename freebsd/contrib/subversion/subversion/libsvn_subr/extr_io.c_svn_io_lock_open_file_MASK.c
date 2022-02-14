
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
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (char const**,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int VAR_4 ;
 int * FUNC_6 (scalar_t__,int ,...) ;
 int FUNC_7 (char const*,int *) ;

svn_error_t *
FUNC_8(apr_file_t *VAR_5,
                      svn_boolean_t VAR_6,
                      svn_boolean_t VAR_7,
                      apr_pool_t *VAR_8)
{
  int VAR_9 = 128;
  apr_status_t VAR_10;
  const char *VAR_11;

  if (VAR_6)
    VAR_9 = 129;
  if (VAR_7)
    VAR_9 |= VAR_0;



  VAR_10 = FUNC_4(&VAR_11, VAR_5);
  if (VAR_10)
    return FUNC_6(VAR_10, FUNC_2("Can't get file name"));


  VAR_10 = FUNC_3(VAR_5, VAR_9);
  FUNC_0(VAR_10, FUNC_3(VAR_5, VAR_9));

  if (VAR_10)
    {
      switch (VAR_9 & VAR_1)
        {
        case 128:
          return FUNC_6(VAR_10,
                                    FUNC_2("Can't get shared lock on file '%s'"),
                                    FUNC_7(VAR_11, VAR_8));
        case 129:
          return FUNC_6(VAR_10,
                                    FUNC_2("Can't get exclusive lock on file '%s'"),
                                    FUNC_7(VAR_11, VAR_8));
        default:
          FUNC_1();
        }
    }






  FUNC_5(VAR_8, VAR_5,
                            VAR_4,
                            VAR_3);

  return VAR_2;
}
