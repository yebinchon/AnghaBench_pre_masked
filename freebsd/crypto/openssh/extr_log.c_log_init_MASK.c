
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syslog_data {int dummy; } ;
typedef int SyslogFacility ;
typedef scalar_t__ LogLevel ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct syslog_data VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 (struct syslog_data*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ,struct syslog_data*) ;
 int VAR_20 ;

void
FUNC_7(char *VAR_21, LogLevel VAR_22, SyslogFacility VAR_23, int VAR_24)
{




 VAR_15 = VAR_21;

 if (FUNC_4(VAR_22) != 0) {
  FUNC_3(VAR_20, "Unrecognized internal syslog level code %d\n",
      (int) VAR_22);
  FUNC_2(1);
 }

 VAR_17 = ((void*)0);
 VAR_18 = ((void*)0);

 VAR_19 = VAR_24;
 if (VAR_24)
  return;

 switch (VAR_23) {
 case 137:
  VAR_16 = VAR_2;
  break;
 case 128:
  VAR_16 = VAR_12;
  break;
 case 139:
  VAR_16 = VAR_0;
  break;





 case 136:
  VAR_16 = VAR_3;
  break;
 case 135:
  VAR_16 = VAR_4;
  break;
 case 134:
  VAR_16 = VAR_5;
  break;
 case 133:
  VAR_16 = VAR_6;
  break;
 case 132:
  VAR_16 = VAR_7;
  break;
 case 131:
  VAR_16 = VAR_8;
  break;
 case 130:
  VAR_16 = VAR_9;
  break;
 case 129:
  VAR_16 = VAR_10;
  break;
 default:
  FUNC_3(VAR_20,
      "Unrecognized internal syslog facility code %d\n",
      (int) VAR_23);
  FUNC_2(1);
 }
 FUNC_5(VAR_15 ? VAR_15 : VAR_14, VAR_11, VAR_16);
 FUNC_0();

}
