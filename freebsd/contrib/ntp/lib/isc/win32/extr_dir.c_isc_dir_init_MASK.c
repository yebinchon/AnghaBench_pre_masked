
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int find_data; scalar_t__ length; } ;
struct TYPE_5__ {char* dirname; int magic; int search_handle; int entry_filled; TYPE_1__ entry; } ;
typedef TYPE_2__ isc_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

void
FUNC_2(isc_dir_t *VAR_3) {
 FUNC_0(VAR_3 != ((void*)0));

 VAR_3->dirname[0] = '\0';

 VAR_3->entry.name[0] = '\0';
 VAR_3->entry.length = 0;
 FUNC_1(&(VAR_3->entry.find_data), 0, sizeof(VAR_3->entry.find_data));

 VAR_3->entry_filled = VAR_2;
 VAR_3->search_handle = VAR_0;

 VAR_3->magic = VAR_1;
}
