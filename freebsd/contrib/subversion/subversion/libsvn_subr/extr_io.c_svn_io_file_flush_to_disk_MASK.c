
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_os_file_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const**,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ,int ,...) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char const*,int *) ;

svn_error_t *FUNC_13(apr_file_t *VAR_2,
                                       apr_pool_t *VAR_3)
{
  apr_os_file_t VAR_4;
  const char *VAR_5;
  apr_status_t VAR_6;



  VAR_6 = FUNC_5(&VAR_5, VAR_2);
  if (VAR_6)
    return FUNC_10(VAR_6, FUNC_4("Can't get file name"));






  FUNC_3(FUNC_11(VAR_2, VAR_3));

  FUNC_7(&VAR_4, VAR_2);



  {
      int VAR_7;

      do {



        VAR_7 = FUNC_9(VAR_4);

      } while (VAR_7 == -1 && FUNC_0(FUNC_6()));




      if (VAR_7 == -1 && FUNC_1(FUNC_6()))
        return VAR_1;

      if (VAR_7 == -1)
        return FUNC_10(FUNC_6(),
                                  FUNC_4("Can't flush file '%s' to disk"),
                                  FUNC_12(VAR_5, VAR_3));


  }
  return VAR_1;
}
