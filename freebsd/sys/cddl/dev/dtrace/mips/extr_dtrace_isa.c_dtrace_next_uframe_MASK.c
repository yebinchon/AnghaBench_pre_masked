
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int register_t ;
struct TYPE_8__ {int cpuc_dtrace_flags; } ;
struct TYPE_6__ {int rs; int rt; scalar_t__ imm; } ;
struct TYPE_5__ {int op; } ;
struct TYPE_7__ {TYPE_2__ IType; TYPE_1__ JType; void* word; } ;
typedef TYPE_3__ InstFmt ;


 int volatile VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 TYPE_4__* VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int
FUNC_2(register_t *VAR_5, register_t *VAR_6, register_t *VAR_7)
{
 int VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;
 register_t VAR_12;
 int VAR_13;
 InstFmt VAR_14;

 volatile uint16_t *VAR_15 =
     (volatile uint16_t *)&VAR_3[VAR_4].cpuc_dtrace_flags;

 VAR_9 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_8 = 0;
 VAR_13 = 0;

 while (VAR_8 < VAR_1) {
  VAR_10 = FUNC_0((void *)(vm_offset_t)(*VAR_5 - VAR_8));

  if (*VAR_15 & VAR_0)
   goto fault;


  if (((VAR_10 & 0xffff8000) == 0x27bd8000)
      || ((VAR_10 & 0xffff8000) == 0x67bd8000)) {
   VAR_12 = *VAR_5 - VAR_8;
   VAR_9 = 1;
   break;
  }


  if ((VAR_10 & 0xffff8000) == 0x3c1c0000) {





   VAR_12 = *VAR_5 - VAR_8;
  }

  if (VAR_12) {







   if (((VAR_10 & 0xffff8000) == 0x27bd0000)
       || ((VAR_10 & 0xffff8000) == 0x67bd0000))
    break;

   if (VAR_10 == 0x03e00008)
    break;
  }

  VAR_8 += sizeof(int);
 }

 if (!VAR_12)
  return (-1);

 if (VAR_9) {
  VAR_8 = 0;
  while ((VAR_8 < VAR_2)
      && ((VAR_12 + VAR_8) < *VAR_5)) {
   VAR_14.word =
       FUNC_0((void *)(vm_offset_t)(VAR_12 + VAR_8));
   switch (VAR_14.JType.op) {
   case 128:

    if (VAR_14.IType.rs != 29)
     break;

    if (VAR_11 & (1 << VAR_14.IType.rt))
     break;
    VAR_11 |= (1 << VAR_14.IType.rt);
    if (VAR_14.IType.rt == 31)
     *VAR_7 = FUNC_0((void *)(vm_offset_t)(*VAR_6 + (short)VAR_14.IType.imm));
    break;

   case 129:

    if (VAR_14.IType.rs != 29)
     break;

    if (VAR_11 & (1 << VAR_14.IType.rt))
     break;
    VAR_11 |= (1 << VAR_14.IType.rt);

    if (VAR_14.IType.rt == 31)
     *VAR_7 = FUNC_1((void *)(vm_offset_t)(*VAR_6 + (short)VAR_14.IType.imm));
   break;

   case 133:
   case 132:
   case 131:
   case 130:

    if (VAR_14.IType.rs != 29 || VAR_14.IType.rt != 29)
     break;
    VAR_13 = -((short)VAR_14.IType.imm);
   }

   VAR_8 += sizeof(int);

   if (*VAR_15 & VAR_0)
    goto fault;
  }
 }




 if (*VAR_5 == *VAR_7)
  return (-1);

 *VAR_5 = *VAR_7;
 *VAR_6 += VAR_13;

 return (0);
fault:



 *VAR_15 &= ~VAR_0;
 return (-1);
}
