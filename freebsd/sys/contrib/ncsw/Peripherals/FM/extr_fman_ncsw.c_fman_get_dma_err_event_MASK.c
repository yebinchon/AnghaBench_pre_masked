
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_dma_regs {int fmdmsr; int fmdmmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_dma_regs *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 VAR_8 = FUNC_0(&VAR_7->fmdmsr);
 VAR_9 = FUNC_0(&VAR_7->fmdmmr);


 if ((VAR_9 & VAR_0) != VAR_0)
  VAR_8 &= ~VAR_2;


 if ((VAR_9 & VAR_1) != VAR_1)
  VAR_8 &= ~(VAR_3 |
          VAR_5 |
    VAR_6 |
    VAR_4);


 FUNC_1(VAR_8, &VAR_7->fmdmsr);

 return VAR_8;
}
