
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ plan; scalar_t__ len; int addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct ccconn {TYPE_3__ calling; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ plan; scalar_t__ len; int addr; } ;
struct ccaddr {TYPE_2__ addr; } ;


 int FUNC_0 (TYPE_3__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const struct ccaddr *VAR_0, const struct ccconn *VAR_1)
{

 if (!FUNC_0(VAR_1->calling))
  return (0);

 return (VAR_0->addr.type == VAR_1->calling.addr.type &&
     VAR_0->addr.plan == VAR_1->calling.addr.plan &&
     VAR_0->addr.len == VAR_1->calling.addr.len &&
     FUNC_1(VAR_0->addr.addr, VAR_1->calling.addr.addr,
     VAR_0->addr.len) == 0);
}
