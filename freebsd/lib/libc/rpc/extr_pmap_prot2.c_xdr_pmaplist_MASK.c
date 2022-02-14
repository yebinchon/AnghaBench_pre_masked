
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int ;
struct pmaplist {struct pmaplist* pml_next; } ;
typedef int caddr_t ;
typedef scalar_t__ bool_t ;
struct TYPE_5__ {scalar_t__ x_op; } ;
typedef TYPE_1__ XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ) ;

bool_t
FUNC_3(XDR *VAR_4, struct pmaplist **VAR_5)
{





 bool_t VAR_6;
 int VAR_7;
 struct pmaplist **VAR_8 = ((void*)0);

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 VAR_7 = (VAR_4->x_op == VAR_2);

 for (;;) {
  VAR_6 = (bool_t)(*VAR_5 != ((void*)0));
  if (! FUNC_1(VAR_4, &VAR_6))
   return (VAR_0);
  if (! VAR_6)
   return (VAR_1);





  if (VAR_7)
   VAR_8 = &((*VAR_5)->pml_next);
  if (! FUNC_2(VAR_4, (caddr_t *)VAR_5,
      (u_int)sizeof(struct pmaplist), (xdrproc_t)VAR_3))
   return (VAR_0);
  VAR_5 = (VAR_7) ? VAR_8 : &((*VAR_5)->pml_next);
 }
}
