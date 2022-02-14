
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl_entry {int name; struct archive_acl_entry* next; } ;
struct archive_acl {scalar_t__ acl_state; scalar_t__ acl_types; int * acl_p; struct archive_acl_entry* acl_text; struct archive_acl_entry* acl_text_w; struct archive_acl_entry* acl_head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_acl_entry*) ;

void
FUNC_2(struct archive_acl *VAR_0)
{
 struct archive_acl_entry *VAR_1;

 while (VAR_0->acl_head != ((void*)0)) {
  VAR_1 = VAR_0->acl_head->next;
  FUNC_0(&VAR_0->acl_head->name);
  FUNC_1(VAR_0->acl_head);
  VAR_0->acl_head = VAR_1;
 }
 FUNC_1(VAR_0->acl_text_w);
 VAR_0->acl_text_w = ((void*)0);
 FUNC_1(VAR_0->acl_text);
 VAR_0->acl_text = ((void*)0);
 VAR_0->acl_p = ((void*)0);
 VAR_0->acl_types = 0;
 VAR_0->acl_state = 0;
}
