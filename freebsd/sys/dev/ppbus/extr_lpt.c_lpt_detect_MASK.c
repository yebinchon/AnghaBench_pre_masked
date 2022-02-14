
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 device_t VAR_2 = FUNC_0(VAR_1);

 static u_char VAR_3[18] = {
  0x55,
  0xaa,
  0xfe, 0xfd, 0xfb, 0xf7,
  0xef, 0xdf, 0xbf, 0x7f,
  0x01, 0x02, 0x04, 0x08,
  0x10, 0x20, 0x40, 0x80
 };
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = 1;

 FUNC_5(VAR_2);
 if ((VAR_5 = FUNC_4(VAR_1, VAR_0))) {
  FUNC_6(VAR_2);
  FUNC_1(VAR_1, "cannot alloc ppbus (%d)!\n", VAR_5);
  return (0);
 }

 for (VAR_4 = 0; VAR_4 < 18 && VAR_6; VAR_4++)
  if (!FUNC_2(VAR_2, VAR_3[VAR_4], 0xff)) {
   VAR_6 = 0;
   break;
  }


 FUNC_8(VAR_2, 0);
 FUNC_7(VAR_2, 0);

 FUNC_3(VAR_1);
 FUNC_6(VAR_2);

 return (VAR_6);
}
