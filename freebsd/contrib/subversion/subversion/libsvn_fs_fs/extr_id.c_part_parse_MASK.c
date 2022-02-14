
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ revision; void* number; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int svn_boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,char const*,char const**) ;
 void* FUNC_1 (char const**,char const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_fs_fs__id_part_t *VAR_2,
           const char *VAR_3)
{
  const char *VAR_4;


  if (VAR_3[0] == '_')
    {
      VAR_2->revision = VAR_0;
      VAR_2->number = FUNC_1(&VAR_3, VAR_3 + 1);
      return *VAR_3 == '\0';
    }


  if (VAR_3[0] == '0' && VAR_3[1] == '\0')
    {
      VAR_2->revision = 0;
      VAR_2->number = 0;
      return VAR_1;
    }


  VAR_2->number = FUNC_1(&VAR_3, VAR_3);
  if (VAR_3[0] != '-')
    {
      VAR_2->revision = 0;
      return *VAR_3 == '\0';
    }

  return FUNC_0(&VAR_2->revision, VAR_3+1, &VAR_4);
}
