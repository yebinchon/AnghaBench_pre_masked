
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct iic_msg {int len; void** buf; int flags; void* slave; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint8_t VAR_3, void *VAR_4,
    uint16_t VAR_5, int VAR_6)
{
 struct iic_msg VAR_7;
 int VAR_8;
 uint8_t VAR_9;
 VAR_9 = FUNC_0(VAR_2);

 VAR_7.slave = VAR_9;
 VAR_7.flags = VAR_1;
 VAR_7.len = 1;
 VAR_7.buf = &VAR_3;

 if ((VAR_8 = FUNC_1(VAR_2, &VAR_7, 1, VAR_6)) != 0)
  return (VAR_8);

 VAR_7.slave = VAR_9;
 VAR_7.flags = VAR_0;
 VAR_7.len = VAR_5;
 VAR_7.buf = VAR_4;

 return (FUNC_1(VAR_2, &VAR_7, 1, VAR_6));
}
