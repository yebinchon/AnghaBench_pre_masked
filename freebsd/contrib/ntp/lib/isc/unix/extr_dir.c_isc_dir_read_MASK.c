
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {int d_name; } ;
typedef int isc_result_t ;
struct TYPE_5__ {int length; int name; } ;
struct TYPE_6__ {TYPE_1__ entry; int * handle; } ;
typedef TYPE_2__ isc_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 struct dirent* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ) ;

isc_result_t
FUNC_5(isc_dir_t *VAR_3) {
 struct dirent *VAR_4;
 size_t VAR_5;

 FUNC_0(FUNC_1(VAR_3) && VAR_3->handle != ((void*)0));




 VAR_4 = FUNC_2(VAR_3->handle);

 if (VAR_4 == ((void*)0))
  return (VAR_0);




 VAR_5 = FUNC_4(VAR_4->d_name) + 1;
 if (sizeof(VAR_3->entry.name) < VAR_5)
  return (VAR_2);

 FUNC_3(VAR_3->entry.name, VAR_4->d_name, VAR_5);




 VAR_3->entry.length = FUNC_4(VAR_4->d_name);

 return (VAR_1);
}
