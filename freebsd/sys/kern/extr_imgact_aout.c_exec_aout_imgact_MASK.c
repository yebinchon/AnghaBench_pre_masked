
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned long vm_offset_t ;
typedef int * vm_object_t ;
typedef int * vm_map_t ;
struct vmspace {unsigned long vm_tsize; unsigned long vm_dsize; void* vm_daddr; void* vm_taddr; int vm_map; } ;
struct image_params {unsigned long entry_addr; TYPE_2__* proc; scalar_t__ interpreted; int vp; int * object; TYPE_1__* attr; int ps_strings; scalar_t__ image_header; } ;
struct exec {int a_midmag; long a_text; unsigned long a_entry; int a_data; int a_bss; } ;
typedef void* caddr_t ;
struct TYPE_10__ {int sv_psstrings; } ;
struct TYPE_9__ {TYPE_4__* p_sysent; struct vmspace* p_vmspace; } ;
struct TYPE_8__ {unsigned long va_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct exec const) ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

 TYPE_4__ VAR_17 ;
 int FUNC_5 (struct image_params*,TYPE_4__*) ;
 unsigned long FUNC_6 (TYPE_2__*,int ) ;
 unsigned long VAR_18 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,unsigned long) ;
 unsigned long FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int *,int *,unsigned long,unsigned long,unsigned long,int,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int
FUNC_16(struct image_params *VAR_19)
{
 const struct exec *VAR_20 = (const struct exec *) VAR_19->image_header;
 struct vmspace *VAR_21;
 vm_map_t VAR_22;
 vm_object_t VAR_23;
 vm_offset_t VAR_24, VAR_25;
 unsigned long VAR_26;
 unsigned long VAR_27;
 unsigned long VAR_28;
 int VAR_29;







 if (((VAR_20->a_midmag >> 16) & 0xff) != 0x86 &&
     ((VAR_20->a_midmag >> 16) & 0xff) != 0 &&
     ((((int)FUNC_7(VAR_20->a_midmag)) >> 16) & 0xff) != 0x86)
                return -1;






 switch ((int)(VAR_20->a_midmag & 0xffff)) {
 case 128:
  VAR_26 = 0;
  if (VAR_20->a_text) {
   VAR_27 = VAR_10;
  } else {

   VAR_27 = 0;
  }
  break;
 case 129:
  VAR_26 = VAR_10;
  VAR_27 = 0;

  if (FUNC_0(*VAR_20) == VAR_7)
   VAR_19->ps_strings = VAR_17.sv_psstrings;
  break;
 default:

  switch ((int)(FUNC_7(VAR_20->a_midmag) & 0xffff)) {
  case 128:
  case 129:
   VAR_26 = VAR_10;
   VAR_27 = 0;
   break;
  default:
   return (-1);
  }
 }

 VAR_28 = FUNC_9(VAR_20->a_bss, VAR_10);




 if (
     VAR_20->a_entry < VAR_26 ||
     VAR_20->a_entry >= VAR_26 + VAR_20->a_text ||


     VAR_20->a_text & VAR_8 || VAR_20->a_data & VAR_8


     ||

     VAR_26 + VAR_20->a_text + VAR_20->a_data + VAR_28 > VAR_13

     )
  return (-1);


 if (VAR_20->a_data + VAR_20->a_text > VAR_19->attr->va_size)
  return (VAR_0);




 FUNC_1(VAR_19->proc);
 if (
     VAR_20->a_text > VAR_18 ||


     VAR_20->a_data + VAR_28 > FUNC_6(VAR_19->proc, VAR_12) ||
     FUNC_8(VAR_19->proc, VAR_11, VAR_20->a_data + VAR_28) != 0) {
  FUNC_2(VAR_19->proc);
  return (VAR_1);
 }
 FUNC_2(VAR_19->proc);
 FUNC_4(VAR_19->vp, 0);




 VAR_29 = FUNC_5(VAR_19, &VAR_17);

 FUNC_15(VAR_19->vp, VAR_3 | VAR_2);
 if (VAR_29)
  return (VAR_29);




 VAR_21 = VAR_19->proc->p_vmspace;

 VAR_23 = VAR_19->object;
 VAR_22 = &VAR_21->vm_map;
 FUNC_11(VAR_22);
 FUNC_14(VAR_23);

 VAR_24 = VAR_26 + VAR_20->a_text;
 VAR_29 = FUNC_10(VAR_22, VAR_23,
  VAR_27,
  VAR_26, VAR_24,
  VAR_16 | VAR_15, VAR_14,
  VAR_4 | VAR_5 | VAR_6);
 if (VAR_29) {
  FUNC_12(VAR_22);
  FUNC_13(VAR_23);
  return (VAR_29);
 }
 FUNC_3(VAR_19->vp);
 VAR_25 = VAR_24 + VAR_20->a_data;
 if (VAR_20->a_data) {
  FUNC_14(VAR_23);
  VAR_29 = FUNC_10(VAR_22, VAR_23,
   VAR_27 + VAR_20->a_text,
   VAR_24, VAR_25,
   VAR_14, VAR_14,
   VAR_4 | VAR_5 | VAR_6);
  if (VAR_29) {
   FUNC_12(VAR_22);
   FUNC_13(VAR_23);
   return (VAR_29);
  }
  FUNC_3(VAR_19->vp);
 }

 if (VAR_28) {
  VAR_29 = FUNC_10(VAR_22, ((void*)0), 0,
   VAR_25, VAR_25 + VAR_28,
   VAR_14, VAR_14, 0);
  if (VAR_29) {
   FUNC_12(VAR_22);
   return (VAR_29);
  }
 }
 FUNC_12(VAR_22);


 VAR_21->vm_tsize = VAR_20->a_text >> VAR_9;
 VAR_21->vm_dsize = (VAR_20->a_data + VAR_28) >> VAR_9;
 VAR_21->vm_taddr = (caddr_t) (uintptr_t) VAR_26;
 VAR_21->vm_daddr = (caddr_t) (uintptr_t)
       (VAR_26 + VAR_20->a_text);


 VAR_19->interpreted = 0;
 VAR_19->entry_addr = VAR_20->a_entry;

 VAR_19->proc->p_sysent = &VAR_17;

 return (0);
}
