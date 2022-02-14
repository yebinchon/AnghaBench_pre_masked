
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int register_t ;
struct TYPE_7__ {int rs; int rt; scalar_t__ imm; } ;
struct TYPE_6__ {int rs; int func; } ;
struct TYPE_5__ {int op; } ;
struct TYPE_8__ {unsigned int word; TYPE_3__ IType; TYPE_2__ RType; TYPE_1__ JType; } ;
typedef TYPE_4__ InstFmt ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(register_t *VAR_0, register_t *VAR_1,
 register_t *VAR_2, int *VAR_3)
{
 InstFmt VAR_4;




 uintptr_t VAR_5;
 unsigned VAR_6, VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9, VAR_10;
 register_t VAR_11 = 0;
 int VAR_12, VAR_13;
 vm_offset_t VAR_14;




 if (VAR_3) {
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
   VAR_3[VAR_13] = 0;
 }


 VAR_10 = 0;
 if (VAR_8++ > 100) {

  goto error;
 }


 if (!FUNC_0(*VAR_1)) {
  goto error;
 }


 if (!FUNC_0(*VAR_0)) {
  goto error;
 }






 VAR_5 = *VAR_0 - sizeof(int);
 while (1) {
  VAR_6 = FUNC_1((int *)VAR_5);


  if (((VAR_6 & 0xffff8000) == 0x27bd8000)
      || ((VAR_6 & 0xffff8000) == 0x67bd8000))
   break;


  if (VAR_6 == 0x03e00008) {

   VAR_5 += 2 * sizeof(int);
   break;
  }

  VAR_5 -= sizeof(int);
 }


 while ((VAR_6 = FUNC_1((int *)VAR_5)) == 0)
  VAR_5 += sizeof(int);


 VAR_10 = 0;
 VAR_9 = 3;
 VAR_7 = 0;
 for (; VAR_9; VAR_5 += sizeof(int),
     VAR_9 = (VAR_9 == 3) ? 3 : VAR_9 - 1) {

  if (VAR_5 >= *VAR_0)
   break;
  VAR_6 = FUNC_1((int *)VAR_5);
  VAR_4.word = VAR_6;
  switch (VAR_4.JType.op) {
  case 130:
   switch (VAR_4.RType.func) {
   case 132:
   case 133:
    VAR_9 = 2;
    break;

   case 128:
   case 142:
    VAR_9 = 1;
   };
   break;

  case 149:
  case 135:
  case 134:
  case 146:
  case 143:
  case 144:
  case 145:
   VAR_9 = 2;
   break;

  case 141:
  case 140:
  case 139:
  case 138:
   switch (VAR_4.RType.rs) {
   case 148:
   case 147:
    VAR_9 = 2;
   };
   break;

  case 129:

   if (VAR_4.IType.rs != 29)
    break;

   if (VAR_7 & (1 << VAR_4.IType.rt))
    break;
   VAR_7 |= (1 << VAR_4.IType.rt);
   VAR_14 = (vm_offset_t)(*VAR_1 + (short)VAR_4.IType.imm);
   switch (VAR_4.IType.rt) {
   case 4:
   case 5:
   case 6:
   case 7:






    VAR_12 = VAR_4.IType.rt - 4;
    if (VAR_2)
     VAR_2[VAR_12] = FUNC_1((int*)VAR_14);
    if (VAR_3)
     VAR_3[VAR_12] = 1;
    break;
   case 31:
    VAR_11 = FUNC_1((int *)VAR_14);
   }
   break;

  case 131:

   if (VAR_4.IType.rs != 29)
    break;

   if (VAR_7 & (1 << VAR_4.IType.rt))
    break;
   VAR_7 |= (1 << VAR_4.IType.rt);
   VAR_14 = (vm_offset_t)(*VAR_1 + (short)VAR_4.IType.imm);
   switch (VAR_4.IType.rt) {
   case 4:
   case 5:
   case 6:
   case 7:






    VAR_12 = VAR_4.IType.rt - 4;
    if (VAR_2)
     VAR_2[VAR_12] = FUNC_2((int *)VAR_14);
    if (VAR_3)
     VAR_3[VAR_12] = 1;
    break;

   case 31:
    VAR_11 = FUNC_2((int *)VAR_14);
   }
   break;

  case 151:
  case 150:
  case 137:
  case 136:

   if (VAR_4.IType.rs != 29 || VAR_4.IType.rt != 29)
    break;
   VAR_10 = -((short)VAR_4.IType.imm);
  }
 }

 if (!FUNC_0(VAR_11))
  return (-1);

 *VAR_0 = VAR_11;
 *VAR_1 += VAR_10;
 return (0);
error:
 return (-1);
}
