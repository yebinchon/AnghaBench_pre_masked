
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   FUNC_2(VAR_2, VAR_3);

 FUNC_1(VAR_1, "pci", -1);
 FUNC_0(VAR_1);
 return (0);
}
