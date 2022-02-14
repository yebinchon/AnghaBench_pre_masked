
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {int cFileName; } ;
struct TYPE_6__ {int length; int name; TYPE_5__ find_data; } ;
struct TYPE_7__ {scalar_t__ search_handle; int entry_filled; TYPE_1__ entry; int dirname; } ;
typedef TYPE_2__ isc_dir_t ;


 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static isc_result_t
FUNC_6(isc_dir_t *VAR_5)
{
 FUNC_2(FUNC_3(VAR_5));
 FUNC_2(VAR_5->search_handle == VAR_0);

 VAR_5->entry_filled = VAR_1;




 VAR_5->search_handle = FUNC_0(VAR_5->dirname,
         &VAR_5->entry.find_data);

 if (VAR_5->search_handle == VAR_0) {
  return (VAR_2);
 }




 FUNC_1(sizeof(VAR_5->entry.name) >
        FUNC_5(VAR_5->entry.find_data.cFileName));




 FUNC_4(VAR_5->entry.name, VAR_5->entry.find_data.cFileName);
 VAR_5->entry.length = FUNC_5(VAR_5->entry.name);

 VAR_5->entry_filled = VAR_4;

 return (VAR_3);
}
