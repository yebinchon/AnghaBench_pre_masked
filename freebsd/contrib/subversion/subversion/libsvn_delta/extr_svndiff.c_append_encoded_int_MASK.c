
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int apr_uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned char* FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_3(svn_stringbuf_t *VAR_1, svn_filesize_t VAR_2)
{
  unsigned char VAR_3[VAR_0], *VAR_4;

  FUNC_0(VAR_2 >= 0);
  VAR_4 = FUNC_1(VAR_3, (apr_uint64_t)VAR_2);
  FUNC_2(VAR_1, (const char *)VAR_3, VAR_4 - VAR_3);
}
