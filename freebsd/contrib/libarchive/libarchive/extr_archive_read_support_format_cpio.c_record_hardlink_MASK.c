
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct links_entry {scalar_t__ dev; scalar_t__ ino; scalar_t__ links; struct links_entry* name; struct links_entry* previous; struct links_entry* next; } ;
struct cpio {struct links_entry* links_head; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*,struct links_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (struct links_entry*) ;
 scalar_t__ FUNC_7 (int) ;
 struct links_entry* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct archive_read *VAR_3,
    struct cpio *VAR_4, struct archive_entry *VAR_5)
{
 struct links_entry *VAR_6;
 dev_t VAR_7;
 int64_t VAR_8;

 if (FUNC_3(VAR_5) <= 1)
  return (VAR_1);

 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = FUNC_2(VAR_5);





 for (VAR_6 = VAR_4->links_head; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->dev == VAR_7 && VAR_6->ino == VAR_8) {
   FUNC_0(VAR_5, VAR_6->name);

   if (--VAR_6->links <= 0) {
    if (VAR_6->previous != ((void*)0))
     VAR_6->previous->next = VAR_6->next;
    if (VAR_6->next != ((void*)0))
     VAR_6->next->previous = VAR_6->previous;
    if (VAR_4->links_head == VAR_6)
     VAR_4->links_head = VAR_6->next;
    FUNC_6(VAR_6->name);
    FUNC_6(VAR_6);
   }

   return (VAR_1);
  }
 }

 VAR_6 = (struct links_entry *)FUNC_7(sizeof(struct links_entry));
 if (VAR_6 == ((void*)0)) {
  FUNC_5(&VAR_3->archive,
      VAR_2, "Out of memory adding file to list");
  return (VAR_0);
 }
 if (VAR_4->links_head != ((void*)0))
  VAR_4->links_head->previous = VAR_6;
 VAR_6->next = VAR_4->links_head;
 VAR_6->previous = ((void*)0);
 VAR_4->links_head = VAR_6;
 VAR_6->dev = VAR_7;
 VAR_6->ino = VAR_8;
 VAR_6->links = FUNC_3(VAR_5) - 1;
 VAR_6->name = FUNC_8(FUNC_4(VAR_5));
 if (VAR_6->name == ((void*)0)) {
  FUNC_5(&VAR_3->archive,
      VAR_2, "Out of memory adding file to list");
  return (VAR_0);
 }

 return (VAR_1);
}
