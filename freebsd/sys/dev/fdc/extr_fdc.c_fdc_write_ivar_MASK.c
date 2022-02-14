
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_ivars {uintptr_t fdunit; uintptr_t fdtype; } ;
typedef int device_t ;


 int VAR_0 ;


 struct fdc_ivars* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t VAR_4)
{
 struct fdc_ivars *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 128:
  VAR_5->fdunit = VAR_4;
  break;
 case 129:
  VAR_5->fdtype = VAR_4;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
