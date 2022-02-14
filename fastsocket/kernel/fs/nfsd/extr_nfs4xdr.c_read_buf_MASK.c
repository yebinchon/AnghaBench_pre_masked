
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct nfsd4_compoundargs {unsigned int pagelen; char* tmp; char* tmpp; scalar_t__ p; scalar_t__ end; int * pagelist; } ;
typedef char __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (char*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static __be32 *FUNC_5(struct nfsd4_compoundargs *VAR_2, u32 VAR_3)
{



 unsigned int VAR_4 = (char *)VAR_2->end - (char *)VAR_2->p;
 __be32 *VAR_5;
 if (VAR_4 + VAR_2->pagelen < VAR_3)
  return ((void*)0);
 if (VAR_4 + VAR_1 < VAR_3)
  return ((void*)0);

 if (VAR_3 <= sizeof(VAR_2->tmp))
  VAR_5 = VAR_2->tmp;
 else {
  FUNC_1(VAR_2->tmpp);
  VAR_5 = VAR_2->tmpp = FUNC_2(VAR_3, VAR_0);
  if (!VAR_5)
   return ((void*)0);

 }





 FUNC_3(VAR_5, VAR_2->p, VAR_4);

 VAR_2->p = FUNC_4(VAR_2->pagelist[0]);
 VAR_2->pagelist++;
 if (VAR_2->pagelen < VAR_1) {
  VAR_2->end = VAR_2->p + (VAR_2->pagelen>>2);
  VAR_2->pagelen = 0;
 } else {
  VAR_2->end = VAR_2->p + (VAR_1>>2);
  VAR_2->pagelen -= VAR_1;
 }
 FUNC_3(((char*)VAR_5)+VAR_4, VAR_2->p, (VAR_3 - VAR_4));
 VAR_2->p += FUNC_0(VAR_3 - VAR_4);
 return VAR_5;
}
