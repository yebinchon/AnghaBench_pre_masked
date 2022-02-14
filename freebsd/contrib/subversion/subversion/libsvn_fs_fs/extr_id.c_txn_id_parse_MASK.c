
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int revision; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const**) ;
 int FUNC_1 (char const**,char const*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_fs_fs__id_part_t *VAR_1,
             const char *VAR_2)
{
  const char *VAR_3;
  if (!FUNC_0(&VAR_1->revision, VAR_2, &VAR_3))
    return VAR_0;

  VAR_2 = VAR_3;
  if (*VAR_2 != '-')
    return VAR_0;

  ++VAR_2;
  VAR_1->number = FUNC_1(&VAR_2, VAR_2);
  return *VAR_2 == '\0';
}
