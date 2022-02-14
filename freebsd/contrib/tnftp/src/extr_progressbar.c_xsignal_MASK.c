
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigfunc ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int ,int) ;

sigfunc
FUNC_2(int VAR_0, sigfunc VAR_1)
{
 int VAR_2;
 switch(VAR_0) {

 case 134:

 case 131:
 case 130:
 case 129:
 case 128:
  VAR_2 = 1;
  break;

 case 135:
 case 133:
 case 132:
  VAR_2 = 0;
  break;

 default:




  FUNC_0(1, "xsignal_restart: called with signal %d", VAR_0);
 }

 return(FUNC_1(VAR_0, VAR_1, VAR_2));
}
