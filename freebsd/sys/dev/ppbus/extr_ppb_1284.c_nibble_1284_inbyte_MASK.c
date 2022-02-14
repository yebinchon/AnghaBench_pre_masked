
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ,int ,int) ;
 char FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(device_t VAR_6, char *VAR_7)
{
 char VAR_8[2];
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {


  FUNC_4(VAR_6, (VAR_5 | VAR_0) & ~(VAR_3 | VAR_2));




  if ((VAR_10 = FUNC_0(VAR_6, VAR_4, 0))) {
   FUNC_2(VAR_6, VAR_1, 9);
   goto error;
  }


  VAR_8[VAR_9] = FUNC_3(VAR_6);


  FUNC_4(VAR_6, VAR_5 & ~(VAR_0 | VAR_3 | VAR_2));


  if ((VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_4))) {
   FUNC_2(VAR_6, VAR_1, 11);
   goto error;
  }
 }

 *VAR_7 = ((FUNC_1(VAR_8[1]) << 4) & 0xf0) |
    (FUNC_1(VAR_8[0]) & 0x0f);

error:
 return (VAR_10);
}
