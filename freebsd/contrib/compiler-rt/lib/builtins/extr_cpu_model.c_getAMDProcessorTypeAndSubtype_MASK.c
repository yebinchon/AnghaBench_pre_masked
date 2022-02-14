
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;

__attribute__((used)) static void FUNC_0(unsigned VAR_14, unsigned VAR_15,
                                          unsigned VAR_16, unsigned VAR_17,
                                          unsigned *VAR_18, unsigned *VAR_19) {



  switch (VAR_14) {
  case 16:
    *VAR_18 = VAR_0;
    switch (VAR_15) {
    case 2:
      *VAR_19 = VAR_1;
      break;
    case 4:
      *VAR_19 = VAR_3;
      break;
    case 8:
      *VAR_19 = VAR_2;
      break;
    }
    break;
  case 20:
    *VAR_18 = VAR_12;
    break;
  case 21:
    *VAR_18 = VAR_4;
    if (VAR_15 >= 0x60 && VAR_15 <= 0x7f) {
      *VAR_19 = VAR_8;
      break;
    }
    if (VAR_15 >= 0x30 && VAR_15 <= 0x3f) {
      *VAR_19 = VAR_7;
      break;
    }
    if ((VAR_15 >= 0x10 && VAR_15 <= 0x1f) || VAR_15 == 0x02) {
      *VAR_19 = VAR_6;
      break;
    }
    if (VAR_15 <= 0x0f) {
      *VAR_19 = VAR_5;
      break;
    }
    break;
  case 22:
    *VAR_18 = VAR_13;
    break;
  case 23:
    *VAR_18 = VAR_9;
    if (VAR_15 >= 0x30 && VAR_15 <= 0x3f) {
      *VAR_19 = VAR_11;
      break;
    }
    if (VAR_15 <= 0x0f) {
      *VAR_19 = VAR_10;
      break;
    }
    break;
  default:
    break;
  }
}
