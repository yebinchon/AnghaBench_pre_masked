
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrefinfo {int * dev; } ;
typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 struct xrefinfo* FUNC_1 (int ,int ) ;

device_t
FUNC_2(phandle_t VAR_2)
{
 struct xrefinfo *VAR_3;

 if (VAR_1) {
  if ((VAR_3 = FUNC_1(VAR_2, VAR_0)) == ((void*)0))
   return (((void*)0));
  return (VAR_3->dev);
 }
 FUNC_0("Attempt to find device before xreflist_init");
}
