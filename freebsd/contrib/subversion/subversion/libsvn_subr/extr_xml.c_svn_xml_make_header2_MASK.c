
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *) ;

void
FUNC_3(svn_stringbuf_t **VAR_0, const char *VAR_1,
                     apr_pool_t *VAR_2)
{

  if (*VAR_0 == ((void*)0))
    *VAR_0 = FUNC_2(VAR_2);
  FUNC_1(*VAR_0, "<?xml version=\"1.0\"");
  if (VAR_1)
    {
      VAR_1 = FUNC_0(VAR_2, " encoding=\"%s\"", VAR_1);
      FUNC_1(*VAR_0, VAR_1);
    }
  FUNC_1(*VAR_0, "?>\n");
}
