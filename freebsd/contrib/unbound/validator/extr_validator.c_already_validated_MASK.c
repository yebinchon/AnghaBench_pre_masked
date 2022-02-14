
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dns_msg {TYPE_1__* rep; } ;
struct TYPE_2__ {scalar_t__ security; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct dns_msg* VAR_2)
{

 if (VAR_2 && VAR_2->rep->security > VAR_1)
 {
  FUNC_1(VAR_0, "response has already been validated: %s",
   FUNC_0(VAR_2->rep->security));
  return 1;
 }
 return 0;
}
