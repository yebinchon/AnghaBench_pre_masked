
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,int *) ;
typedef int u_int ;
typedef int * caddr_t ;
typedef int bool_t ;
struct TYPE_6__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*) ;

bool_t
FUNC_5(XDR *VAR_2, caddr_t *VAR_3, u_int VAR_4, xdrproc_t VAR_5)






{
 caddr_t VAR_6 = *VAR_3;
 bool_t VAR_7;

 if (VAR_6 == ((void*)0))
  switch (VAR_2->x_op) {
  case 128:
   return (VAR_1);

  case 130:
   *VAR_3 = VAR_6 = (caddr_t) FUNC_0(VAR_4);
   if (VAR_6 == ((void*)0)) {
    FUNC_4("xdr_reference: out of memory");
    return (VAR_0);
   }
   FUNC_2(VAR_6, 0, VAR_4);
   break;

  case 129:
   break;
  }

 VAR_7 = (*VAR_5)(VAR_2, VAR_6);

 if (VAR_2->x_op == 128) {
  FUNC_1(VAR_6, VAR_4);
  *VAR_3 = ((void*)0);
 }
 return (VAR_7);
}
