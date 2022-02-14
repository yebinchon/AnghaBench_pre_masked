
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,int) ;

const char *
FUNC_2(
 int VAR_1
 )
{
 char *VAR_2;

 switch(VAR_1) {
     case 135: return "AM_ERR";
     case 130: return "AM_NOMATCH";
     case 128: return "AM_PROCPKT";
     case 136: return "AM_BCST";
     case 134: return "AM_FXMIT";
     case 133: return "AM_MANYCAST";
     case 131: return "AM_NEWPASS";
     case 132: return "AM_NEWBCL";
     case 129: return "AM_POSSBCL";
     default:
  FUNC_0(VAR_2);
  FUNC_1(VAR_2, VAR_0, "AM_#%d", VAR_1);
  return VAR_2;
 }
}
