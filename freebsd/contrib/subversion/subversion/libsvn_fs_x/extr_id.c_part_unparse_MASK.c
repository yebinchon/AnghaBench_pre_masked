
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int change_set; int number; } ;
typedef TYPE_1__ svn_fs_x__id_t ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0,
             const svn_fs_x__id_t *VAR_1)
{
  VAR_0 += FUNC_0(VAR_0, VAR_1->number);
  if (VAR_1->change_set >= 0)
    {
      *(VAR_0++) = '+';
      VAR_0 += FUNC_0(VAR_0, VAR_1->change_set);
    }
  else
    {
      *(VAR_0++) = '-';
      VAR_0 += FUNC_0(VAR_0, -VAR_1->change_set);
    }

  return VAR_0;
}
