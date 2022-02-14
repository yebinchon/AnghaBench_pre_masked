
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int absolute; } ;
typedef TYPE_1__ isc_time_t ;
struct TYPE_8__ {int wMilliseconds; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int FILETIME ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ,TYPE_2__*,char*,char*,int) ;
 int FUNC_3 (int ,int,TYPE_2__*,int *,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,unsigned int,char const*,...) ;

void
FUNC_6(const isc_time_t *VAR_3, char *VAR_4, unsigned int VAR_5) {
 FILETIME VAR_6;
 SYSTEMTIME VAR_7;
 char VAR_8[50];
 char VAR_9[50];

 static const char VAR_10[] = "99-Bad-9999 99:99:99.999";

 FUNC_4(VAR_5 > 0);
 if (FUNC_0(&VAR_3->absolute, &VAR_6) &&
     FUNC_1(&VAR_6, &VAR_7)) {
  FUNC_2(VAR_0, 0, &VAR_7, "dd-MMM-yyyy",
         VAR_8, 50);
  FUNC_3(VAR_0, VAR_2|
         VAR_1, &VAR_7, ((void*)0), VAR_9, 50);

  FUNC_5(VAR_4, VAR_5, "%s %s.%03u", VAR_8, VAR_9,
    VAR_7.wMilliseconds);

 } else
  FUNC_5(VAR_4, VAR_5, VAR_10);
}
