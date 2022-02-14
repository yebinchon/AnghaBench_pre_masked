
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct bios_smap {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int base; int length; } ;
struct TYPE_5__ {scalar_t__ ebx; int addr; int eax; int ecx; int edx; int efl; void* ctl; int edi; int es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 uint64_t VAR_11;


 VAR_10 = 0;
 do {
  VAR_10 = VAR_4;
  VAR_10 = VAR_1;
  VAR_10 = 0xe820;
  VAR_10 = sizeof(struct bios_smap);
  VAR_10 = VAR_2;
  VAR_10 = FUNC_1(&VAR_9);
  VAR_10 = FUNC_0(&VAR_9);
  FUNC_2();
  if ((VAR_10 & 1) || (VAR_10 != VAR_2))
   break;

  if ((VAR_9.type == VAR_3) && (VAR_9.base == 0) &&
      (VAR_9.length >= (512 * 1024)))
   VAR_5 = VAR_9.length;

  if ((VAR_9.type == VAR_3) &&
      (VAR_9.base == 0x100000)) {
   VAR_6 = VAR_9.length;
  }





  if ((VAR_9.type == VAR_3) &&
      (VAR_9.base > 0x100000) && (VAR_9.base < 0x100000000ull)) {
   VAR_11 = VAR_9.length;





   if (VAR_9.base + VAR_11 > 0x100000000ull)
    VAR_11 = 0x100000000ull - VAR_9.base;

   if (VAR_11 > VAR_8) {
    VAR_8 = VAR_11;
    VAR_7 = VAR_9.base;
   }
  }
 } while (VAR_10 != 0);


 if (VAR_5 == 0) {
  VAR_10 = 0;
  VAR_10 = 0x12;
  FUNC_2();

  VAR_5 = (VAR_10 & 0xffff) * 1024;
 }





 if (VAR_6 == 0) {
  VAR_10 = VAR_4;
  VAR_10 = 0x15;
  VAR_10 = 0xe801;
  FUNC_2();
  if (!(VAR_10 & 1)) {
   VAR_6 = ((VAR_10 & 0xffff) +
       ((VAR_10 & 0xffff) * 64)) * 1024;
  }
 }
 if (VAR_6 == 0) {
  VAR_10 = 0;
  VAR_10 = 0x15;
  VAR_10 = 0x8800;
  FUNC_2();
  VAR_6 = (VAR_10 & 0xffff) * 1024;
 }






 if (VAR_6 >= VAR_0 && VAR_8 < VAR_0) {
  VAR_8 = VAR_0;
  VAR_7 = VAR_6 + 0x100000 - VAR_0;
 }
}
