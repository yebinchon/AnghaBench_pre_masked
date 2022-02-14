
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_stringbuf_t **VAR_4,
                         svn_boolean_t *VAR_5,
                         const char *VAR_6,
                         svn_stream_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  svn_stringbuf_t *VAR_9;
  apr_size_t VAR_10;
  const char *VAR_11;
  char VAR_12;





  VAR_9 = FUNC_4(VAR_2, VAR_8);


  VAR_11 = VAR_6;
  while (*VAR_11)
    {
      VAR_10 = 1;
      FUNC_0(FUNC_1(VAR_7, &VAR_12, &VAR_10));
      if (VAR_10 != 1)
        {

          *VAR_5 = VAR_3;
          *VAR_4 = VAR_9;
          return VAR_1;
        }

      if (VAR_12 == *VAR_11)
        VAR_11++;
      else
        VAR_11 = VAR_6;

      FUNC_2(VAR_9, VAR_12);
    }

  *VAR_5 = VAR_0;
  FUNC_3(VAR_9, VAR_11 - VAR_6);
  *VAR_4 = VAR_9;

  return VAR_1;
}
