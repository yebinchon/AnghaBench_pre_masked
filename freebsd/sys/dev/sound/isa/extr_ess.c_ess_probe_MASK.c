
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 uintptr_t VAR_0 ;
 uintptr_t FUNC_0 (int ,int ,int,uintptr_t*) ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 uintptr_t VAR_4, VAR_5, VAR_6, VAR_7;


 VAR_6 = FUNC_0(FUNC_1(VAR_3), VAR_3, 0, &VAR_4);
 if (VAR_4 != VAR_2)
  return (VAR_1);

 VAR_6 = FUNC_0(FUNC_1(VAR_3), VAR_3, 1, &VAR_5);
 VAR_7 = (VAR_5 & 0xffff0000) >> 16;
 if (!(VAR_7 & VAR_0))
  return (VAR_1);

     FUNC_2(VAR_3, "ESS 18xx DSP");

 return 0;
}
