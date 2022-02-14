
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* ops; } ;
struct datapath {int dummy; } ;
struct TYPE_2__ {char const* (* get_name ) (struct vport*) ;} ;


 int VAR_0 ;
 struct vport* FUNC_0 (struct datapath const*,int ) ;
 char const* FUNC_1 (struct vport*) ;

const char *FUNC_2(const struct datapath *VAR_1)
{
 struct vport *VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2->ops->get_name(VAR_2);
}
