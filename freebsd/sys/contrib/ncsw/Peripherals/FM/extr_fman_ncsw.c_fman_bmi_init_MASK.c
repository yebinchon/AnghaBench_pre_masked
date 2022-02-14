
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_cfg {int fifo_base_addr; int total_fifo_size; int total_num_of_tasks; int exceptions; } ;
struct fman_bmi_regs {int fmbm_ier; int fmbm_ievr; int fmbm_cfg2; int fmbm_cfg1; } ;


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
 int FUNC_0 (int,int *) ;

int FUNC_1(struct fman_bmi_regs *VAR_12, struct fman_cfg *VAR_13)
{
 uint32_t VAR_14;






 VAR_14 = VAR_13->fifo_base_addr;
 VAR_14 = VAR_14 / VAR_6;

 VAR_14 |= ((VAR_13->total_fifo_size / VAR_7 - 1) <<
   VAR_0);
 FUNC_0(VAR_14, &VAR_12->fmbm_cfg1);

 VAR_14 = ((uint32_t)(VAR_13->total_num_of_tasks - 1) <<
   VAR_1);

 FUNC_0(VAR_14, &VAR_12->fmbm_cfg2);


 VAR_14 = 0;
 FUNC_0(VAR_3 |
   VAR_5 |
   VAR_4 |
   VAR_2,
   &VAR_12->fmbm_ievr);

 if (VAR_13->exceptions & VAR_9)
  VAR_14 |= VAR_3;
 if (VAR_13->exceptions & VAR_10)
  VAR_14 |= VAR_5;
 if (VAR_13->exceptions & VAR_11)
  VAR_14 |= VAR_4;
 if (VAR_13->exceptions & VAR_8)
  VAR_14 |= VAR_2;
 FUNC_0(VAR_14, &VAR_12->fmbm_ier);

 return 0;
}
