
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_xattr* xattr_head; } ;
struct ae_xattr {struct ae_xattr* value; struct ae_xattr* name; struct ae_xattr* next; } ;


 int FUNC_0 (struct ae_xattr*) ;

void
FUNC_1(struct archive_entry *VAR_0)
{
 struct ae_xattr *VAR_1;

 while (VAR_0->xattr_head != ((void*)0)) {
  VAR_1 = VAR_0->xattr_head->next;
  FUNC_0(VAR_0->xattr_head->name);
  FUNC_0(VAR_0->xattr_head->value);
  FUNC_0(VAR_0->xattr_head);
  VAR_0->xattr_head = VAR_1;
 }

 VAR_0->xattr_head = ((void*)0);
}
