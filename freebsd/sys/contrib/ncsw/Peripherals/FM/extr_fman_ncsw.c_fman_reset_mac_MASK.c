
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_fpm_regs {int fm_rstc; } ;


 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct fman_fpm_regs *VAR_12, uint8_t VAR_13, bool VAR_14)
{
 uint32_t VAR_15, VAR_16 = 100;


 if (VAR_14) {
  switch (VAR_13) {
  case(0):
   VAR_15 = VAR_2;
   break;
        case(1):
            VAR_15 = VAR_3;
            break;
  default:
   return -VAR_1;
  }
 } else {
  switch (VAR_13) {
  case(0):
   VAR_15 = VAR_4;
   break;
  case(1):
   VAR_15 = VAR_5;
   break;
  case(2):
   VAR_15 = VAR_6;
   break;
  case(3):
   VAR_15 = VAR_7;
   break;
  case(4):
   VAR_15 = VAR_8;
   break;
        case (5):
            VAR_15 = VAR_9;
            break;
        case (6):
            VAR_15 = VAR_10;
            break;
        case (7):
            VAR_15 = VAR_11;
            break;
  default:
   return -VAR_1;
  }
 }

 FUNC_2(VAR_15, &VAR_12->fm_rstc);
 while ((FUNC_1(&VAR_12->fm_rstc) & VAR_15) && --VAR_16)
  FUNC_0(10);

 if (!VAR_16)
  return -VAR_0;
 return 0;
}
