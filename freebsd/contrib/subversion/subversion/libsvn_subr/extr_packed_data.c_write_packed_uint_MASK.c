
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_uint64_t ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*,int) ;
 unsigned char* FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static void
FUNC_3(svn_stringbuf_t* VAR_0, apr_uint64_t VAR_1)
{
  if (VAR_1 < 0x80)
    {
      FUNC_0(VAR_0, (char)VAR_1);
    }
  else
    {
      unsigned char VAR_2[10];
      unsigned char *VAR_3 = FUNC_2(VAR_2, VAR_1);

      FUNC_1(VAR_0, (char *)VAR_2, VAR_3 - VAR_2);
    }
}
