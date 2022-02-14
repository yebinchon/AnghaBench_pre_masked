
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8)
{
 uint32_t VAR_9, VAR_10;


 VAR_9 = FUNC_2(VAR_8, VAR_6, 1);

 if ((VAR_9 & VAR_1) == 0) {


  FUNC_3(VAR_8, VAR_2,
      VAR_4, 1);

  FUNC_0(100);

  FUNC_3(VAR_8, VAR_2,
      VAR_4 | VAR_5, 1);

  FUNC_0(5);

  FUNC_3(VAR_8, VAR_2,
      VAR_4, 1);
 } else {


  FUNC_3(VAR_8, VAR_2,
      VAR_4, 1);
  FUNC_0(100);

  FUNC_3(VAR_8, VAR_2,
      VAR_4 | VAR_7, 1);

  FUNC_0(5);

  FUNC_3(VAR_8, VAR_2,
      VAR_4, 1);

  FUNC_0(5);
 }


 FUNC_3(VAR_8, VAR_2, VAR_3, 1);


 for (VAR_10 = 0; VAR_10 < 2000; VAR_10++) {
  VAR_9 = FUNC_2(VAR_8, VAR_6, 1);
  if (VAR_9 & VAR_1)
   return (0);
  FUNC_0(5000);
 }
 FUNC_1(VAR_8, "primary codec not ready (cnt = 0x%02x)\n", VAR_10);
 return (VAR_0);
}
