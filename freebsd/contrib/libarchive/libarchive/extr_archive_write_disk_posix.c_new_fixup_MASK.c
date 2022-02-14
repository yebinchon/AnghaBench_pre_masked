
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {int name; scalar_t__ fixup; struct fixup_entry* next; } ;
struct archive_write_disk {struct fixup_entry* fixup_list; int archive; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct fixup_entry *
FUNC_3(struct archive_write_disk *VAR_1, const char *VAR_2)
{
 struct fixup_entry *VAR_3;

 VAR_3 = (struct fixup_entry *)FUNC_1(1, sizeof(struct fixup_entry));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(&VAR_1->archive, VAR_0,
      "Can't allocate memory for a fixup");
  return (((void*)0));
 }
 VAR_3->next = VAR_1->fixup_list;
 VAR_1->fixup_list = VAR_3;
 VAR_3->fixup = 0;
 VAR_3->name = FUNC_2(VAR_2);
 return (VAR_3);
}
