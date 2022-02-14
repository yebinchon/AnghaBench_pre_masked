
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

time_t
FUNC_5 (char const * VAR_3)
{
  while (FUNC_1 ((unsigned char)*VAR_3))
    VAR_3++;

  switch (*VAR_3)
    {
    case 'P':
      return FUNC_3 (VAR_3 + 1);

    case 'T':
      return FUNC_4 (VAR_3 + 1);

    default:
      if (FUNC_0 ((unsigned char)*VAR_3))
        return FUNC_2 (VAR_3);

      VAR_2 = VAR_1;
      return VAR_0;
    }
}
