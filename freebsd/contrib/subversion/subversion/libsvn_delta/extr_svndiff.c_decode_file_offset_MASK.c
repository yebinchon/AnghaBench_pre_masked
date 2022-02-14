
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_filesize_t ;
typedef scalar_t__ apr_uint64_t ;


 unsigned char* FUNC_0 (scalar_t__*,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_1(svn_filesize_t *VAR_0,
                   const unsigned char *VAR_1,
                   const unsigned char *VAR_2)
{
  apr_uint64_t VAR_3 = 0;
  const unsigned char *VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2);
  *VAR_0 = (svn_filesize_t)VAR_3;

  return VAR_4;
}
