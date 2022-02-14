
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int absolute; } ;
typedef TYPE_1__ isc_time_t ;
typedef int SYSTEMTIME ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int *,char*,char*,int) ;
 int FUNC_2 (int ,int,int *,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,unsigned int,char*,char*,char*) ;

void
FUNC_5(const isc_time_t *VAR_3, char *VAR_4, unsigned int VAR_5) {
 SYSTEMTIME VAR_6;
 char VAR_7[50];
 char VAR_8[50];



 FUNC_3(VAR_5 > 0);
 if (FUNC_0(&VAR_3->absolute, &VAR_6)) {
  FUNC_1(VAR_0, 0, &VAR_6,
         "ddd',', dd-MMM-yyyy", VAR_7, 50);
  FUNC_2(VAR_0,
         VAR_2 | VAR_1,
         &VAR_6, "hh':'mm':'ss", VAR_8, 50);

  FUNC_4(VAR_4, VAR_5, "%s %s GMT", VAR_7, VAR_8);
 } else {
  VAR_4[0] = 0;
 }
}
