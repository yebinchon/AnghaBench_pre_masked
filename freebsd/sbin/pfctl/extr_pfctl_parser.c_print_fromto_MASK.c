
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct TYPE_4__ {int mask; int addr; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ v; } ;
struct pf_rule_addr {int * port; scalar_t__ port_op; TYPE_3__ addr; scalar_t__ neg; } ;
typedef int sa_family_t ;
typedef scalar_t__ pf_osfp_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct pf_rule_addr *VAR_5, pf_osfp_t VAR_6, struct pf_rule_addr *VAR_7,
    sa_family_t VAR_8, u_int8_t VAR_9, int VAR_10, int VAR_11)
{
 char VAR_12[VAR_4*3];
 if (VAR_5->addr.type == VAR_2 &&
     VAR_7->addr.type == VAR_2 &&
     FUNC_0(&VAR_5->addr.v.a.addr, VAR_0) &&
     FUNC_0(&VAR_5->addr.v.a.mask, VAR_0) &&
     FUNC_0(&VAR_7->addr.v.a.addr, VAR_0) &&
     FUNC_0(&VAR_7->addr.v.a.mask, VAR_0) &&
     !VAR_5->neg && !VAR_7->neg &&
     !VAR_5->port_op && !VAR_7->port_op &&
     VAR_6 == VAR_3)
  FUNC_4(" all");
 else {
  FUNC_4(" from ");
  if (VAR_5->neg)
   FUNC_4("! ");
  FUNC_2(&VAR_5->addr, VAR_8, VAR_10);
  if (VAR_5->port_op)
   FUNC_3(VAR_5->port_op, VAR_5->port[0],
       VAR_5->port[1],
       VAR_9 == VAR_1 ? "tcp" : "udp",
       VAR_11);
  if (VAR_6 != VAR_3)
   FUNC_4(" os \"%s\"", FUNC_1(VAR_6, VAR_12,
       sizeof(VAR_12)));

  FUNC_4(" to ");
  if (VAR_7->neg)
   FUNC_4("! ");
  FUNC_2(&VAR_7->addr, VAR_8, VAR_10);
  if (VAR_7->port_op)
   FUNC_3(VAR_7->port_op, VAR_7->port[0],
       VAR_7->port[1],
       VAR_9 == VAR_1 ? "tcp" : "udp",
       VAR_11);
 }
}
