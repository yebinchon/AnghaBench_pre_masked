
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* page; } ;
struct small_page_entry {TYPE_1__ common; struct small_page_entry* next; } ;
struct alloc_zone {size_t bytes_mapped; struct small_page_entry* free_pages; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2 (struct alloc_zone *VAR_1)
{
}
