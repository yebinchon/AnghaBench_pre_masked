
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
 int FUNC_3 (int *,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(unsigned char *VAR_2, svn_stream_t *VAR_3)
{
  char VAR_4;
  apr_size_t VAR_5 = 1;

  FUNC_0(FUNC_3(VAR_3, &VAR_4, &VAR_5));
  if (VAR_5 == 0)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Unexpected end of svndiff input"));
  *VAR_2 = (unsigned char) VAR_4;
  return VAR_1;
}
