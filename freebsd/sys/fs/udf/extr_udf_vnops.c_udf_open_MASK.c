
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_open_args {int a_td; int a_vp; } ;
struct udf_node {TYPE_1__* fentry; } ;
typedef int off_t ;
struct TYPE_2__ {int inf_len; } ;


 struct udf_node* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_open_args *VAR_0) {
 struct udf_node *VAR_1 = FUNC_0(VAR_0->a_vp);
 off_t VAR_2;

 VAR_2 = FUNC_1(VAR_1->fentry->inf_len);
 FUNC_2(VAR_0->a_vp, VAR_2, VAR_0->a_td);
 return 0;
}
