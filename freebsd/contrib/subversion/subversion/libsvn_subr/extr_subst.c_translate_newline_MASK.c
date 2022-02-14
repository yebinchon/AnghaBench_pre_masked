
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (char*,scalar_t__,char const*,scalar_t__) ;
 int FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char const*,scalar_t__) ;
 int FUNC_5 (char*,char const*,scalar_t__) ;
 int * FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,char const*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_3,
                  apr_size_t VAR_4,
                  char *VAR_5,
                  apr_size_t *VAR_6,
                  const char *VAR_7,
                  apr_size_t VAR_8,
                  svn_stream_t *VAR_9,
                  svn_boolean_t *VAR_10,
                  svn_boolean_t VAR_11)
{
  FUNC_3(FUNC_1(VAR_7, VAR_8));



  if (*VAR_6)
    {


      if ((! VAR_11) && FUNC_0(VAR_5, *VAR_6,
                                              VAR_7, VAR_8))
        return FUNC_6(VAR_0, ((void*)0), ((void*)0));
    }
  else
    {


      FUNC_5(VAR_5, VAR_7, VAR_8);
      *VAR_6 = VAR_8;
    }


  FUNC_2(FUNC_7(VAR_9, VAR_3, VAR_4));



  if (VAR_10 != ((void*)0) &&
      (VAR_4 != VAR_8 ||
       FUNC_4(VAR_3, VAR_7, VAR_4) != 0))
    *VAR_10 = VAR_2;

  return VAR_1;
}
