
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const**,unsigned char const*,int *) ;
 int * FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const unsigned char **VAR_2,
             const unsigned char *VAR_3, ptrdiff_t *VAR_4, int VAR_5)
{
  if ((VAR_3 - *VAR_2) < 1)
    return FUNC_1(VAR_0, ((void*)0), ((void*)0));

  if (**VAR_2 != VAR_5)
    return FUNC_1(VAR_1, ((void*)0), ((void*)0));

  (*VAR_2)++;

  return FUNC_2(FUNC_0(VAR_2, VAR_3, VAR_4));
}
