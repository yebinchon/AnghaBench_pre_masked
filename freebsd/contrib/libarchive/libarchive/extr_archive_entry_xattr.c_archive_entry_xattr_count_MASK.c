
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_xattr* xattr_head; } ;
struct ae_xattr {struct ae_xattr* next; } ;



int
FUNC_0(struct archive_entry *VAR_0)
{
 struct ae_xattr *VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->xattr_head; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  VAR_2++;

 return VAR_2;
}
