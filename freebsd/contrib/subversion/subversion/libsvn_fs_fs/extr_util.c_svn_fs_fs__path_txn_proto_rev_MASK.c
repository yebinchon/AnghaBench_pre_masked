
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*,int ,int *) ;
 char const* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int const*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

const char *
FUNC_4(svn_fs_t *VAR_3,
                              const svn_fs_fs__id_part_t *VAR_4,
                              apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_3->fsap_data;
  if (VAR_6->format >= VAR_2)
    return FUNC_1(FUNC_3(VAR_3, VAR_5),
                           FUNC_0(VAR_4, VAR_0, VAR_5),
                           VAR_5);
  else
    return FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_5),
                           VAR_1, VAR_5);
}
