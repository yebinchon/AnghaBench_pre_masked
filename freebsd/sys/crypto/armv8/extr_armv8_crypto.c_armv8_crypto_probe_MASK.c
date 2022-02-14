
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int device_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 uint64_t VAR_3;
 int VAR_4 = VAR_0;

 VAR_3 = FUNC_1(VAR_1);

 switch (FUNC_0(VAR_3)) {
 case 129:
 case 128:
  VAR_4 = 0;
  break;
 }

 FUNC_2(VAR_2, "AES-CBC");



 return (VAR_4);
}
