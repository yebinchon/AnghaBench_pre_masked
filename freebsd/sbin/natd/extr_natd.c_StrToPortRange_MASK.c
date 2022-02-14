
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct servent {int s_port; } ;
typedef int port_range ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,char*,char const*,...) ;
 struct servent* FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*,char*,scalar_t__*,scalar_t__*) ;
 char* FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char const*,char**,int) ;

int FUNC_9 (const char* VAR_0, const char* VAR_1, port_range *VAR_2)
{
 const char* VAR_3;
 struct servent* VAR_4;
 char* VAR_5;
 u_short VAR_6;
 u_short VAR_7;


 VAR_4 = FUNC_4 (VAR_0,VAR_1);
 if (VAR_4) {
         FUNC_1(*VAR_2, FUNC_5(VAR_4->s_port));
  FUNC_2(*VAR_2, 1);
  return 0;
 }


 VAR_3 = FUNC_7 (VAR_0, '-');
 if (VAR_3 == ((void*)0)) {
         FUNC_1(*VAR_2, FUNC_8(VAR_0, &VAR_5, 10));
  if (VAR_5 != VAR_0) {

          FUNC_2(*VAR_2, 1);
   return 0;
  }


  FUNC_3 (1, "%s/%s: unknown service", VAR_0, VAR_1);
 }


 FUNC_6 (VAR_0, "%hu-%hu", &VAR_6, &VAR_7);
 FUNC_1(*VAR_2, VAR_6);
 FUNC_2(*VAR_2, 0);
 if (VAR_6 <= VAR_7)
         FUNC_2(*VAR_2, VAR_7 - VAR_6 + 1);

 if (FUNC_0(*VAR_2) == 0)
         FUNC_3 (1, "invalid port range %s", VAR_0);

 return 0;
}
