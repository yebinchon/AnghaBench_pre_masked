
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int mode_t ;
typedef scalar_t__ dev_t ;
typedef int dev ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,char,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,size_t*,scalar_t__*,int) ;

char *
FUNC_5(dev_t VAR_1, mode_t VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;
 size_t VAR_6;

 if (VAR_1 == VAR_0 || !(FUNC_1(VAR_2) || FUNC_0(VAR_1))) {
  FUNC_3(VAR_3, "#NODEV", VAR_4);
  return (VAR_3);
 }

 if (FUNC_1(VAR_2)) {
  VAR_6 = VAR_4;
  VAR_5 = FUNC_4("kern.devname", VAR_3, &VAR_6, &VAR_1, sizeof (VAR_1));
  if (VAR_5 == 0)
   return (VAR_3);
 }


 FUNC_2(VAR_3, VAR_4, "#%c:%#jx",
     FUNC_1(VAR_2) ? 'C' : 'B', (uintmax_t)VAR_1);
 return (VAR_3);
}
