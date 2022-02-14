
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * first; int ** last; scalar_t__ cnt; } ;
struct TYPE_6__ {struct isoent* first; struct isoent** last; scalar_t__ cnt; } ;
struct isoent {scalar_t__ dir; TYPE_4__* file; TYPE_3__ subdirs; TYPE_2__ children; struct isoent* parent; struct isoent* chnext; struct isoent* rr_child; struct isoent* rr_parent; } ;
struct TYPE_5__ {int * pathtbl; struct isoent* rootent; } ;
struct iso9660 {TYPE_1__ primary; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct TYPE_8__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (struct isoent*,struct isoent*) ;
 int FUNC_4 (struct isoent*,struct isoent*) ;
 struct isoent* FUNC_5 (struct isoent*) ;
 struct isoent* FUNC_6 (struct archive_write*,struct iso9660*,char*) ;
 int FUNC_7 (int *,struct isoent*) ;

__attribute__((used)) static int
FUNC_8(struct archive_write *VAR_3, struct isoent **VAR_4,
    struct isoent *VAR_5, struct isoent **VAR_6)
{
 struct iso9660 *VAR_7 = VAR_3->format_data;
 struct isoent *VAR_8, *VAR_9, *VAR_10;

 if ((VAR_8 = *VAR_4) == ((void*)0)) {
  struct isoent *VAR_11 = VAR_7->primary.rootent;



  VAR_8 = FUNC_6(VAR_3, VAR_7, "rr_moved");
  if (VAR_8 == ((void*)0)) {
   FUNC_2(&VAR_3->archive, VAR_2,
       "Can't allocate memory");
   return (VAR_0);
  }

  FUNC_3(VAR_11, VAR_8);
  FUNC_1(VAR_11->file->entry,
      FUNC_0(VAR_11->file->entry) + 1);

  FUNC_7(&(VAR_7->primary.pathtbl[1]), VAR_8);

  *VAR_4 = VAR_8;
 }




 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_3->archive, VAR_2,
      "Can't allocate memory");
  return (VAR_0);
 }

 VAR_9->rr_parent = VAR_5->parent;
 VAR_5->rr_child = VAR_9;



 if (VAR_5->children.first != ((void*)0)) {
  *VAR_9->children.last = VAR_5->children.first;
  VAR_9->children.last = VAR_5->children.last;
 }
 for (VAR_10 = VAR_9->children.first; VAR_10 != ((void*)0); VAR_10 = VAR_10->chnext)
  VAR_10->parent = VAR_9;
 VAR_9->children.cnt = VAR_5->children.cnt;
 VAR_5->children.cnt = 0;
 VAR_5->children.first = ((void*)0);
 VAR_5->children.last = &VAR_5->children.first;

 if (VAR_5->subdirs.first != ((void*)0)) {
  *VAR_9->subdirs.last = VAR_5->subdirs.first;
  VAR_9->subdirs.last = VAR_5->subdirs.last;
 }
 VAR_9->subdirs.cnt = VAR_5->subdirs.cnt;
 VAR_5->subdirs.cnt = 0;
 VAR_5->subdirs.first = ((void*)0);
 VAR_5->subdirs.last = &VAR_5->subdirs.first;




 FUNC_4(VAR_8, VAR_9);
 FUNC_1(VAR_8->file->entry,
     FUNC_0(VAR_8->file->entry) + 1);





 VAR_5->dir = 0;

 *VAR_6 = VAR_9;

 return (VAR_1);
}
