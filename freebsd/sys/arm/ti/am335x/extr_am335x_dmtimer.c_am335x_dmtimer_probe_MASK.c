
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int strbuf ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 char VAR_6[32];
 int VAR_7;

 if (!FUNC_2(VAR_5))
  return (VAR_1);

 if (FUNC_1(VAR_5, VAR_4)->ocd_data == 0)
  return (VAR_1);






 VAR_7 = FUNC_4(VAR_5, "timer");
 if (VAR_7 != VAR_2 && VAR_7 != VAR_3)
  return (VAR_1);

 FUNC_3(VAR_6, sizeof(VAR_6), "AM335x DMTimer%d", VAR_7);
 FUNC_0(VAR_5, VAR_6);

 return(VAR_0);
}
