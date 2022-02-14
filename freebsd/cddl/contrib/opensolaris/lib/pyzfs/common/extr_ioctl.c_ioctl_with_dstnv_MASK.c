
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_nvlist_dst_size; uintptr_t zc_nvlist_dst; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,int,TYPE_1__*) ;
 void* FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (void*,int,int **,int ) ;
 int VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_6(int VAR_3, zfs_cmd_t *VAR_4)
{
 int VAR_5 = 2048;
 void *VAR_6;
 PyObject *VAR_7 = ((void*)0);

again:
 VAR_6 = FUNC_2(VAR_5);
 VAR_4->zc_nvlist_dst_size = VAR_5;
 VAR_4->zc_nvlist_dst = (uintptr_t)VAR_6;

 if (FUNC_1(VAR_2, VAR_3, VAR_4) == 0) {
  nvlist_t *VAR_8;

  VAR_1 = FUNC_5(VAR_6, VAR_4->zc_nvlist_dst_size, &VAR_8, 0);
  if (VAR_1 == 0) {
   VAR_7 = FUNC_3(VAR_8);
   FUNC_4(VAR_8);
  }
 } else if (VAR_1 == VAR_0) {
  FUNC_0(VAR_6);
  VAR_5 = VAR_4->zc_nvlist_dst_size;
  goto again;
 }
 FUNC_0(VAR_6);
 return (VAR_7);
}
