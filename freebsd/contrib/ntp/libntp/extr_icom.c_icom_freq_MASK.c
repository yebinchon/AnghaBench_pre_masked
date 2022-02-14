
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_0 (double,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char*,int) ;

int
FUNC_3(
 int VAR_7,
 int VAR_8,
 double VAR_9
 )
{
 u_char VAR_10[] = {VAR_3, VAR_4, VAR_4, 0, VAR_5, VAR_6, 0, 0, 0, 0, VAR_0,
     VAR_0};
 int VAR_11;
 int VAR_12;

 VAR_10[3] = (char)VAR_8;
 if (VAR_8 == VAR_1)
  VAR_11 = 4;
 else
  VAR_11 = 5;
 FUNC_0(VAR_9 * 1e6, &VAR_10[6], VAR_11);
 VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_11 + 7);
 if (VAR_12 == -1) {
  FUNC_1(VAR_2, "icom_freq: write() failed: %m");
  return -1;
 } else if (VAR_12 != VAR_11 + 7) {
  FUNC_1(VAR_2, "icom_freq: only wrote %d of %d bytes.",
   VAR_12, VAR_11+7);
  return 1;
 }

 return 0;
}
