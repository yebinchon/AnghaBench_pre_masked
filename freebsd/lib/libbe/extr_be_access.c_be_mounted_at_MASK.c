
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct be_mountcheck_info {char const* path; int * name; } ;
struct TYPE_5__ {int single_object; int * list; TYPE_2__* lbh; } ;
typedef TYPE_1__ prop_data_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int root; int lzh; } ;
typedef TYPE_2__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct be_mountcheck_info*) ;
 int * FUNC_5 (int ,int ,int ) ;

int
FUNC_6(libbe_handle_t *VAR_4, const char *VAR_5, nvlist_t *VAR_6)
{
 char VAR_7[VAR_1];
 zfs_handle_t *VAR_8;
 struct be_mountcheck_info VAR_9;
 prop_data_t VAR_10;

 FUNC_0(&VAR_7, VAR_1);
 if ((VAR_8 = FUNC_5(VAR_4->lzh, VAR_4->root,
     VAR_2)) == ((void*)0))
  return (VAR_0);

 VAR_9.path = VAR_5;
 VAR_9.name = ((void*)0);
 FUNC_4(VAR_8, VAR_3, &VAR_9);
 FUNC_3(VAR_8);

 if (VAR_9.name != ((void*)0)) {
  if (VAR_6 != ((void*)0)) {
   if ((VAR_8 = FUNC_5(VAR_4->lzh, VAR_4->root,
       VAR_2)) == ((void*)0)) {
    FUNC_1(VAR_9.name);
    return (VAR_0);
   }

   VAR_10.lbh = VAR_4;
   VAR_10.list = VAR_6;
   VAR_10.single_object = 0;
   FUNC_2(VAR_8, &VAR_10);
   FUNC_3(VAR_8);
  }
  FUNC_1(VAR_9.name);
  return (0);
 }
 return (1);
}
