
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct subfile {int dummy; } ;
struct TYPE_5__ {scalar_t__ l_paddr; int l_symndx; } ;
struct internal_lineno {scalar_t__ l_lnno; TYPE_1__ l_addr; } ;
struct coff_symfile_info {unsigned int max_lineno_offset; } ;
typedef int bfd ;
struct TYPE_8__ {int section_offsets; int * obfd; scalar_t__ sym_private; } ;
struct TYPE_7__ {int local_linesz; } ;
struct TYPE_6__ {TYPE_4__* objfile; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,int,int *) ;
 int FUNC_4 (int *,void*,struct internal_lineno*) ;
 int FUNC_5 (int *,unsigned int,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 unsigned int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct subfile*,unsigned int,scalar_t__) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_11 (struct subfile *VAR_3, unsigned VAR_4, unsigned VAR_5,
    CORE_ADDR VAR_6,
    CORE_ADDR VAR_7, unsigned *VAR_8)
{
  unsigned int VAR_9;
  CORE_ADDR VAR_10;
  void *VAR_11;
  struct internal_lineno VAR_12;
  unsigned int VAR_13;
  bfd *VAR_14;
  int VAR_15;

  if (VAR_5 == 0 && VAR_6 == 0 && VAR_7 == 0)
    return;
  VAR_9 = VAR_4;
  VAR_13 =
    ((struct coff_symfile_info *) VAR_2->objfile->sym_private)
    ->max_lineno_offset;

  if (VAR_5 != 0)
    {
      if (VAR_5 >= VAR_13)
 {
   FUNC_7 (&VAR_1,
       "Bad line table offset in C_EINCL directive");
   return;
 }
      VAR_13 = VAR_5;
    }
  else
    VAR_13 -= 1;

  VAR_14 = VAR_2->objfile->obfd;
  VAR_15 = FUNC_6 (VAR_14)->local_linesz;
  VAR_11 = FUNC_2 (VAR_15);

  while (VAR_9 <= VAR_13)
    {
      FUNC_5 (VAR_14, VAR_9, VAR_0);
      FUNC_3 (VAR_11, VAR_15, VAR_14);
      FUNC_4 (VAR_14, VAR_11, &VAR_12);


      VAR_10 = (VAR_12.l_lnno
       ? VAR_12.l_addr.l_paddr
       : FUNC_9 (VAR_12.l_addr.l_symndx));
      VAR_10 += FUNC_0 (VAR_2->objfile->section_offsets,
   FUNC_1 (VAR_2->objfile));

      if (VAR_10 < VAR_6 || (VAR_7 && VAR_10 >= VAR_7))
 return;

      if (VAR_12.l_lnno == 0)
 {
   *VAR_8 = FUNC_8 (VAR_12.l_addr.l_symndx);
   FUNC_10 (VAR_3, 0, VAR_10);
   --(*VAR_8);
 }
      else
 FUNC_10 (VAR_3, *VAR_8 + VAR_12.l_lnno, VAR_10);
      VAR_9 += VAR_15;
    }
}
