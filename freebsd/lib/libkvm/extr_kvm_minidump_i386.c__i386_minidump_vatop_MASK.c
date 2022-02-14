
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_7__ {int kernbase; int ptesize; } ;
struct vmstate {TYPE_1__ hdr; } ;
typedef int pte ;
typedef int off_t ;
struct TYPE_8__ {int program; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int kvaddr_t ;
typedef int i386_pte_t ;
typedef int i386_physaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_5, kvaddr_t VAR_6, off_t *VAR_7)
{
 struct vmstate *VAR_8;
 i386_physaddr_t VAR_9;
 i386_pte_t VAR_10;
 kvaddr_t VAR_11;
 i386_physaddr_t VAR_12;
 off_t VAR_13;

 VAR_8 = VAR_5->vmst;
 VAR_9 = VAR_6 & VAR_0;

 if (VAR_6 >= VAR_8->hdr.kernbase) {
  VAR_11 = (VAR_6 - VAR_8->hdr.kernbase) >> VAR_1;
  if (VAR_11 >= VAR_8->hdr.ptesize / sizeof(VAR_10))
   goto invalid;
  VAR_10 = FUNC_0(VAR_5, VAR_11);
  if ((VAR_10 & VAR_4) == 0) {
   FUNC_1(VAR_5, VAR_5->program,
       "_i386_minidump_vatop: pte not valid");
   goto invalid;
  }
  VAR_12 = VAR_10 & VAR_3;
  VAR_13 = FUNC_2(VAR_5, VAR_12, VAR_2);
  if (VAR_13 == -1) {
   FUNC_1(VAR_5, VAR_5->program,
     "_i386_minidump_vatop: physical address 0x%jx not in minidump",
       (uintmax_t)VAR_12);
   goto invalid;
  }
  *VAR_7 = VAR_13 + VAR_9;
  return (VAR_2 - VAR_9);
 } else {
  FUNC_1(VAR_5, VAR_5->program,
     "_i386_minidump_vatop: virtual address 0x%jx not minidumped",
      (uintmax_t)VAR_6);
  goto invalid;
 }

invalid:
 FUNC_1(VAR_5, 0, "invalid address (0x%jx)", (uintmax_t)VAR_6);
 return (0);
}
