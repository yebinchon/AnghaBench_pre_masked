
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *) ;

void FUNC_2(svn_stringbuf_t **VAR_0,
                            apr_pool_t *VAR_1,
                            const char *VAR_2)
{
  if (*VAR_0 == ((void*)0))
    *VAR_0 = FUNC_1(VAR_1);

  FUNC_0(*VAR_0, "</");
  FUNC_0(*VAR_0, VAR_2);
  FUNC_0(*VAR_0, ">\n");
}
