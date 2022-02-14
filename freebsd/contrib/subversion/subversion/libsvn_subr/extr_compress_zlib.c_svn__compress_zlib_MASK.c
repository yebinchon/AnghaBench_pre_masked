
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,int) ;
 int * FUNC_2 (void const*,int ,int *,int) ;

svn_error_t *
FUNC_3(const void *VAR_3, apr_size_t VAR_4,
                   svn_stringbuf_t *VAR_5,
                   int VAR_6)
{
  if ( VAR_6 < VAR_1
      || VAR_6 > VAR_2)
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Unsupported compression method %d"),
                             VAR_6);

  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
}
