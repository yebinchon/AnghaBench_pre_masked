
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ioctl_t ;
typedef int ioclt_t ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;

void
FUNC_5(void)
{
    int VAR_16, VAR_17 = VAR_10;
    static int VAR_18 = 0;



    if (VAR_14 == VAR_13)
 return;
    if (VAR_1 && !VAR_7 && VAR_14 < &VAR_13[sizeof VAR_13 - 10])
 return;
    if (VAR_12)
       VAR_10 = 1;

    if (VAR_18) {
 VAR_18 = 0;
 VAR_14 = VAR_13;
 if (VAR_12)
     FUNC_0();
 else
     FUNC_2(VAR_0);
    }
    VAR_18 = 1;
    if (VAR_11)
 VAR_16 = VAR_8 ? 2 : VAR_3;
    else
 VAR_16 = VAR_8 ? 1 : VAR_4;
    if (FUNC_4(VAR_16, VAR_13, VAR_14 - VAR_13) == -1)
 switch (VAR_9) {


 case 132:






 case 129:





 case 130:


 case 134:





 case 128:





 case 131:





 case 133:


     if (VAR_12 == 0)
  FUNC_3(1);

 default:
     if (VAR_12)
  FUNC_0();
     else
  FUNC_2(VAR_0);
     break;
 }

    VAR_10 = VAR_17;
    VAR_14 = VAR_13;
    VAR_18 = 0;
}
