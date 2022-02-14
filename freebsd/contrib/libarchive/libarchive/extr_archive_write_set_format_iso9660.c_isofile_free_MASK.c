
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct isofile* next; } ;
struct isofile {int symlink; int basename_utf16; int basename; int parentdir; int entry; struct isofile* next; TYPE_1__ content; } ;
struct content {int symlink; int basename_utf16; int basename; int parentdir; int entry; struct content* next; TYPE_1__ content; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct isofile*) ;

__attribute__((used)) static void
FUNC_3(struct isofile *VAR_0)
{
 struct content *VAR_1, *VAR_2;

 VAR_1 = VAR_0->content.next;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_2(VAR_2);
 }
 FUNC_0(VAR_0->entry);
 FUNC_1(&(VAR_0->parentdir));
 FUNC_1(&(VAR_0->basename));
 FUNC_1(&(VAR_0->basename_utf16));
 FUNC_1(&(VAR_0->symlink));
 FUNC_2(VAR_0);
}
