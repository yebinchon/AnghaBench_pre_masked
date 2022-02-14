
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_7__ {int nomount; } ;
typedef TYPE_1__ recvflags_t ;
typedef int nvlist_t ;
struct TYPE_8__ {int lzh; } ;
typedef TYPE_2__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,char const*,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*,int *,TYPE_1__*,int,int *) ;

int
FUNC_9(libbe_handle_t *VAR_9, const char *VAR_10, int VAR_11)
{
 char VAR_12[VAR_5];
 nvlist_t *VAR_13;
 zfs_handle_t *VAR_14;
 recvflags_t VAR_15 = { .nomount = 1 };
 int VAR_16;

 FUNC_0(VAR_9, VAR_10, VAR_12);

 if ((VAR_16 = FUNC_8(VAR_9->lzh, VAR_12, ((void*)0), &VAR_15, VAR_11, ((void*)0))) != 0) {
  switch (VAR_16) {
  case 130:
   return (FUNC_4(VAR_9, VAR_2));
  case 128:
   return (FUNC_4(VAR_9, VAR_1));
  case 129:
   return (FUNC_4(VAR_9, VAR_0));
  default:
   return (FUNC_4(VAR_9, VAR_3));
  }
 }

 if ((VAR_14 = FUNC_6(VAR_9->lzh, VAR_12, VAR_8)) == ((void*)0))
  return (FUNC_4(VAR_9, VAR_4));

 FUNC_2(&VAR_13, VAR_7, VAR_6);
 FUNC_1(VAR_13, "canmount", "noauto");
 FUNC_1(VAR_13, "mountpoint", "none");

 VAR_16 = FUNC_7(VAR_14, VAR_13);
 FUNC_3(VAR_13);

 FUNC_5(VAR_14);

 if (VAR_16 != 0)
  return (FUNC_4(VAR_9, VAR_3));

 return (0);
}
