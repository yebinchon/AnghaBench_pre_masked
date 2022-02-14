
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (unsigned char const**,unsigned char const*,int*,int ) ;
 int * FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const unsigned char **VAR_3, const unsigned char *VAR_4, int *VAR_5)
{
  ptrdiff_t VAR_6;

  FUNC_0(FUNC_1(VAR_3, VAR_4, &VAR_6, VAR_0));



  if (VAR_6 > (int)sizeof(int) || (**VAR_3 & 0x80) != 0)
    return FUNC_2(VAR_1, ((void*)0), ((void*)0));

  *VAR_5 = 0;

  while (VAR_6-- > 0) {

    *VAR_5 = (*VAR_5 << 8) | **VAR_3;
    (*VAR_3)++;
  }

  return VAR_2;
}
