
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

__attribute__((used)) static u_int32_t
FUNC_3(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, int VAR_6)
{
 uint32_t VAR_7 = 0;
 uint64_t VAR_8;
 int VAR_9 = VAR_5/sizeof(uint32_t);

 VAR_8 = FUNC_1(FUNC_0(0, VAR_2, VAR_3, VAR_4));
 if ((VAR_6 == 2) && (VAR_5 & 1))
  return 0xFFFFFFFF;
 else if ((VAR_6 == 4) && (VAR_5 & 3))
  return 0xFFFFFFFF;






 if (VAR_2 == 0 && VAR_9 == 0xf && VAR_3 % 8 > 1)
  VAR_9 = VAR_0;

 VAR_7 = FUNC_2(VAR_8, VAR_9);
 if (VAR_6 == 1)
  return ((VAR_7 >> ((VAR_5 & 3) << 3)) & 0xff);
 else if (VAR_6 == 2)
  return ((VAR_7 >> ((VAR_5 & 3) << 3)) & 0xffff);
 else
  return (VAR_7);
}
