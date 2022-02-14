
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgb_ident {scalar_t__ vendor; scalar_t__ device; int * desc; } ;
typedef int device_t ;


 struct cxgb_ident* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct cxgb_ident *
FUNC_2(device_t VAR_1)
{
 struct cxgb_ident *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->desc != ((void*)0); VAR_2++) {
  if ((VAR_2->vendor == FUNC_1(VAR_1)) &&
      (VAR_2->device == FUNC_0(VAR_1))) {
   return (VAR_2);
  }
 }
 return (((void*)0));
}
