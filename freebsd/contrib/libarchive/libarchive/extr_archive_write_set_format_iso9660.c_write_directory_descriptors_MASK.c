
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdd {scalar_t__ vdd_type; int max_depth; struct isoent* rootent; } ;
struct TYPE_4__ {struct isoent* first; } ;
struct TYPE_3__ {struct extr_rec* first; } ;
struct isoent {struct isoent* drnext; struct isoent* parent; TYPE_2__ subdirs; TYPE_1__ extr_rec_list; } ;
struct extr_rec {int offset; int buf; struct extr_rec* next; } ;
struct archive_write {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct archive_write*,struct vdd*,struct isoent*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 unsigned char* FUNC_3 (struct archive_write*) ;
 int FUNC_4 (struct archive_write*,int) ;

__attribute__((used)) static int
FUNC_5(struct archive_write *VAR_3, struct vdd *VAR_4)
{
 struct isoent *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_5 = VAR_4->rootent;
 do {
  struct extr_rec *VAR_8;

  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_7 < 0)
   return (VAR_7);
  if (VAR_4->vdd_type != VAR_2) {




   for (VAR_8 = VAR_5->extr_rec_list.first;
       VAR_8 != ((void*)0);
       VAR_8 = VAR_8->next) {
    unsigned char *VAR_9;

    VAR_9 = FUNC_3(VAR_3);
    FUNC_1(VAR_9, VAR_8->buf, VAR_8->offset);
    FUNC_2(VAR_9 + VAR_8->offset, 0,
        VAR_1 - VAR_8->offset);
    VAR_7 = FUNC_4(VAR_3, VAR_1);
    if (VAR_7 < 0)
     return (VAR_7);
   }
  }

  if (VAR_5->subdirs.first != ((void*)0) && VAR_6 + 1 < VAR_4->max_depth) {

   VAR_5 = VAR_5->subdirs.first;
   VAR_6++;
   continue;
  }
  while (VAR_5 != VAR_5->parent) {
   if (VAR_5->drnext == ((void*)0)) {

    VAR_5 = VAR_5->parent;
    VAR_6--;
   } else {
    VAR_5 = VAR_5->drnext;
    break;
   }
  }
 } while (VAR_5 != VAR_5->parent);

 return (VAR_0);
}
