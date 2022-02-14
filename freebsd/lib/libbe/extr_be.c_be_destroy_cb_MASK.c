
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct be_destroy_data {char* snapname; TYPE_1__* lbh; } ;
typedef int path ;
struct TYPE_2__ {int lzh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *,void*),void*) ;
 int FUNC_5 (int *,int (*) (int *,void*),void*) ;
 int * FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(zfs_handle_t *VAR_2, void *VAR_3)
{
 char VAR_4[VAR_0];
 struct be_destroy_data *VAR_5;
 zfs_handle_t *VAR_6;
 int VAR_7;

 VAR_5 = (struct be_destroy_data *)VAR_3;
 if (VAR_5->snapname == ((void*)0)) {
  VAR_7 = FUNC_4(VAR_2, FUNC_7, VAR_3);
  if (VAR_7 != 0)
   return (VAR_7);
  return (FUNC_2(VAR_2, 0));
 }

 VAR_7 = FUNC_5(VAR_2, FUNC_7, VAR_3);
 if (VAR_7 != 0)
  return (VAR_7);
 FUNC_0(VAR_4, sizeof(VAR_4), "%s@%s", FUNC_3(VAR_2),
     VAR_5->snapname);
 if (!FUNC_1(VAR_5->lbh->lzh, VAR_4, VAR_1))
  return (0);
 VAR_6 = FUNC_6(VAR_5->lbh->lzh, VAR_4, VAR_1);
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_6, 0);
 return (0);
}
