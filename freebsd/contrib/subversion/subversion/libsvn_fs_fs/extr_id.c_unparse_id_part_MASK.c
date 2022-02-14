
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ revision; int number; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0,
                const svn_fs_fs__id_part_t *VAR_1)
{
  if (FUNC_0(VAR_1->revision))
    {

      VAR_0 += FUNC_2(VAR_0, VAR_1->number);
      if (VAR_1->revision > 0)
        {
          *(VAR_0++) = '-';
          VAR_0 += FUNC_1(VAR_0, VAR_1->revision);
        }
    }
  else
    {

      *(VAR_0++) = '_';
      VAR_0 += FUNC_2(VAR_0, VAR_1->number);
    }

  *(VAR_0++) = '.';

  return VAR_0;
}
