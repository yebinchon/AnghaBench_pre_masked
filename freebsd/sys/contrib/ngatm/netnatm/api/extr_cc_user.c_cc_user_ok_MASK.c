
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ccuser {int uarg; TYPE_2__* cc; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* respond_user ) (struct ccuser*,int ,int ,int ,void*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ccuser*,int ,int ,int ,void*,size_t) ;

__attribute__((used)) static __inline void
FUNC_1(struct ccuser *VAR_1, u_int VAR_2, void *VAR_3, size_t VAR_4)
{
 VAR_1->cc->funcs->respond_user(VAR_1, VAR_1->uarg,
     VAR_0, VAR_2, VAR_3, VAR_4);
}
