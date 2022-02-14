
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(qla_host_t *VAR_5, uint32_t* VAR_6)
{





 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;

 for (VAR_9 = 0; VAR_9 < 10; VAR_9 ++) {
  switch (VAR_9) {

  case 0:
   VAR_13 = 0x06000000;
   VAR_14 = 512;
   VAR_15 = 3;
   break;

  case 1:
   VAR_13 = 0x04000000;
   VAR_14 = 32;
   VAR_15 = 2;
   break;

  case 2:
  case 3:
   VAR_13 = 0x04000000;
   VAR_14 = 4096;
   VAR_15 = 1;
   break;

  case 4:
   VAR_13 = 0x04000000;
   VAR_14 = 4;
   VAR_15 = 2;
   break;

  case 5:
   VAR_13 = 0x04000000;
   VAR_14 = 8;
   VAR_15 = 2;
   break;

  case 6:
   VAR_13 = 0x04000000;
   VAR_14 = 16;
   VAR_15 = 1;
   break;

  case 7:
   VAR_13 = 0x04000000;
   VAR_14 = 4;
   VAR_15 = 1;
   break;

  case 8:
   VAR_13 = 0x04000000;
   VAR_14 = 4;
   VAR_15 = 4;
   break;

  case 9:
   VAR_13 = 0x04000000;
   VAR_14 = 4;
   VAR_15 = 1;
   break;

  default:
   FUNC_2("Bad type!!! 0x%08x\n", VAR_9);
   VAR_14 = 0;
   VAR_15 = 0;
   break;
  }

  for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10 ++) {

   for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11 ++) {

    VAR_12 = VAR_13 | (VAR_9 << 16) |
     (VAR_10 << 4) | (VAR_11);

    FUNC_1(VAR_5, VAR_1, VAR_12);


    VAR_7 = 0;

    while ((VAR_7 & 0x40000000) == 0)
     VAR_7 =
      FUNC_0(VAR_5, VAR_1);


    VAR_8 = FUNC_0(VAR_5, VAR_0);


    *VAR_6 = VAR_7;
    VAR_6 ++;

    *VAR_6 = VAR_8;
    VAR_6 ++;
   }
  }
 }
}
