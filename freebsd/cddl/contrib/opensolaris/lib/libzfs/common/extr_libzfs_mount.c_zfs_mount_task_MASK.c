
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int mountpoint ;
struct TYPE_3__ {int mnt_idx; size_t mnt_num_handles; scalar_t__ (* mnt_func ) (int *,int ) ;int mnt_tp; int mnt_data; int mnt_hdl; int ** mnt_zhps; } ;
typedef TYPE_1__ mnt_param_t ;
typedef int child ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int **,size_t,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int **,size_t,int,scalar_t__ (*) (int *,int ),int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 mnt_param_t *VAR_4 = VAR_3;
 int VAR_5 = VAR_4->mnt_idx;
 zfs_handle_t **VAR_6 = VAR_4->mnt_zhps;
 size_t VAR_7 = VAR_4->mnt_num_handles;
 char VAR_8[VAR_1];

 FUNC_4(FUNC_6(VAR_6[VAR_5], VAR_2, VAR_8,
     sizeof (VAR_8), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (VAR_4->mnt_func(VAR_6[VAR_5], VAR_4->mnt_data) != 0)
  return;
 for (int VAR_9 = VAR_5 + 1; VAR_9 < VAR_7;
     VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_9)) {
  char VAR_10[VAR_1];
  FUNC_4(FUNC_6(VAR_6[VAR_9], VAR_2,
      VAR_10, sizeof (VAR_10), ((void*)0), ((void*)0), 0, VAR_0) == 0);

  if (!FUNC_1(VAR_8, VAR_10))
   break;
  FUNC_5(VAR_4->mnt_hdl, VAR_6, VAR_7, VAR_9,
      VAR_4->mnt_func, VAR_4->mnt_data, VAR_4->mnt_tp);
 }
 FUNC_0(VAR_4);
}
