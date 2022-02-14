
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_5__ {int * vfs_data; } ;
typedef TYPE_1__ vfs_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(const char *VAR_2, zfsvfs_t **VAR_3)
{
 objset_t *VAR_4;
 vfs_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_3(VAR_4, &VAR_5);
 FUNC_2(VAR_4, VAR_1);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_4(VAR_5, 0);
 FUNC_5(VAR_5);
 if (VAR_6 != 0) {
  *VAR_3 = ((void*)0);
  VAR_6 = FUNC_0(VAR_0);
 } else {
  *VAR_3 = VAR_5->vfs_data;
 }
 return (VAR_6);
}
