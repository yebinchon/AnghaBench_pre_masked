
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct links_entry {unsigned int links; struct archive_entry* canonical; } ;
struct archive_entry_linkresolver {TYPE_1__* spare; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {int entry; int canonical; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct links_entry* FUNC_2 (struct archive_entry_linkresolver*,int ) ;

struct archive_entry *
FUNC_3(struct archive_entry_linkresolver *VAR_1,
    unsigned int *VAR_2)
{
 struct archive_entry *VAR_3;
 struct links_entry *VAR_4;


 if (VAR_1->spare != ((void*)0)) {
  FUNC_0(VAR_1->spare->canonical);
  FUNC_0(VAR_1->spare->entry);
  FUNC_1(VAR_1->spare);
  VAR_1->spare = ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4 != ((void*)0)) {
  VAR_3 = VAR_4->canonical;
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_4->links;
  VAR_4->canonical = ((void*)0);
 } else {
  VAR_3 = ((void*)0);
  if (VAR_2 != ((void*)0))
   *VAR_2 = 0;
 }
 return (VAR_3);
}
