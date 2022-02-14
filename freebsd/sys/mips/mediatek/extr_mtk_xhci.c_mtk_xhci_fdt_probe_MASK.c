
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (!FUNC_2(VAR_3))
  return (VAR_1);

 if (!FUNC_1(VAR_3, "mediatek,mt8173-xhci"))
  return (VAR_1);

 FUNC_0(VAR_3, VAR_2);

 return (VAR_0);
}
