
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_type; } ;
struct socket {int so_type; } ;
struct file {int f_type; struct vnode* f_vnode; struct socket* f_data; } ;
typedef int cloudabi_filetype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
cloudabi_filetype_t
FUNC_0(const struct file *VAR_10)
{
 struct socket *VAR_11;
 struct vnode *VAR_12;

 switch (VAR_10->f_type) {
 case 142:
  return (VAR_7);
 case 141:
  return (VAR_7);
 case 140:
  return (VAR_3);
 case 139:
  return (VAR_5);
 case 138:
  VAR_11 = VAR_10->f_data;
  switch (VAR_11->so_type) {
  case 136:
   return (VAR_6);
  case 135:
   return (VAR_7);
  default:
   return (VAR_9);
  }
 case 137:
  VAR_12 = VAR_10->f_vnode;
  switch (VAR_12->v_type) {
  case 134:
   return (VAR_0);
  case 133:
   return (VAR_1);
  case 132:
   return (VAR_2);
  case 131:
   return (VAR_7);
  case 130:
   return (VAR_8);
  case 129:
   return (VAR_4);
  case 128:
   return (VAR_7);
  default:
   return (VAR_9);
  }
 default:
  return (VAR_9);
 }
}
