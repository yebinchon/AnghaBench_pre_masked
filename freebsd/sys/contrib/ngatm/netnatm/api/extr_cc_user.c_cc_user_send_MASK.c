
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ccuser {int uarg; TYPE_2__* cc; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* send_user ) (struct ccuser*,int ,int ,void*,size_t) ;} ;


 int FUNC_0 (struct ccuser*,int ,int ,void*,size_t) ;

__attribute__((used)) static __inline void
FUNC_1(struct ccuser *VAR_0, u_int VAR_1, void *VAR_2, size_t VAR_3)
{
 VAR_0->cc->funcs->send_user(VAR_0, VAR_0->uarg, VAR_1, VAR_2, VAR_3);
}
