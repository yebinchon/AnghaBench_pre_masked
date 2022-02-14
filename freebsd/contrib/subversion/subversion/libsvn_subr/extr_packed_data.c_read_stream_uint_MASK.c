
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t *VAR_2, apr_uint64_t *VAR_3)
{
  apr_uint64_t VAR_4 = 0;
  apr_uint64_t VAR_5 = 0;
  unsigned char VAR_6;

  do
    {
      apr_size_t VAR_7 = 1;
      FUNC_0(FUNC_3(VAR_2, (char *)&VAR_6, &VAR_7));
      if (VAR_7 != 1)
        return FUNC_2(VAR_0, ((void*)0),
                                FUNC_1("Unexpected end of stream"));

      VAR_5 += (apr_uint64_t)(VAR_6 & 0x7f) << VAR_4;
      VAR_4 += 7;
      if (VAR_4 > 64)
        return FUNC_2(VAR_0, ((void*)0),
                                FUNC_1("Integer representation too long"));
    }
  while (VAR_6 >= 0x80);

  *VAR_3 = VAR_5;
  return VAR_1;
}
