
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int*,int *,int *) ;
 int * FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 (scalar_t__*,int *,char*,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_4, svn_spillbuf_reader_t *VAR_5, apr_pool_t *VAR_6)
{
  apr_uint64_t VAR_7;
  apr_size_t VAR_8;
  apr_size_t VAR_9;
  char *VAR_10;

  FUNC_0(FUNC_5(&VAR_7, VAR_5, VAR_6));





  if (VAR_7 + 1 < VAR_7 || VAR_7 + 1 > VAR_0)
    {



      return FUNC_6(VAR_2, ((void*)0),
                               FUNC_4(VAR_6,
                                            FUNC_2("Invalid length (%%%s) when "
                                              "about to read a string"),
                                            VAR_1),
                               VAR_7);
    }

  VAR_8 = (apr_size_t)VAR_7;
  VAR_10 = FUNC_3(VAR_6, VAR_8+1);
  if (VAR_8 > 0)
    {
      FUNC_0(FUNC_7(&VAR_9, VAR_5, VAR_10, VAR_8, VAR_6));
      FUNC_1(VAR_9 == VAR_8);
    }
  VAR_10[VAR_7] = 0;
  *VAR_4 = VAR_10;
  return VAR_3;
}
