
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int location; } ;
struct isofile {int write_content; TYPE_3__ content; int entry; int * hardlink_target; scalar_t__ boot; } ;
struct TYPE_4__ {int cnt; } ;
struct isoent {struct isofile* file; scalar_t__ dir; TYPE_1__ children; struct isoent** children_sorted; } ;
struct TYPE_5__ {struct isoent* boot; } ;
struct iso9660 {TYPE_2__ el_torito; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct iso9660 *VAR_1, struct isoent *VAR_2,
    int *VAR_3)
{
 struct isoent **VAR_4;
 int VAR_5;

 if (VAR_2->children.cnt == 0)
  return;

 VAR_4 = VAR_2->children_sorted;
 for (VAR_5 = 0; VAR_5 < VAR_2->children.cnt; VAR_5++) {
  struct isoent *VAR_6;
  struct isofile *VAR_7;

  VAR_6 = VAR_4[VAR_5];
  if (VAR_6->dir)
   continue;
  if (VAR_6 == VAR_1->el_torito.boot)
   continue;
  VAR_7 = VAR_6->file;
  if (VAR_7->boot || VAR_7->hardlink_target != ((void*)0))
   continue;
  if (FUNC_0(VAR_7->entry) == VAR_0 ||
      VAR_7->content.size == 0) {




   VAR_7->content.location = (*VAR_3)--;
   continue;
  }

  VAR_7->write_content = 1;
 }
}
