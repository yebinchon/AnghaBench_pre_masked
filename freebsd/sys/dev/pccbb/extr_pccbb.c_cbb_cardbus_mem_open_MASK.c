
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, int VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 int VAR_8;
 int VAR_9;

 if ((VAR_5 < 0) || (VAR_5 > 1)) {
  FUNC_0((VAR_4,
      "cbb_cardbus_mem_open: window out of range %d\n", VAR_5));
  return (VAR_2);
 }

 VAR_8 = VAR_5 * 8 + VAR_0;
 VAR_9 = VAR_5 * 8 + VAR_1;

 FUNC_2(VAR_4, VAR_8, VAR_6, 4);
 FUNC_2(VAR_4, VAR_9, VAR_7, 4);
 FUNC_1(VAR_4, VAR_3);
 return (0);
}
