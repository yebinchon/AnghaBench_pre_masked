
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6 (uint32_t VAR_10, uint8_t VAR_11)
{
 switch (VAR_9)
 {
 case 129:
 case 128:
  while (FUNC_2(VAR_7) & VAR_0)
   FUNC_0(VAR_8);
  FUNC_3(VAR_5, 1);
  FUNC_3(VAR_6, VAR_10 & 0xff);
  FUNC_3(VAR_2, (VAR_10 >> 8) & 0xff);
  FUNC_3(VAR_3, (VAR_10 >> 16) & 0xff);
  FUNC_3(VAR_4, ((VAR_10 >> 24) & 0xff) | 0xe0);
  FUNC_3(VAR_1, VAR_11);
  break;
 case 130:
 default:
  while (FUNC_1(VAR_7) & VAR_0)
   FUNC_0(VAR_8);
  FUNC_4(VAR_5, 1 | ((VAR_10 & 0xff) << 8));
  FUNC_4(VAR_2, ((VAR_10 >> 8) & 0xff) | (((VAR_10 >> 16) & 0xff) << 8));
  FUNC_4(VAR_4, (((VAR_10 >> 24) & 0xff) | 0xe0) | (VAR_11 << 8));
  break;
 }

 return (FUNC_5());
}
