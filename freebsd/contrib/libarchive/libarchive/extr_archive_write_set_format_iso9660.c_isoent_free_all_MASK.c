
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct isoent* first; } ;
struct isoent {struct isoent* chnext; struct isoent* parent; TYPE_1__ children; scalar_t__ dir; } ;


 int FUNC_0 (struct isoent*) ;

__attribute__((used)) static void
FUNC_1(struct isoent *VAR_0)
{
 struct isoent *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = VAR_0;
 for (;;) {
  if (VAR_1->dir) {
   if (VAR_1->children.first != ((void*)0)) {

    VAR_1 = VAR_1->children.first;
    continue;
   }
  }
  for (;;) {
   VAR_2 = VAR_1;
   if (VAR_1->chnext == ((void*)0)) {

    VAR_1 = VAR_1->parent;
    FUNC_0(VAR_2);
    if (VAR_1 == VAR_2)
     return;
   } else {
    VAR_1 = VAR_1->chnext;
    FUNC_0(VAR_2);
    break;
   }
  }
 }
}
