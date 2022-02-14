
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl_entry {int type; struct archive_acl_entry* next; } ;
struct archive_acl {struct archive_acl_entry* acl_head; } ;


 int VAR_0 ;

int
FUNC_0(struct archive_acl *VAR_1, int VAR_2)
{
 int VAR_3;
 struct archive_acl_entry *VAR_4;

 VAR_3 = 0;
 VAR_4 = VAR_1->acl_head;
 while (VAR_4 != ((void*)0)) {
  if ((VAR_4->type & VAR_2) != 0)
   VAR_3++;
  VAR_4 = VAR_4->next;
 }

 if (VAR_3 > 0 && ((VAR_2 & VAR_0) != 0))
  VAR_3 += 3;
 return (VAR_3);
}
