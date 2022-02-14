
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct links_entry {struct links_entry* links_head; struct links_entry* name; struct links_entry* next; } ;
struct cpio {struct cpio* links_head; struct cpio* name; struct cpio* next; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct links_entry*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct cpio *VAR_2;

 VAR_2 = (struct cpio *)(VAR_1->format->data);

        while (VAR_2->links_head != ((void*)0)) {
                struct links_entry *VAR_3 = VAR_2->links_head->next;

                FUNC_0(VAR_2->links_head->name);
                FUNC_0(VAR_2->links_head);
                VAR_2->links_head = VAR_3;
        }
 FUNC_0(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
