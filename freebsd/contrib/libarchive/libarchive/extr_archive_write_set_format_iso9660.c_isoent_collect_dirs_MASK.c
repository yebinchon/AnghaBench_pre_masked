
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdd {int max_depth; int * pathtbl; struct isoent* rootent; } ;
struct TYPE_2__ {struct isoent* first; } ;
struct isoent {struct isoent* drnext; struct isoent* parent; TYPE_1__ subdirs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct isoent*) ;

__attribute__((used)) static int
FUNC_1(struct vdd *VAR_1, struct isoent *VAR_2, int VAR_3)
{
 struct isoent *VAR_4;

 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_1->rootent;
 VAR_4 = VAR_2;
 do {

  FUNC_0(&(VAR_1->pathtbl[VAR_3]), VAR_4);

  if (VAR_4->subdirs.first != ((void*)0) && VAR_3 + 1 < VAR_1->max_depth) {

   VAR_4 = VAR_4->subdirs.first;
   VAR_3++;
   continue;
  }
  while (VAR_4 != VAR_2) {
   if (VAR_4->drnext == ((void*)0)) {

    VAR_4 = VAR_4->parent;
    VAR_3--;
   } else {
    VAR_4 = VAR_4->drnext;
    break;
   }
  }
 } while (VAR_4 != VAR_2);

 return (VAR_0);
}
