
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct bios_smap {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int base; int length; } ;
struct TYPE_5__ {scalar_t__ ebx; int addr; int eax; int ecx; int edx; void* ctl; int efl; int edi; int es; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
    uint64_t VAR_10;


    VAR_9 = 0;
    do {
 VAR_9 = VAR_3;
 VAR_9 = 0x15;
 VAR_9 = 0xe820;
 VAR_9 = sizeof(struct bios_smap);
 VAR_9 = VAR_1;
 VAR_9 = FUNC_2(&VAR_8);
 VAR_9 = FUNC_1(&VAR_8);
 FUNC_3();
 if (FUNC_0(VAR_9) || (VAR_9 != VAR_1))
     break;

 if ((VAR_8.type == VAR_2) && (VAR_8.base == 0) &&
     (VAR_8.length >= (512 * 1024)))
     VAR_4 = VAR_8.length;

 if ((VAR_8.type == VAR_2) && (VAR_8.base == 0x100000)) {
     VAR_5 = VAR_8.length;
 }





 if ((VAR_8.type == VAR_2) && (VAR_8.base > 0x100000) &&
     (VAR_8.base < 0x100000000ull)) {
     VAR_10 = VAR_8.length;




     if (VAR_8.base + VAR_10 > 0x100000000ull)
  VAR_10 = 0x100000000ull - VAR_8.base;

     if (VAR_10 > VAR_7) {
  VAR_7 = VAR_10;
  VAR_6 = VAR_8.base;
     }
 }
    } while (VAR_9 != 0);


    if (VAR_4 == 0) {
 VAR_9 = 0;
 VAR_9 = 0x12;
 FUNC_3();

 VAR_4 = (VAR_9 & 0xffff) * 1024;
    }


    if (VAR_5 == 0) {
 VAR_9 = VAR_3;
 VAR_9 = 0x15;
 VAR_9 = 0xe801;
 FUNC_3();
 if (!FUNC_0(VAR_9)) {
     VAR_5 = ((VAR_9 & 0xffff) + ((VAR_9 & 0xffff) * 64)) * 1024;
 }
    }
    if (VAR_5 == 0) {
 VAR_9 = 0;
 VAR_9 = 0x15;
 VAR_9 = 0x8800;
 FUNC_3();
 VAR_5 = (VAR_9 & 0xffff) * 1024;
    }






    if (VAR_5 >= VAR_0 && VAR_7 < VAR_0) {
 VAR_7 = VAR_0;
 VAR_6 = VAR_5 + 0x100000 - VAR_0;
    }
}
