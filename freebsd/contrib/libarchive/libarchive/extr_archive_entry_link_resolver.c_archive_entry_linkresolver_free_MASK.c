
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct links_entry {int entry; } ;
struct archive_entry_linkresolver {struct archive_entry_linkresolver* buckets; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct archive_entry_linkresolver*) ;
 struct links_entry* FUNC_2 (struct archive_entry_linkresolver*,int ) ;

void
FUNC_3(struct archive_entry_linkresolver *VAR_1)
{
 struct links_entry *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 while ((VAR_2 = FUNC_2(VAR_1, VAR_0)) != ((void*)0))
  FUNC_0(VAR_2->entry);
 FUNC_1(VAR_1->buckets);
 FUNC_1(VAR_1);
}
