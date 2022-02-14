
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_onexit_t ;
typedef scalar_t__ minor_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 zfs_onexit_t *VAR_3;
 minor_t VAR_4 = (minor_t)(uintptr_t)VAR_2;

 if (VAR_4 == 0)
  return;

 FUNC_0(&VAR_1);
 VAR_3 = FUNC_3(VAR_4, VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(&VAR_1);
  return;
 }
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(&VAR_1);
}
