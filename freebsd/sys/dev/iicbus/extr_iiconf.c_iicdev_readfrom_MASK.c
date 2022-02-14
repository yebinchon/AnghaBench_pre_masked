
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct iic_msg {int flags; int len; void** buf; void* slave; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int ,int) ;
 int FUNC_2 (struct iic_msg*) ;

int
FUNC_3(device_t VAR_3, uint8_t VAR_4, void *VAR_5,
    uint16_t VAR_6, int VAR_7)
{
 struct iic_msg VAR_8[2];
 uint8_t VAR_9;





 VAR_9 = FUNC_0(VAR_3);

 VAR_8[0].slave = VAR_9;
 VAR_8[0].flags = VAR_2 | VAR_0;
 VAR_8[0].len = 1;
 VAR_8[0].buf = &VAR_4;

 VAR_8[1].slave = VAR_9;
 VAR_8[1].flags = VAR_1;
 VAR_8[1].len = VAR_6;
 VAR_8[1].buf = VAR_5;

 return (FUNC_1(VAR_3, VAR_8, FUNC_2(VAR_8), VAR_7));
}
