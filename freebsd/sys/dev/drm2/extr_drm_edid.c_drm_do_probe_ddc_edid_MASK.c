
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iic_msg {int slave; int len; unsigned char* buf; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct iic_msg*,unsigned char) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, unsigned char *VAR_5,
        int VAR_6, int VAR_7)
{
 unsigned char VAR_8 = VAR_6 * VAR_2;
 unsigned char VAR_9 = VAR_6 >> 1;
 unsigned char VAR_10 = VAR_9 ? 3 : 2;
 int VAR_11, VAR_12 = 5;







 do {
  struct iic_msg VAR_13[] = {
   {
    .slave = VAR_1 << 1,
    .flags = 0,
    .len = 1,
    .buf = &VAR_9,
   }, {
    .slave = VAR_0 << 1,
    .flags = 0,
    .len = 1,
    .buf = &VAR_8,
   }, {
    .slave = VAR_0 << 1,
    .flags = VAR_3,
    .len = VAR_7,
    .buf = VAR_5,
   }
  };





  VAR_11 = FUNC_1(VAR_4, &VAR_13[3 - VAR_10], VAR_10);

  if (VAR_11 != 0)
   FUNC_0("iicbus_transfer countdown %d error %d\n",
       VAR_12, VAR_11);
 } while (VAR_11 != 0 && --VAR_12);

 return VAR_11 == 0 ? 0 : -1;
}
