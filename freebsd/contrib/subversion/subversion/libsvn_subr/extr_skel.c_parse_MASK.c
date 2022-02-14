
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_skel_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const*,scalar_t__,int *) ;
 int * FUNC_1 (char const*,scalar_t__,int *) ;
 int * FUNC_2 (char const*,scalar_t__,int *) ;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_skel_t *
FUNC_3(const char *VAR_2,
      apr_size_t VAR_3,
      apr_pool_t *VAR_4)
{
  char VAR_5;


  if (VAR_3 <= 0)
    return ((void*)0);

  VAR_5 = *VAR_2;


  if (VAR_5 == '(')
    return FUNC_2(VAR_2, VAR_3, VAR_4);


  if (VAR_0[(unsigned char) VAR_5] == VAR_1)
    return FUNC_1(VAR_2, VAR_3, VAR_4);



  else
    return FUNC_0(VAR_2, VAR_3, VAR_4);
}
