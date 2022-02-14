
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;
struct mpu401 {int dummy; } ;


 unsigned int FUNC_0 (struct sc_info*,int,int) ;

__attribute__((used)) static unsigned char
FUNC_1(struct mpu401 *VAR_0, void *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0((struct sc_info *)VAR_1, 0x18 + VAR_2, 1);
 return VAR_3;
}
