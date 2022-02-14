
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(FUNC_4(VAR_2), VAR_2, VAR_1);
 if (VAR_3 == VAR_0)
  return(VAR_3);

 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 if (VAR_3 == 0)
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_2, 0, 0);
 FUNC_3(VAR_2);
 if (!VAR_3)
  FUNC_5(VAR_2, "Aironet ISA4500/ISA4800");
 return (VAR_3);
}
