
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int nvlist_t ;




 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_2, void *VAR_3)
{
 nvlist_t *VAR_4 = VAR_3;

 if (FUNC_3(VAR_2, VAR_4) != 0) {
  switch (FUNC_2(VAR_0)) {
  case 129:
   (void) FUNC_0(VAR_1, "%s", FUNC_1("property may be set "
       "but unable to remount filesystem\n"));
   break;
  case 128:
   (void) FUNC_0(VAR_1, "%s", FUNC_1("property may be set "
       "but unable to reshare filesystem\n"));
   break;
  }
  return (1);
 }
 return (0);
}
