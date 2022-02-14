
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cr_group_info; } ;
struct TYPE_3__ {int data; } ;
struct rsc {int client_name; TYPE_2__ cred; scalar_t__ mechctx; TYPE_1__ handle; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rsc *VAR_0)
{
 FUNC_1(VAR_0->handle.data);
 if (VAR_0->mechctx)
  FUNC_0(&VAR_0->mechctx);
 if (VAR_0->cred.cr_group_info)
  FUNC_2(VAR_0->cred.cr_group_info);
 FUNC_1(VAR_0->client_name);
}
