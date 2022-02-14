
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int * tmpp; int * tmp; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfsd4_compoundargs*,int (*) (int *),int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static char *FUNC_5(struct nfsd4_compoundargs *VAR_1, __be32 *VAR_2, int VAR_3)
{
 if (VAR_2 == VAR_1->tmp) {
  VAR_2 = FUNC_3(VAR_3, VAR_0);
  if (!VAR_2)
   return ((void*)0);
  FUNC_4(VAR_2, VAR_1->tmp, VAR_3);
 } else {
  FUNC_0(VAR_2 != VAR_1->tmpp);
  VAR_1->tmpp = ((void*)0);
 }
 if (FUNC_1(VAR_1, FUNC_2, VAR_2)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 } else
  return (char *)VAR_2;
}
