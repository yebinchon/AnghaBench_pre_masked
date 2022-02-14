
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path_table {scalar_t__ cnt; struct isoent* first; } ;
struct TYPE_5__ {struct isoent* first; } ;
struct TYPE_4__ {struct isoent* first; } ;
struct isoent {struct isoent* ptnext; struct isoent* drnext; TYPE_2__ subdirs; int dir; TYPE_1__ children; } ;
struct TYPE_6__ {struct isoent* rootent; struct path_table* pathtbl; } ;
struct iso9660 {TYPE_3__ primary; } ;
struct archive_write {struct iso9660* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isoent*,struct isoent*) ;
 int FUNC_1 (TYPE_3__*,struct isoent*,int) ;
 struct isoent* FUNC_2 (struct isoent*,char*) ;
 int FUNC_3 (struct isoent*,struct isoent*) ;
 int FUNC_4 (struct archive_write*,struct isoent**,struct isoent*,struct isoent**) ;
 struct isoent* FUNC_5 (struct path_table*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_2)
{
 struct iso9660 *VAR_3 = VAR_2->format_data;
 struct path_table *VAR_4;
 struct isoent *VAR_5, *VAR_6;
 struct isoent *VAR_7, *VAR_8;
 int VAR_9;

 VAR_4 = &(VAR_3->primary.pathtbl[VAR_1-1]);

 if (VAR_4->cnt == 0)
  return (VAR_0);

 VAR_5 = VAR_3->primary.rootent;


 VAR_6 = FUNC_2(VAR_5, "rr_moved");
 if (VAR_6 != ((void*)0) &&
     VAR_6 != VAR_5->children.first) {





  FUNC_3(VAR_5, VAR_6);


  FUNC_0(VAR_5, VAR_6);
 }





 VAR_7 = VAR_4->first;
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_5(VAR_4);
  for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->ptnext) {
   struct isoent *VAR_10;
   struct isoent *VAR_11;

   if (!VAR_7->dir)
    continue;
   for (VAR_10 = VAR_7->subdirs.first;
       VAR_10 != ((void*)0); VAR_10 = VAR_10->drnext) {
    VAR_9 = FUNC_4(VAR_2, &VAR_6,
        VAR_10, &VAR_11);
    if (VAR_9 < 0)
     return (VAR_9);
    FUNC_1(&(VAR_3->primary),
        VAR_11, 2);
   }
  }



  VAR_7 = VAR_8->ptnext;
 }

 return (VAR_0);
}
