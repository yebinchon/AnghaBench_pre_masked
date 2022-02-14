
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int revision; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;

const char *
FUNC_3(const svn_fs_fs__id_part_t *VAR_1,
                          apr_pool_t *VAR_2)
{
  char VAR_3[2 * VAR_0 + 1];
  char *VAR_4 = VAR_3;

  VAR_4 += FUNC_1(VAR_4, VAR_1->revision);
  *(VAR_4++) = '-';
  VAR_4 += FUNC_2(VAR_4, VAR_1->number);

  return FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3);
}
