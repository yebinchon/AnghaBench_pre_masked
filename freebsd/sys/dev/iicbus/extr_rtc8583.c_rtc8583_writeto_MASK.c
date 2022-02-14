
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iic_msg {int * buf; scalar_t__ len; int flags; int slave; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int,int) ;
 int FUNC_2 (int *,void*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint8_t VAR_3, void *VAR_4,
    uint16_t VAR_5, int VAR_6)
{
 struct iic_msg VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9[VAR_1];

 VAR_8 = FUNC_0(VAR_2);

 VAR_9[0] = VAR_3;
 FUNC_2(VAR_9 + 1, VAR_4, VAR_5);
 VAR_7.slave = VAR_8;
 VAR_7.flags = VAR_0;
 VAR_7.len = 1 + VAR_5;
 VAR_7.buf = VAR_9;

 return (FUNC_1(VAR_2, &VAR_7, 1, VAR_6));
}
