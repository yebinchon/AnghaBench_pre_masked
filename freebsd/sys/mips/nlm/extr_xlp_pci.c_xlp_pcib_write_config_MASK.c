
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int ;
typedef int device_t ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, u_int32_t VAR_6, int VAR_7)
{
 uint64_t VAR_8;
 uint32_t VAR_9 = 0;
 int VAR_10 = VAR_5 / sizeof(uint32_t);

 VAR_8 = FUNC_1(FUNC_0(0, VAR_2, VAR_3, VAR_4));
 if ((VAR_7 == 2) && (VAR_5 & 1))
  return;
 else if ((VAR_7 == 4) && (VAR_5 & 3))
  return;

 if (VAR_7 == 1) {
  VAR_9 = FUNC_2(VAR_8, VAR_10);
  VAR_9 = (VAR_9 & ~(0xff << ((VAR_5 & 3) << 3))) |
      (VAR_6 << ((VAR_5 & 3) << 3));
 } else if (VAR_7 == 2) {
  VAR_9 = FUNC_2(VAR_8, VAR_10);
  VAR_9 = (VAR_9 & ~(0xffff << ((VAR_5 & 3) << 3))) |
      (VAR_6 << ((VAR_5 & 3) << 3));
 } else {
  VAR_9 = VAR_6;
 }




 if (VAR_2 == 0 && VAR_10 == 0xf && VAR_3 % 8 > 1)
  VAR_10 = VAR_0;
 FUNC_3(VAR_8, VAR_10, VAR_9);
}
