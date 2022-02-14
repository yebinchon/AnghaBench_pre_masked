
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_ivars {int fdunit; int fdtype; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fdc_ivars*) ;
 int FUNC_3 (struct fdc_ivars*,int ) ;
 struct fdc_ivars* FUNC_4 (int,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;

device_t
FUNC_6(device_t VAR_4, const char *VAR_5, int VAR_6)
{
 struct fdc_ivars *VAR_7;
 device_t VAR_8;

 VAR_7 = FUNC_4(sizeof *VAR_7, VAR_1 , VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_7, VAR_1);
  return (((void*)0));
 }
 FUNC_2(VAR_8, VAR_7);
 VAR_7->fdunit = VAR_6;
 VAR_7->fdtype = VAR_0;
 if (FUNC_5(VAR_5, VAR_6))
  FUNC_1(VAR_8);
 return (VAR_8);
}
