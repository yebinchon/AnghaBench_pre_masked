
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* node_p ;
typedef int * hook_p ;
struct TYPE_13__ {int nd_flags; TYPE_1__* nd_type; int nd_hooks; } ;
struct TYPE_12__ {int (* shutdown ) (TYPE_2__*) ;int (* close ) (TYPE_2__*) ;} ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

void
FUNC_10(node_p VAR_3, hook_p VAR_4, void *VAR_5, int VAR_6)
{
 hook_p VAR_7;


 if ((VAR_3->nd_flags & VAR_0) != 0)
  return;

 if (VAR_3 == &VAR_2) {
  FUNC_7 ("shutdown called on deadnode\n");
  return;
 }


 FUNC_2(VAR_3);







 VAR_3->nd_flags |= VAR_1|VAR_0;


 if (VAR_3->nd_type && VAR_3->nd_type->close)
  (*VAR_3->nd_type->close)(VAR_3);


 while ((VAR_7 = FUNC_0(&VAR_3->nd_hooks)) != ((void*)0))
  FUNC_4(VAR_7);
 FUNC_5(VAR_3);


 if (VAR_3->nd_type && VAR_3->nd_type->shutdown) {
  (*VAR_3->nd_type->shutdown)(VAR_3);
  if (FUNC_1(VAR_3)) {
   VAR_3->nd_flags &= ~(VAR_1|VAR_0);
   FUNC_3(VAR_3);
   return;
  }
 } else {
  FUNC_3(VAR_3);
 }

 FUNC_6(VAR_3);
 FUNC_3(VAR_3);
}
