
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct servent {int s_port; } ;
typedef int port_range ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 struct servent* FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*,char*,scalar_t__*,scalar_t__*) ;
 char* FUNC_7 (char const*,char) ;
 scalar_t__ FUNC_8 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_9 (const char* VAR_1, const char* VAR_2, port_range *VAR_3)
{
 char* VAR_4;
 struct servent* VAR_5;
 char* VAR_6;
 u_short VAR_7;
 u_short VAR_8;


 VAR_5 = FUNC_4 (VAR_1,VAR_2);
 if (VAR_5) {
  FUNC_1(*VAR_3, FUNC_5(VAR_5->s_port));
  FUNC_2(*VAR_3, 1);
  return 0;
 }


 VAR_4 = FUNC_7 (VAR_1, '-');
 if (VAR_4 == ((void*)0)) {
  FUNC_1(*VAR_3, FUNC_8(VAR_1, &VAR_6, 10));
  if (VAR_6 != VAR_1) {

   FUNC_2(*VAR_3, 1);
   return 0;
  }


  FUNC_3 (VAR_0, "%s/%s: unknown service", VAR_1, VAR_2);
 }


 FUNC_6 (VAR_1, "%hu-%hu", &VAR_7, &VAR_8);
 FUNC_1(*VAR_3, VAR_7);
 FUNC_2(*VAR_3, 0);
 if (VAR_7 <= VAR_8)
  FUNC_2(*VAR_3, VAR_8 - VAR_7 + 1);

 if (FUNC_0(*VAR_3) == 0)
  FUNC_3 (VAR_0, "invalid port range %s", VAR_1);

 return 0;
}
