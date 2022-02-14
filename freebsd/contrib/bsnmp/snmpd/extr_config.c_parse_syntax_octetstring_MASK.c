
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ len; int* octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {TYPE_2__ v; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int*) ;
 char FUNC_4 () ;
 int* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,int ,scalar_t__) ;
 int VAR_2 ;
 int* FUNC_7 (int*,scalar_t__) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct snmp_value *VAR_6)
{
 u_long VAR_7;
 u_char *VAR_8;

 if (VAR_5 == VAR_1) {
  VAR_6->v.octetstring.len = VAR_4;
  VAR_6->v.octetstring.octets = FUNC_5(VAR_4);
  (void)FUNC_6(VAR_6->v.octetstring.octets, VAR_3, VAR_4);
  FUNC_4();
  return;
 }


 VAR_6->v.octetstring.octets = ((void*)0);
 VAR_6->v.octetstring.len = 0;

 if (VAR_5 != VAR_0)

  return;

 if (FUNC_2()) {
  FUNC_3(VAR_6->v.octetstring.octets);
  FUNC_0();
 }

 VAR_7 = 0;
 for (;;) {
  if (VAR_5 != VAR_0)
   FUNC_8("bad OCTETSTRING syntax");
  if (VAR_2 > 0xff)
   FUNC_8("byte value too large");
  if (VAR_7 == VAR_6->v.octetstring.len) {
   VAR_7 += 100;
   VAR_8 = FUNC_7(VAR_6->v.octetstring.octets, VAR_7);
   if (VAR_8 == ((void*)0))
    FUNC_8("%m");
   VAR_6->v.octetstring.octets = VAR_8;
  }
  VAR_6->v.octetstring.octets[VAR_6->v.octetstring.len++]
      = VAR_2;
  if (FUNC_4() != ':')
   break;
  FUNC_4();
 }
 FUNC_1();
}
