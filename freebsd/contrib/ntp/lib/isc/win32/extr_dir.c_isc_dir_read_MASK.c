
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {int cFileName; } ;
struct TYPE_6__ {int name; int length; TYPE_5__ find_data; } ;
struct TYPE_7__ {scalar_t__ search_handle; TYPE_1__ entry; scalar_t__ entry_filled; } ;
typedef TYPE_2__ isc_dir_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

isc_result_t
FUNC_6(isc_dir_t *VAR_7) {
 FUNC_2(FUNC_3(VAR_7) && VAR_7->search_handle != VAR_2);

 if (VAR_7->entry_filled)



  VAR_7->entry_filled = VAR_3;

 else {



  if (FUNC_0(VAR_7->search_handle,
     &VAR_7->entry.find_data) == VAR_1)





   if (FUNC_1() == VAR_0)
    return (VAR_4);
   else
    return (VAR_6);
 }




 FUNC_4(VAR_7->entry.name, VAR_7->entry.find_data.cFileName);
 VAR_7->entry.length = FUNC_5(VAR_7->entry.name);

 return (VAR_5);
}
