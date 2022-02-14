
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int imask; int ecntrl; int cam2; int cam1; } ;
typedef enum dtsec_stat_level { ____Placeholder_dtsec_stat_level } dtsec_stat_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct dtsec_regs *VAR_7, enum dtsec_stat_level VAR_8)
{
 switch (VAR_8) {
 case 129:
  FUNC_1(0xffffffff, &VAR_7->cam1);
  FUNC_1(0xffffffff, &VAR_7->cam2);
  FUNC_1(FUNC_0(&VAR_7->ecntrl) & ~VAR_4,
    &VAR_7->ecntrl);
  FUNC_1(FUNC_0(&VAR_7->imask) & ~VAR_5,
    &VAR_7->imask);
  break;
 case 128:
  FUNC_1(VAR_0, &VAR_7->cam1);
  FUNC_1(VAR_2, &VAR_7->cam2);
  FUNC_1(FUNC_0(&VAR_7->ecntrl) | VAR_4,
    &VAR_7->ecntrl);
  FUNC_1(FUNC_0(&VAR_7->imask) | VAR_5,
    &VAR_7->imask);
  break;
 case 130:
  FUNC_1((uint32_t)~VAR_1, &VAR_7->cam1);
  FUNC_1((uint32_t)~VAR_3, &VAR_7->cam2);
  FUNC_1(FUNC_0(&VAR_7->ecntrl) | VAR_4,
    &VAR_7->ecntrl);
  FUNC_1(FUNC_0(&VAR_7->imask) | VAR_5,
    &VAR_7->imask);
  break;
 case 131:
  FUNC_1(0, &VAR_7->cam1);
  FUNC_1(0, &VAR_7->cam2);
  FUNC_1(FUNC_0(&VAR_7->ecntrl) | VAR_4,
    &VAR_7->ecntrl);
  FUNC_1(FUNC_0(&VAR_7->imask) | VAR_5,
    &VAR_7->imask);
  break;
 default:
  return -VAR_6;
 }

 return 0;
}
