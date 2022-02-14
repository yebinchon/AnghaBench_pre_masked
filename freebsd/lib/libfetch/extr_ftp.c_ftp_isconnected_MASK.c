
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct url {scalar_t__ port; int pwd; int user; int host; } ;
struct TYPE_2__ {scalar_t__ port; int pwd; int user; int host; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct url *VAR_2)
{
 return (VAR_0
     && (FUNC_0(VAR_2->host, VAR_1.host) == 0)
     && (FUNC_0(VAR_2->user, VAR_1.user) == 0)
     && (FUNC_0(VAR_2->pwd, VAR_1.pwd) == 0)
     && (VAR_2->port == VAR_1.port));
}
