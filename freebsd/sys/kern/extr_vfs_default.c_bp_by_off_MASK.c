
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vop_bypass_t ;
struct vop_vector {int dummy; } ;
struct vop_generic_args {TYPE_1__* a_desc; } ;
struct TYPE_2__ {int vdesc_vop_offset; } ;



__attribute__((used)) static vop_bypass_t *
FUNC_0(struct vop_vector *VAR_0, struct vop_generic_args *VAR_1)
{

 return (*(vop_bypass_t **)((char *)VAR_0 + VAR_1->a_desc->vdesc_vop_offset));
}
