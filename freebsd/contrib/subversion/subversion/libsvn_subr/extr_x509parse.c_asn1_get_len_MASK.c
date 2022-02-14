
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const unsigned char **VAR_3, const unsigned char *VAR_4,
             ptrdiff_t *VAR_5)
{
  if ((VAR_4 - *VAR_3) < 1)
    return FUNC_0(VAR_1, ((void*)0), ((void*)0));

  if ((**VAR_3 & 0x80) == 0)
    *VAR_5 = *(*VAR_3)++;
  else
    switch (**VAR_3 & 0x7F)
      {
      case 1:
        if ((VAR_4 - *VAR_3) < 2)
          return FUNC_0(VAR_1, ((void*)0), ((void*)0));

        *VAR_5 = (*VAR_3)[1];
        (*VAR_3) += 2;
        break;

      case 2:
        if ((VAR_4 - *VAR_3) < 3)
          return FUNC_0(VAR_1, ((void*)0), ((void*)0));

        *VAR_5 = ((*VAR_3)[1] << 8) | (*VAR_3)[2];
        (*VAR_3) += 3;
        break;

      default:
        return FUNC_0(VAR_0, ((void*)0), ((void*)0));
        break;
      }

  if (*VAR_5 > (VAR_4 - *VAR_3))
    return FUNC_0(VAR_1, ((void*)0), ((void*)0));

  return VAR_2;
}
