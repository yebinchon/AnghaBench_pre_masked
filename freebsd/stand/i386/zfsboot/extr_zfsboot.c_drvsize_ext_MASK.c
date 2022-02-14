
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct dsk {int drive; } ;
struct zfsdsk {struct dsk dsk; } ;
struct TYPE_2__ {int addr; int eax; int edx; int ecx; int ebx; int efl; void* ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (struct dsk*) ;
 int FUNC_2 (struct dsk*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static uint64_t
FUNC_4(struct zfsdsk *VAR_3)
{
 struct dsk *VAR_4;
 uint64_t VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_4 = &VAR_3->dsk;


 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_2 = VAR_1;
 VAR_2 = 0x13;
 VAR_2 = 0x800;
 VAR_2 = VAR_4->drive;
 FUNC_3();


 if (FUNC_0(VAR_2) ||
     (VAR_2 & 0xff) <= (unsigned)(VAR_4->drive & 0x7f))
  return (0);
 VAR_7 = ((VAR_2 & 0xc0) << 2) + ((VAR_2 & 0xff00) >> 8) + 1;

 VAR_8 = ((VAR_2 & 0xff00) >> 8) + 1;
 VAR_9 = VAR_2 & 0x3f;

 VAR_5 = (uint64_t)VAR_7 * VAR_8 * VAR_9;


 VAR_2 = VAR_1;
 VAR_2 = 0x13;
 VAR_2 = 0x4100;
 VAR_2 = VAR_4->drive;
 VAR_2 = 0x55aa;
 FUNC_3();
 if (FUNC_0(VAR_2) ||
     (VAR_2 & 0xffff) != 0xaa55 ||
     (VAR_2 & VAR_0) == 0)
  return (VAR_5);

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 > VAR_5)
  VAR_5 = VAR_6;

 return (VAR_5);
}
