
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int* ipaddress; } ;
struct snmp_value {TYPE_1__ v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int*) ;
 char FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct snmp_value *VAR_5)
{
 int VAR_6;
 u_char VAR_7[4];

 if (VAR_4 == VAR_1) {

  VAR_6 = 0;
  for (;;) {
   if (VAR_2 >= 256)
    FUNC_2("ip address part too large");
   VAR_5->v.ipaddress[VAR_6++] = VAR_2;
   if (VAR_6 == 4)
    break;
   if (FUNC_1() != '.')
    FUNC_2("expecting '.' in ip address");
  }
  FUNC_1();

 } else if (VAR_4 == VAR_0) {

  FUNC_0(VAR_3, VAR_7);
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
   VAR_5->v.ipaddress[VAR_6] = VAR_7[VAR_6];
  FUNC_1();

 } else
  FUNC_2("bad ip address syntax");
}
