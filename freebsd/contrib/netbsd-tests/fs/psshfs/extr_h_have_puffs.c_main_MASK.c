
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(void)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1("/dev/puffs", VAR_4);
 if (VAR_7 != -1) {
  FUNC_2("yes\n");
  FUNC_0(VAR_7);
  VAR_6 = VAR_3;
 } else {
  if (VAR_5 == VAR_1) {
   FUNC_2("enxio\n");
   VAR_6 = VAR_3;
  } else if (VAR_5 == VAR_0) {
   FUNC_2("eacces\n");
   VAR_6 = VAR_3;
  } else {
   FUNC_2("failed\n");
   VAR_6 = VAR_2;
  }
 }

 return VAR_6;
}
