
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdd {int max_depth; scalar_t__ total_dir_block; struct isoent* rootent; } ;
struct TYPE_2__ {struct isoent* first; } ;
struct isoent {int dir_location; struct isoent* drnext; struct isoent* parent; TYPE_1__ subdirs; scalar_t__ dir_block; } ;
struct iso9660 {int dummy; } ;


 scalar_t__ FUNC_0 (struct iso9660*,struct vdd*,struct isoent*,int) ;
 int FUNC_1 (struct isoent*,int) ;

__attribute__((used)) static void
FUNC_2(struct iso9660 *VAR_0, int VAR_1,
    struct vdd *VAR_2)
{
 struct isoent *VAR_3;
 int VAR_4;

 VAR_2->total_dir_block = 0;
 VAR_4 = 0;
 VAR_3 = VAR_2->rootent;
 do {
  int VAR_5;

  VAR_3->dir_block = FUNC_0(
      VAR_0, VAR_2, VAR_3, VAR_4);
  VAR_2->total_dir_block += VAR_3->dir_block;
  VAR_3->dir_location = VAR_1;
  VAR_1 += VAR_3->dir_block;
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  VAR_2->total_dir_block += VAR_5;
  VAR_1 += VAR_5;

  if (VAR_3->subdirs.first != ((void*)0) && VAR_4 + 1 < VAR_2->max_depth) {

   VAR_3 = VAR_3->subdirs.first;
   VAR_4++;
   continue;
  }
  while (VAR_3 != VAR_3->parent) {
   if (VAR_3->drnext == ((void*)0)) {

    VAR_3 = VAR_3->parent;
    VAR_4--;
   } else {
    VAR_3 = VAR_3->drnext;
    break;
   }
  }
 } while (VAR_3 != VAR_3->parent);
}
