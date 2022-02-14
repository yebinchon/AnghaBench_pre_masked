
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode_usb_sc {int std_param; } ;
struct phynode_usb_init_def {int std_param; int phynode_init_def; } ;
struct phynode {int dummy; } ;
typedef int phynode_class_t ;
typedef int device_t ;


 struct phynode* FUNC_0 (int ,int ,int *) ;
 struct phynode_usb_sc* FUNC_1 (struct phynode*) ;

struct phynode *
FUNC_2(device_t VAR_0, phynode_class_t VAR_1,
    struct phynode_usb_init_def *VAR_2)

{
 struct phynode *VAR_3;
 struct phynode_usb_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2->phynode_init_def);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_4 = FUNC_1(VAR_3);
 VAR_4->std_param = VAR_2->std_param;
 return (VAR_3);
}
