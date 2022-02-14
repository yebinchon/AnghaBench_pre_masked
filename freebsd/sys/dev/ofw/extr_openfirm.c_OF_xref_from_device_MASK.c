
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrefinfo {int xref; } ;
typedef int phandle_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 struct xrefinfo* FUNC_1 (uintptr_t,int ) ;

phandle_t
FUNC_2(device_t VAR_2)
{
 struct xrefinfo *VAR_3;

 if (VAR_1) {
  if ((VAR_3 = FUNC_1((uintptr_t)VAR_2, VAR_0)) == ((void*)0))
   return (0);
  return (VAR_3->xref);
 }
 FUNC_0("Attempt to find xref before xreflist_init");
}
