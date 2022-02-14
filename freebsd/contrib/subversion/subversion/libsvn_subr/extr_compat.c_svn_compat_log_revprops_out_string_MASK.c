
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;

void
FUNC_1(const svn_string_t **VAR_3,
                                   const svn_string_t **VAR_4,
                                   const svn_string_t **VAR_5,
                                   apr_hash_t *VAR_6)
{
  *VAR_3 = *VAR_4 = *VAR_5 = ((void*)0);
  if (VAR_6)
    {
      *VAR_3 = FUNC_0(VAR_6, VAR_0);
      *VAR_4 = FUNC_0(VAR_6, VAR_1);
      *VAR_5 = FUNC_0(VAR_6, VAR_2);
    }
}
