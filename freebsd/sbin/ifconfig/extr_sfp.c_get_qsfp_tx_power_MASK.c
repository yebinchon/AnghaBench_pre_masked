
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xbuf ;
typedef int uint8_t ;
struct i2c_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_info*,char*,size_t,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct i2c_info*,int ,scalar_t__,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct i2c_info *VAR_2, char *VAR_3, size_t VAR_4, int VAR_5)
{
 uint8_t VAR_6[2];

 FUNC_1(VAR_6, 0, sizeof(VAR_6));
 FUNC_2(VAR_2, VAR_0, VAR_1 + (VAR_5-1)*2, 2, VAR_6);
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
}
