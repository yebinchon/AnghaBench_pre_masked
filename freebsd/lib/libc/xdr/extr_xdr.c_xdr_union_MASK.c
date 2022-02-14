
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xdrproc_t ) (int *,char*) ;
struct xdr_discrim {scalar_t__ value; int (* proc ) (int *,char*) ;} ;
typedef scalar_t__ enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,scalar_t__*) ;

bool_t
FUNC_4(XDR *VAR_1, enum_t *VAR_2, char *VAR_3, const struct xdr_discrim *VAR_4, xdrproc_t VAR_5)







{
 enum_t VAR_6;




 if (! FUNC_3(VAR_1, VAR_2)) {
  return (VAR_0);
 }
 VAR_6 = *VAR_2;





 for (; VAR_4->proc != FUNC_0; VAR_4++) {
  if (VAR_4->value == VAR_6)
   return ((*(VAR_4->proc))(VAR_1, VAR_3));
 }




 return ((VAR_5 == FUNC_0) ? VAR_0 :
     (*VAR_5)(VAR_1, VAR_3));
}
