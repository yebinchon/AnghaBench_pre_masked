
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_scnhdr {int s_align; int s_nlnno; int s_nreloc; int s_flags; int s_lnnoptr; int s_relptr; int s_scnptr; int s_size; int s_paddr; int s_vaddr; int s_name; } ;
typedef int bfd ;
struct TYPE_2__ {int s_align; int s_nlnno; int s_nreloc; int s_flags; int s_lnnoptr; int s_relptr; int s_scnptr; int s_size; int s_paddr; int s_vaddr; int s_name; } ;
typedef TYPE_1__ SCNHDR ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_13 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  SCNHDR *VAR_3 = (SCNHDR *) VAR_1;
  struct internal_scnhdr *VAR_4 = (struct internal_scnhdr *) VAR_2;




  FUNC_12 (VAR_4->s_name, VAR_3->s_name, sizeof (VAR_4->s_name));

  VAR_4->s_vaddr = FUNC_11 (VAR_0, VAR_3->s_vaddr);
  VAR_4->s_paddr = FUNC_7 (VAR_0, VAR_3->s_paddr);
  VAR_4->s_size = FUNC_10 (VAR_0, VAR_3->s_size);

  VAR_4->s_scnptr = FUNC_9 (VAR_0, VAR_3->s_scnptr);
  VAR_4->s_relptr = FUNC_8 (VAR_0, VAR_3->s_relptr);
  VAR_4->s_lnnoptr = FUNC_4 (VAR_0, VAR_3->s_lnnoptr);
  VAR_4->s_flags = FUNC_3 (VAR_0, VAR_3->s_flags);
  VAR_4->s_nreloc = FUNC_6 (VAR_0, VAR_3->s_nreloc);
  VAR_4->s_nlnno = FUNC_5 (VAR_0, VAR_3->s_nlnno);






}
