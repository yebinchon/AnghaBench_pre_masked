
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrefinfo {int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 struct xrefinfo* FUNC_2 (int ,int ) ;

int
FUNC_3(phandle_t VAR_2, device_t VAR_3)
{
 struct xrefinfo *VAR_4;







 if (VAR_1) {
  if ((VAR_4 = FUNC_2(VAR_2, VAR_0)) == ((void*)0))
   FUNC_1(VAR_2, VAR_2, VAR_3);
  else
   VAR_4->dev = VAR_3;
  return (0);
 }
 FUNC_0("Attempt to register device before xreflist_init");
}
