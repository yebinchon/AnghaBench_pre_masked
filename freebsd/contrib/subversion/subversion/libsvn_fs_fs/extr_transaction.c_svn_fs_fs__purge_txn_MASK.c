
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_4,
                     const char *VAR_5,
                     apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_4->fsap_data;
  svn_fs_fs__id_part_t VAR_8;
  FUNC_0(FUNC_2(&VAR_8, VAR_5));


  FUNC_0(FUNC_1(VAR_4, &VAR_8, VAR_6));

  FUNC_0(FUNC_6(FUNC_3(VAR_4, &VAR_8, VAR_6),
                             VAR_0, ((void*)0), ((void*)0), VAR_6));
  if (VAR_7->format >= VAR_1)
    {




      FUNC_0(FUNC_7(
                  FUNC_4(VAR_4, &VAR_8, VAR_6),
                  VAR_3, VAR_6));
      FUNC_0(FUNC_7(
                  FUNC_5(VAR_4, &VAR_8, VAR_6),
                  VAR_3, VAR_6));
    }
  return VAR_2;
}
