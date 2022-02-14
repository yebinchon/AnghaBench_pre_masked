
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char const*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t *VAR_2,
             const char *VAR_3,
             apr_size_t VAR_4)
{
  apr_size_t VAR_5 = VAR_4;




  FUNC_0(FUNC_3(VAR_2, VAR_3, &VAR_5));
  if (VAR_5 != VAR_4)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Error writing to stream"));
  return VAR_1;
}
