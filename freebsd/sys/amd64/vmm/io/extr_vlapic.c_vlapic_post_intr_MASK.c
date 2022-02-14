
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* post_intr ) (struct vlapic*,int) ;} ;
struct vlapic {TYPE_1__ ops; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct vlapic*,int) ;

void
FUNC_2(struct vlapic *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->ops.post_intr)
  (*VAR_0->ops.post_intr)(VAR_0, VAR_1);
 else
  FUNC_0(VAR_1, VAR_2);
}
