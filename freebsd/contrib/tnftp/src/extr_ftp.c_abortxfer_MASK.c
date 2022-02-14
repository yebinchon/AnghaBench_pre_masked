
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msgbuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;
 int FUNC_1 (int,char*,int*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 size_t FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,size_t) ;
 int VAR_5 ;

void
FUNC_7(int VAR_6)
{
 char VAR_7[100];
 size_t VAR_8;

 VAR_3 = 1;
 FUNC_0(0);
 VAR_2 = 0;
 VAR_0 = 0;
 switch (VAR_1[0]) {
 case 'r':
  FUNC_5(VAR_7, "\nreceive", sizeof(VAR_7));
  break;
 case 's':
  FUNC_5(VAR_7, "\nsend", sizeof(VAR_7));
  break;
 default:
  FUNC_1(1, "abortxfer: unknown direction `%s'", VAR_1);
 }
 VAR_8 = FUNC_4(VAR_7, " aborted. Waiting for remote to finish abort.\n",
     sizeof(VAR_7));
 FUNC_6(FUNC_2(VAR_4), VAR_7, VAR_8);
 FUNC_3(VAR_5, 1);
}
