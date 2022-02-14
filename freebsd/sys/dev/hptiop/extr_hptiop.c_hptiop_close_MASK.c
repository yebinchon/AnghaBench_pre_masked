
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hpt_iop_hba {int flag; } ;
typedef int ioctl_thread_t ;
typedef int ioctl_dev_t ;


 scalar_t__ VAR_0 ;
 struct hpt_iop_hba* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ioctl_dev_t VAR_1, int VAR_2,
     int VAR_3, ioctl_thread_t VAR_4)
{
 struct hpt_iop_hba *VAR_5 = FUNC_0(VAR_1);
 VAR_5->flag &= ~(u_int32_t)VAR_0;
 return 0;
}
