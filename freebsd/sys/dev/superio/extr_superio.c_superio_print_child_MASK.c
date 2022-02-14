
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int superio_dev_type_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1)
{
 superio_dev_type_t VAR_2;
 uint8_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_1);
 VAR_2 = FUNC_5(VAR_1);

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 VAR_4 += FUNC_3(" at %s ldn 0x%02x", FUNC_2(VAR_2), VAR_3);
 VAR_4 += FUNC_0(VAR_0, VAR_1);

 return (VAR_4);
}
