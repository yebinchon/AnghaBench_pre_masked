
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct bios_smap_xattr {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int base; int length; } ;
struct TYPE_5__ {scalar_t__ ebx; int addr; int eax; int ecx; int edx; void* ctl; int efl; int edi; int es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_9 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__ VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_4 () ;

void
FUNC_5(void)
{
 uint64_t VAR_19;


 VAR_18 = 0;
 do {
  VAR_18 = VAR_9;
  VAR_18 = 0x15;
  VAR_18 = 0xe820;
  VAR_18 = sizeof(struct bios_smap_xattr);
  VAR_18 = VAR_7;
  VAR_18 = FUNC_2(&VAR_17);
  VAR_18 = FUNC_1(&VAR_17);
  FUNC_4();
  if ((FUNC_0(VAR_18)) || (VAR_18 != VAR_7))
   break;

  if ((VAR_17.type == VAR_8) && (VAR_17.base == 0) &&
      (VAR_17.length >= (512 * 1024))) {
   VAR_11 = VAR_17.length;
   VAR_10 |= VAR_2;
  }


  if ((VAR_17.type == VAR_8) &&
      (VAR_17.base == 0x100000) &&
      !(FUNC_3() & VAR_0)) {
   VAR_12 = VAR_17.length;
   VAR_10 |= VAR_5;
  }





  if ((VAR_17.type == VAR_8) &&
      (VAR_17.base > 0x100000) &&
      (VAR_17.base < 0x100000000ull)) {
   VAR_19 = VAR_17.length;





   if (VAR_17.base + VAR_19 > 0x100000000ull)
    VAR_19 = 0x100000000ull - VAR_17.base;





   if (VAR_13 < VAR_17.base && VAR_19 >= VAR_6) {
    VAR_13 = VAR_17.base + VAR_19 - VAR_6;
    VAR_14 = VAR_6;
   }
  }
 } while (VAR_18 != 0);


 if (VAR_11 == 0) {
  VAR_18 = 0;
  VAR_18 = 0x12;
  FUNC_4();

  VAR_11 = (VAR_18 & 0xffff) * 1024;
  VAR_10 |= VAR_1;
 }





 if (VAR_12 == 0) {
  VAR_18 = VAR_9;
  VAR_18 = 0x15;
  VAR_18 = 0xe801;
  FUNC_4();
  if (!(FUNC_0(VAR_18))) {






   VAR_14 = 0;
   VAR_13 = 0;







   VAR_12 = (VAR_18 & 0xffff) * 1024;
   if (VAR_12 == (1024 * 0x3c00))
    VAR_12 += (VAR_18 & 0xffff) * 64 * 1024;


   if (VAR_12 > 0x3ff00000)
    VAR_12 = 0x3ff00000;

   VAR_10 |= VAR_4;
  }
 }
 if (VAR_12 == 0) {
  VAR_18 = 0;
  VAR_18 = 0x15;
  VAR_18 = 0x8800;
  FUNC_4();
  VAR_12 = (VAR_18 & 0xffff) * 1024;
  VAR_10 |= VAR_3;
 }


 if (VAR_14 != 0) {
  VAR_15 = VAR_16 = VAR_13;
 } else {
  VAR_15 = VAR_16 = 0x100000 + VAR_12;
 }






 if (VAR_12 >= VAR_6 && VAR_14 < VAR_6) {
  VAR_14 = VAR_6;
  VAR_13 = VAR_15 - VAR_6;
  VAR_15 = VAR_16 = VAR_13;
 }
}
