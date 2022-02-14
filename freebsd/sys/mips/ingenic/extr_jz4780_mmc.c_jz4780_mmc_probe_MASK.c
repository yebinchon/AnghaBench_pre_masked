
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{

 if (!FUNC_3(VAR_2))
  return (VAR_1);
 if (!FUNC_2(VAR_2, "ingenic,jz4780-mmc"))
  return (VAR_1);
 if (FUNC_0(VAR_2) > 0)
  return (VAR_1);
 FUNC_1(VAR_2, "Ingenic JZ4780 Integrated MMC/SD controller");

 return (VAR_0);
}
