
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct pf_status*) ;
 int FUNC_2 (char*,int ) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(char *VAR_8, int VAR_9)
{
 struct pf_status VAR_10;

 VAR_6 = VAR_8;

 if (VAR_9 == 1)
  VAR_7 = VAR_3;
 else if (VAR_9 == 2)
  VAR_7 = VAR_4;

 VAR_5 = FUNC_2("/dev/pf", VAR_2);
 if (VAR_5 == -1) {
  FUNC_3(VAR_1, "can't open /dev/pf");
  FUNC_0(1);
 }
 if (FUNC_1(VAR_5, VAR_0, &VAR_10) == -1) {
  FUNC_3(VAR_1, "DIOCGETSTATUS");
  FUNC_0(1);
 }
 if (!VAR_10.running) {
  FUNC_3(VAR_1, "pf is disabled");
  FUNC_0(1);
 }
}
