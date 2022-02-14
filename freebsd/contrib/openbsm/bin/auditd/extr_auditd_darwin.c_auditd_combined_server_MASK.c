
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mach_port_t ;
struct TYPE_8__ {scalar_t__ msgh_local_port; int msgh_id; } ;
typedef TYPE_1__ mach_msg_header_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_7(mach_msg_header_t *VAR_5, mach_msg_header_t *VAR_6)
{
 mach_port_t VAR_7 = VAR_5->msgh_local_port;


 if (VAR_3)
  FUNC_0(VAR_3);

 if (VAR_7 == VAR_4) {
  int VAR_8 = VAR_5->msgh_id;

  switch(VAR_8) {
  case 128:
  case 131:
   FUNC_6();


  case 130:
   FUNC_5();
   return (VAR_1);

  case 129:
   FUNC_2();
   return (VAR_1);

  default:
   FUNC_4("Received signal %d", VAR_8);
   return (VAR_1);
  }
 } else if (VAR_7 == VAR_2) {
  boolean_t VAR_9;

  VAR_9 = FUNC_1(VAR_5, VAR_6);
  if (!VAR_9)
   VAR_9 = FUNC_3(VAR_5, VAR_6);
   return (VAR_9);
 }
 FUNC_4("Recevied msg on bad port 0x%x.", VAR_7);
 return (VAR_0);
}
