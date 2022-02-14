
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_write_args {int a_vp; } ;
struct nfsnode {int n_mtim; int n_flag; } ;
struct TYPE_2__ {int (* vop_write ) (struct vop_write_args*) ;} ;


 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_0 ;
 struct nfsnode* FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct vop_write_args*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct vop_write_args *VAR_2)
{
 struct nfsnode *VAR_3 = FUNC_2(VAR_2->a_vp);




 FUNC_0(VAR_3);
 VAR_3->n_flag |= VAR_0;
 FUNC_4(&VAR_3->n_mtim);
 FUNC_1(VAR_3);
 return(VAR_1.vop_write(VAR_2));
}
