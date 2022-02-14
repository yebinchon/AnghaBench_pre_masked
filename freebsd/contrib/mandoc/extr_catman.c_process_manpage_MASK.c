
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char const*,int,int) ;
 int FUNC_3 (int,int,int,int ) ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(int VAR_10, int VAR_11, const char *VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;

 if ((VAR_13 = FUNC_1(VAR_12, VAR_2)) == -1) {
  FUNC_4("open(%s)", VAR_12);
  return 0;
 }

 if ((VAR_14 = FUNC_2(VAR_11, VAR_12,
     VAR_4 | VAR_1 | VAR_0 | VAR_3,
     VAR_8 | VAR_9 | VAR_6 | VAR_7)) == -1) {
  FUNC_4("openat(%s)", VAR_12);
  FUNC_0(VAR_13);
  return 0;
 }

 VAR_15 = FUNC_3(VAR_10, VAR_13, VAR_14, VAR_5);

 FUNC_0(VAR_13);
 FUNC_0(VAR_14);

 if (VAR_15 < 0) {
  FUNC_4("sendmsg");
  return -1;
 }
 return 0;
}
