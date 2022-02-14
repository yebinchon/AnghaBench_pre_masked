
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct internal_scnhdr {int s_vaddr; scalar_t__ s_paddr; scalar_t__ s_size; int s_flags; int s_nlnno; int s_nreloc; int s_lnnoptr; int s_relptr; int s_scnptr; int s_name; } ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ ImageBase; } ;
struct TYPE_6__ {TYPE_1__ pe_opthdr; } ;
struct TYPE_5__ {int s_nlnno; int s_nreloc; int s_flags; int s_lnnoptr; int s_relptr; int s_scnptr; int s_size; int s_paddr; int s_vaddr; int s_name; } ;
typedef TYPE_2__ SCNHDR ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 TYPE_3__* FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (bfd * VAR_1, void * VAR_2, void * VAR_3)
{
  SCNHDR *VAR_4 = (SCNHDR *) VAR_2;
  struct internal_scnhdr *VAR_5 = (struct internal_scnhdr *) VAR_3;

  FUNC_9 (VAR_5->s_name, VAR_4->s_name, sizeof (VAR_5->s_name));

  VAR_5->s_vaddr = FUNC_5 (VAR_1, VAR_4->s_vaddr);
  VAR_5->s_paddr = FUNC_1 (VAR_1, VAR_4->s_paddr);
  VAR_5->s_size = FUNC_4 (VAR_1, VAR_4->s_size);
  VAR_5->s_scnptr = FUNC_3 (VAR_1, VAR_4->s_scnptr);
  VAR_5->s_relptr = FUNC_2 (VAR_1, VAR_4->s_relptr);
  VAR_5->s_lnnoptr = FUNC_0 (VAR_1, VAR_4->s_lnnoptr);
  VAR_5->s_flags = FUNC_7 (VAR_1, VAR_4->s_flags);
  VAR_5->s_nreloc = FUNC_6 (VAR_1, VAR_4->s_nreloc);
  VAR_5->s_nlnno = FUNC_6 (VAR_1, VAR_4->s_nlnno);


  if (VAR_5->s_vaddr != 0)
    {
      VAR_5->s_vaddr += FUNC_10 (VAR_1)->pe_opthdr.ImageBase;


      VAR_5->s_vaddr &= 0xffffffff;

    }






  if (VAR_5->s_paddr > 0
      && (((VAR_5->s_flags & VAR_0) != 0
    && (! FUNC_8 (VAR_1) || VAR_5->s_size == 0))
          || (FUNC_8 (VAR_1) && VAR_5->s_size > VAR_5->s_paddr)))




    VAR_5->s_size = VAR_5->s_paddr;

}
