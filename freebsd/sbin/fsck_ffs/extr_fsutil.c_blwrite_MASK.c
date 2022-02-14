
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
typedef int ssize_t ;
typedef int off_t ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(int VAR_3, char *VAR_4, ufs2_daddr_t VAR_5, ssize_t VAR_6)
{
 int VAR_7;
 char *VAR_8;
 off_t VAR_9;

 if (VAR_3 < 0)
  return;
 VAR_9 = VAR_5;
 VAR_9 *= VAR_0;
 if (FUNC_1(VAR_3, VAR_4, VAR_6, VAR_9) == VAR_6) {
  VAR_1 = 1;
  return;
 }
 VAR_2 = 0;
 FUNC_2("WRITE BLK", VAR_5);
 FUNC_0("THE FOLLOWING SECTORS COULD NOT BE WRITTEN:");
 for (VAR_8 = VAR_4, VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_0, VAR_8 += VAR_0)
  if (FUNC_1(VAR_3, VAR_8, VAR_0, VAR_9 + VAR_7) != VAR_0)
   FUNC_0(" %jd,", (intmax_t)VAR_5 + VAR_7 / VAR_0);
 FUNC_0("\n");
 return;
}
