
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl_entry {struct archive_acl_entry* next; int name; int id; int tag; int permset; int type; } ;
struct archive_acl {struct archive_acl_entry* acl_head; int mode; } ;


 struct archive_acl_entry* FUNC_0 (struct archive_acl*,int ,int ,int ,int ) ;
 int FUNC_1 (struct archive_acl*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct archive_acl *VAR_0, struct archive_acl *VAR_1)
{
 struct archive_acl_entry *VAR_2, *VAR_3;

 FUNC_1(VAR_0);

 VAR_0->mode = VAR_1->mode;
 VAR_2 = VAR_1->acl_head;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_0,
      VAR_2->type, VAR_2->permset, VAR_2->tag, VAR_2->id);
  if (VAR_3 != ((void*)0))
   FUNC_2(&VAR_3->name, &VAR_2->name);
  VAR_2 = VAR_2->next;
 }
}
