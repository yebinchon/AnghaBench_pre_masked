
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; scalar_t__ clock_source; int freq_detected; int uer_detected; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vx_core*,int *) ;

int FUNC_1(struct vx_core *VAR_2)
{
 int VAR_3;

 if (VAR_2->chip_status & VAR_1)
  return 0;

 if (VAR_2->clock_source == VAR_0)
  return 0;



 VAR_3 = FUNC_0(VAR_2, &VAR_2->uer_detected);
 if (VAR_3 < 0)
  return VAR_3;




 if (VAR_3 == 48000 || VAR_3 == 44100 || VAR_3 == 32000)
  VAR_2->freq_detected = VAR_3;

 return 0;
}
