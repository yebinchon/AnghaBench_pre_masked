
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {int dummy; } ;
struct archive_write_disk {struct fixup_entry* current_fixup; } ;


 struct fixup_entry* FUNC_0 (struct archive_write_disk*,char const*) ;

__attribute__((used)) static struct fixup_entry *
FUNC_1(struct archive_write_disk *VAR_0, const char *VAR_1)
{
 if (VAR_0->current_fixup == ((void*)0))
  VAR_0->current_fixup = FUNC_0(VAR_0, VAR_1);
 return (VAR_0->current_fixup);
}
