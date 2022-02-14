
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
struct xrefinfo {int xref; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 scalar_t__ VAR_1 ;
 struct xrefinfo* FUNC_1 (int ,int ) ;

phandle_t
FUNC_2(phandle_t VAR_2)
{
 struct xrefinfo *VAR_3;
 phandle_t VAR_4;

 if (VAR_1) {
  if ((VAR_3 = FUNC_1(VAR_2, VAR_0)) == ((void*)0))
   return (VAR_2);
  return (VAR_3->xref);
 }

 if (FUNC_0(VAR_2, "phandle", &VAR_4, sizeof(VAR_4)) == -1 &&
     FUNC_0(VAR_2, "ibm,phandle", &VAR_4, sizeof(VAR_4)) == -1 &&
     FUNC_0(VAR_2, "linux,phandle", &VAR_4, sizeof(VAR_4)) == -1)
  return (VAR_2);
 return (VAR_4);
}
