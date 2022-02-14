
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char**,int ) ;
 scalar_t__ VAR_7 ;

void
FUNC_10(char *VAR_8)
{
 char *VAR_9;
 char VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_7 = 0;
 if (VAR_6 >= 0) {
     FUNC_0(VAR_6);
     VAR_6 = -1;
 }

 VAR_10 = *VAR_8++;
 if (VAR_10 == '\0') {
  FUNC_4(500, "Bad syntax in EPRT");
  return;
 }
 VAR_11 = FUNC_9 (VAR_8, &VAR_9, 0);
 if (VAR_11 == 0 || *VAR_9 != VAR_10) {
  FUNC_4(500, "Bad syntax in EPRT");
  return;
 }
 VAR_8 = VAR_9 + 1;
 switch (VAR_11) {





 case 1 :
     VAR_3->sa_family = VAR_0;
  break;
 default :
  FUNC_4(522, "Network protocol %d not supported, use (1"



        ")", VAR_11);
  return;
 }
 VAR_9 = FUNC_8 (VAR_8, VAR_10);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(500, "Bad syntax in EPRT");
  return;
 }
 *VAR_9 = '\0';
 VAR_12 = FUNC_2 (VAR_3->sa_family, VAR_8,
    FUNC_5 (VAR_3));

 if (VAR_12 != 1) {
  FUNC_4(500, "Bad address syntax in EPRT");
  return;
 }
 VAR_8 = VAR_9 + 1;
 VAR_13 = FUNC_9 (VAR_8, &VAR_9, 0);
 if (VAR_13 == 0 || *VAR_9 != VAR_10) {
  FUNC_4(500, "Bad port syntax in EPRT");
  return;
 }
 if (VAR_13 < VAR_2) {
  FUNC_4(500, "Bad port in invalid range in EPRT");
  return;
 }
 FUNC_6 (VAR_3, FUNC_1(VAR_13));

 if (VAR_5 &&
     (VAR_3->sa_family != VAR_4->sa_family ||
      FUNC_3(FUNC_5(VAR_3), FUNC_5(VAR_4), FUNC_7(VAR_3)) != 0))
 {
  FUNC_4(500, "Bad address in EPRT");
 }
 FUNC_4(200, "EPRT command successful.");
}
