
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_kqfilter_args {int dummy; } ;
struct TYPE_2__ {int (* vop_kqfilter ) (struct vop_kqfilter_args*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct vop_kqfilter_args*) ;
 int FUNC_1 (struct vop_kqfilter_args*) ;

__attribute__((used)) static int
FUNC_2(struct vop_kqfilter_args *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0.vop_kqfilter(VAR_1);
 if (VAR_2)
  VAR_2 = FUNC_1(VAR_1);
 return (VAR_2);
}
