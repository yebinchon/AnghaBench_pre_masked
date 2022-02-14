
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,int*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_4(libbe_handle_t *VAR_2, nvlist_t *VAR_3, uint64_t VAR_4,
    const char *VAR_5)
{
 nvlist_t **VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_0(VAR_3, VAR_0, &VAR_6,
     &VAR_9) == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
   if (FUNC_4(VAR_2, VAR_6[VAR_8], VAR_4, VAR_5) != 0)
    return (1);
  return (0);
 }

 if (FUNC_1(VAR_3, VAR_1,
     &VAR_7) != 0) {
  return (1);
 }

 if (FUNC_3(VAR_2->lzh, VAR_4, VAR_7, VAR_5) != 0) {
  FUNC_2("ZFS_IOC_NEXTBOOT failed");
  return (1);
 }

 return (0);
}
