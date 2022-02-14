
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct renameflags {int nounmount; } ;
struct TYPE_6__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char const*,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int * FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *,int *,char*,struct renameflags) ;

int
FUNC_7(libbe_handle_t *VAR_7, const char *VAR_8, const char *VAR_9)
{
 char VAR_10[VAR_4];
 char VAR_11[VAR_4];
 zfs_handle_t *VAR_12;
 int VAR_13;





 if ((VAR_13 = FUNC_1(VAR_7, VAR_9)) != 0)
  return (FUNC_2(VAR_7, VAR_13));
 if ((VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_10)) != 0)
  return (FUNC_2(VAR_7, VAR_13));
 if ((VAR_13 = FUNC_0(VAR_7, VAR_9, VAR_11)) != 0)
  return (FUNC_2(VAR_7, VAR_13));

 if (!FUNC_4(VAR_7->lzh, VAR_10, VAR_5))
  return (FUNC_2(VAR_7, VAR_1));

 if (FUNC_4(VAR_7->lzh, VAR_11, VAR_5))
  return (FUNC_2(VAR_7, VAR_0));

 if ((VAR_12 = FUNC_5(VAR_7->lzh, VAR_10,
     VAR_6)) == ((void*)0))
  return (FUNC_2(VAR_7, VAR_3));


 struct renameflags VAR_14 = {
  .nounmount = 1,
 };

 VAR_13 = FUNC_6(VAR_12, ((void*)0), VAR_11, VAR_14);

 FUNC_3(VAR_12);
 if (VAR_13 != 0)
  return (FUNC_2(VAR_7, VAR_2));
 return (0);
}
