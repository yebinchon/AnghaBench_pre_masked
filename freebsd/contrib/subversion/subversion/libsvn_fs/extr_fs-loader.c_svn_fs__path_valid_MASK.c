
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 int * FUNC_2 (int ,int *,int ,...) ;
 int FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

svn_error_t *
FUNC_7(const char *VAR_2, apr_pool_t *VAR_3)
{
  char *VAR_4;


  if (! FUNC_6(VAR_2))
    {
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_0("Path '%s' is not in UTF-8"), VAR_2);
    }


  if (FUNC_4(VAR_2)
      || FUNC_5(VAR_2))
    {
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_0("Path '%s' contains '.' or '..' element"),
                               VAR_2);
    }





  VAR_4 = FUNC_1(VAR_2, '\n');
  if (VAR_4)
    {
      return FUNC_2(VAR_0, ((void*)0),
               FUNC_0("Invalid control character '0x%02x' in path '%s'"),
               (unsigned char)*VAR_4, FUNC_3(VAR_2, VAR_3));
    }


  return VAR_1;
}
