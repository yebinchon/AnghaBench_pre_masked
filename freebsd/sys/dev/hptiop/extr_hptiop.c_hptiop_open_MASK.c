
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_hba {int flag; } ;
typedef int ioctl_thread_t ;
typedef int ioctl_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hpt_iop_hba* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ioctl_dev_t VAR_3, int VAR_4,
     int VAR_5, ioctl_thread_t VAR_6)
{
 struct hpt_iop_hba *VAR_7 = FUNC_0(VAR_3);

 if (VAR_7==((void*)0))
  return VAR_1;
 if (VAR_7->flag & VAR_2)
  return VAR_0;
 VAR_7->flag |= VAR_2;
 return 0;
}
