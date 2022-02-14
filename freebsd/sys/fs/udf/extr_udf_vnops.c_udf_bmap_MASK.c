
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vop_bmap_args {int* a_bnp; int a_bn; int* a_runp; scalar_t__* a_runb; int ** a_bop; int a_vp; } ;
struct udf_node {TYPE_2__* udfmp; } ;
typedef int daddr_t ;
struct TYPE_4__ {int bshift; TYPE_1__* im_devvp; } ;
struct TYPE_3__ {int v_bufobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udf_node* FUNC_0 (int ) ;
 int FUNC_1 (struct udf_node*,int,int*,int*) ;

__attribute__((used)) static int
FUNC_2(struct vop_bmap_args *VAR_4)
{
 struct udf_node *VAR_5;
 uint32_t VAR_6;
 daddr_t VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(VAR_4->a_vp);

 if (VAR_4->a_bop != ((void*)0))
  *VAR_4->a_bop = &VAR_5->udfmp->im_devvp->v_bufobj;
 if (VAR_4->a_bnp == ((void*)0))
  return (0);
 if (VAR_4->a_runb)
  *VAR_4->a_runb = 0;
 VAR_9 = FUNC_1(VAR_5, VAR_4->a_bn << VAR_5->udfmp->bshift,
     &VAR_7, &VAR_6);
 if (VAR_9 == VAR_3)
  return (VAR_1);
 if (VAR_9)
  return (VAR_9);


 *VAR_4->a_bnp = VAR_7 << (VAR_5->udfmp->bshift - VAR_0);





 if (VAR_4->a_runp) {
  VAR_8 = (VAR_6 >> VAR_5->udfmp->bshift) - 1;
  if (VAR_8 <= 0)
   *VAR_4->a_runp = 0;
  else if (VAR_8 >= (VAR_2 >> VAR_5->udfmp->bshift))
   *VAR_4->a_runp = (VAR_2 >> VAR_5->udfmp->bshift) - 1;
  else
   *VAR_4->a_runp = VAR_8;
 }

 if (VAR_4->a_runb) {
  *VAR_4->a_runb = 0;
 }

 return (0);
}
