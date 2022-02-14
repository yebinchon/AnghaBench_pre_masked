
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct TYPE_2__ {int busdma; int res; } ;
struct proto_res {int r_type; int r_size; TYPE_1__ r_d; } ;
struct cdev {struct proto_res* si_drv2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_6, vm_ooffset_t VAR_7, vm_paddr_t *VAR_8,
    int VAR_9, vm_memattr_t *VAR_10)
{
 struct proto_res *VAR_11;

 if (VAR_7 & VAR_3)
  return (VAR_1);
 if (VAR_9 & VAR_4)
  return (VAR_0);

 VAR_11 = VAR_6->si_drv2;

 switch (VAR_11->r_type) {
 case 128:
  if (VAR_7 >= VAR_11->r_size)
   return (VAR_1);
  *VAR_8 = FUNC_1(VAR_11->r_d.res) + VAR_7;

  *VAR_10 = VAR_5;

  break;
 case 129:
  if (!FUNC_0(VAR_11->r_d.busdma, VAR_7))
   return (VAR_1);
  *VAR_8 = VAR_7;
  break;
 default:
  return (VAR_2);
 }
 return (0);
}
