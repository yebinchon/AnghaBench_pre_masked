
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 (struct ub_ctx*,char*,char*,char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (struct ub_ctx*,char*) ;
 int FUNC_15 (struct ub_ctx*,char*) ;
 int FUNC_16 (struct ub_ctx*,char*) ;
 struct ub_ctx* FUNC_17 () ;
 int FUNC_18 (struct ub_ctx*,int) ;
 scalar_t__ FUNC_19 (struct ub_ctx*,char*,char**) ;
 int FUNC_20 (struct ub_ctx*,char*) ;
 int FUNC_21 (struct ub_ctx*,char*,char*) ;
 int FUNC_22 (struct ub_ctx*,char*) ;
 int FUNC_23 () ;
 int VAR_9 ;

int FUNC_24(int VAR_10, char* VAR_11[])
{
 int VAR_12;
 char* VAR_13 = ((void*)0);
 char* VAR_14 = ((void*)0);
 struct ub_ctx* VAR_15 = ((void*)0);
 int VAR_16 = 0;

 VAR_15 = FUNC_17();
 if(!VAR_15) {
  FUNC_9(VAR_8, "error: out of memory\n");
  FUNC_8(1);
 }

 FUNC_7(FUNC_21(VAR_15, "target-fetch-policy:", "0 0 0 0 0"));


 while( (VAR_12=FUNC_11(VAR_10, VAR_11, "46DF:c:df:hrt:vy:C:")) != -1) {
  switch(VAR_12) {
  case '4':
   FUNC_7(FUNC_21(VAR_15, "do-ip6:", "no"));
   break;
  case '6':
   FUNC_7(FUNC_21(VAR_15, "do-ip4:", "no"));
   break;
  case 'c':
   VAR_13 = VAR_6;
   break;
  case 'C':
   FUNC_7(FUNC_16(VAR_15, VAR_6));
   break;
  case 'D':
   FUNC_7(FUNC_15(VAR_15, VAR_4));
   break;
  case 'd':
   VAR_16++;
   if(VAR_16 < 2)
    VAR_16 = 2;
   break;
  case 'r':
   FUNC_7(FUNC_20(VAR_15, "/etc/resolv.conf"));
   break;
  case 't':
   VAR_14 = VAR_6;
   break;
  case 'v':
   VAR_9++;
   break;
  case 'y':
   FUNC_7(FUNC_14(VAR_15, VAR_6));
   break;
  case 'f':
   FUNC_7(FUNC_15(VAR_15, VAR_6));
   break;
  case 'F':
   FUNC_7(FUNC_22(VAR_15, VAR_6));
   break;
  case '?':
  case 'h':
  default:
   FUNC_23();
  }
 }
 if(VAR_16 != 0)
  FUNC_7(FUNC_18(VAR_15, VAR_16));
 if(FUNC_19(VAR_15, "use-syslog", &VAR_6) == 0) {
  if(FUNC_13(VAR_6, "yes") == 0)
   FUNC_7(FUNC_21(VAR_15,
    "use-syslog:", "no"));
  FUNC_10(VAR_6);
 }
 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;
 if(VAR_10 != 1)
  FUNC_23();
 FUNC_12(VAR_15, VAR_11[0], VAR_14, VAR_13);
 return 0;
}
