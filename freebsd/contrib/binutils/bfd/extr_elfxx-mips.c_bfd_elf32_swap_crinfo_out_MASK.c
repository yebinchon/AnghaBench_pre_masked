
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vaddr; int konst; int info; } ;
struct TYPE_5__ {unsigned long ctype; unsigned long rtype; unsigned long dist2to; unsigned long relvaddr; unsigned long konst; unsigned long vaddr; } ;
typedef TYPE_1__ Elf32_crinfo ;
typedef TYPE_2__ Elf32_External_crinfo ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int *,unsigned long,int ) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_8, const Elf32_crinfo *VAR_9,
      Elf32_External_crinfo *VAR_10)
{
  unsigned long VAR_11;

  VAR_11 = (((VAR_9->ctype & VAR_0) << VAR_1)
       | ((VAR_9->rtype & VAR_6) << VAR_7)
       | ((VAR_9->dist2to & VAR_2) << VAR_3)
       | ((VAR_9->relvaddr & VAR_4) << VAR_5));
  FUNC_0 (VAR_8, VAR_11, VAR_10->info);
  FUNC_0 (VAR_8, VAR_9->konst, VAR_10->konst);
  FUNC_0 (VAR_8, VAR_9->vaddr, VAR_10->vaddr);
}
