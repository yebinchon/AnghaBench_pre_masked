
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct isoent* first; } ;
struct isoent {struct isoent* chnext; struct isoent* parent; TYPE_1__ children; scalar_t__ dir; } ;
struct archive_write {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct isoent*,struct isoent*) ;
 struct isoent* FUNC_2 (struct isoent*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_3, struct isoent **VAR_4,
    struct isoent *VAR_5)
{
 struct isoent *VAR_6, *VAR_7, *VAR_8;

 VAR_6 = VAR_5;
 VAR_7 = ((void*)0);
 do {
  VAR_8 = FUNC_2(VAR_6);
  if (VAR_8 == ((void*)0)) {
   FUNC_0(&VAR_3->archive, VAR_2,
       "Can't allocate memory");
   return (VAR_0);
  }
  if (VAR_7 == ((void*)0)) {
   *VAR_4 = VAR_7 = VAR_8;
   VAR_8->parent = VAR_7;
  } else
   FUNC_1(VAR_7, VAR_8);
  if (VAR_6->dir && VAR_6->children.first != ((void*)0)) {

   VAR_6 = VAR_6->children.first;
   VAR_7 = VAR_8;
   continue;
  }
  while (VAR_6 != VAR_6->parent) {
   if (VAR_6->chnext == ((void*)0)) {

    VAR_6 = VAR_6->parent;
    VAR_7 = VAR_7->parent;
   } else {
    VAR_6 = VAR_6->chnext;
    break;
   }
  }
 } while (VAR_6 != VAR_6->parent);

 return (VAR_1);
}
