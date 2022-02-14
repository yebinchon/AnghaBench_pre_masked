
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_scnhdr {scalar_t__ s_nlnno; scalar_t__ s_nreloc; int s_align; int s_name; int s_flags; int s_lnnoptr; int s_relptr; int s_scnptr; int s_size; int s_paddr; int s_vaddr; } ;
typedef int bfd ;
struct TYPE_2__ {char* s_name; int s_align; int s_nreloc; int s_nlnno; int s_flags; int s_lnnoptr; int s_relptr; int s_scnptr; int s_size; int s_paddr; int s_vaddr; } ;
typedef TYPE_1__ SCNHDR ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int ,char*,int) ;
 unsigned int FUNC_15 (int *) ;
 int VAR_2 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (int ,int ,char*,int) ;
 int FUNC_20 (int ,int ,char*,int) ;

__attribute__((used)) static unsigned int
FUNC_21 (bfd * VAR_3, void * VAR_4, void * VAR_5)
{
  struct internal_scnhdr *VAR_6 = (struct internal_scnhdr *) VAR_4;
  SCNHDR *VAR_7 = (SCNHDR *) VAR_5;
  unsigned int VAR_8 = FUNC_15 (VAR_3);




  FUNC_18 (VAR_7->s_name, VAR_6->s_name, sizeof (VAR_6->s_name));

  FUNC_12 (VAR_3, VAR_6->s_vaddr, VAR_7->s_vaddr);
  FUNC_8 (VAR_3, VAR_6->s_paddr, VAR_7->s_paddr);
  FUNC_11 (VAR_3, VAR_6->s_size, VAR_7->s_size);
  FUNC_10 (VAR_3, VAR_6->s_scnptr, VAR_7->s_scnptr);
  FUNC_9 (VAR_3, VAR_6->s_relptr, VAR_7->s_relptr);
  FUNC_5 (VAR_3, VAR_6->s_lnnoptr, VAR_7->s_lnnoptr);
  FUNC_4 (VAR_3, VAR_6->s_flags, VAR_7->s_flags);




  if (VAR_6->s_nlnno <= VAR_0)
    FUNC_6 (VAR_3, VAR_6->s_nlnno, VAR_7->s_nlnno);
  else
    {
      char VAR_9[sizeof (VAR_6->s_name) + 1];

      FUNC_18 (VAR_9, VAR_6->s_name, sizeof (VAR_6->s_name));
      VAR_9[sizeof (VAR_6->s_name)] = '\0';
      FUNC_14)
 (FUNC_13("%s: warning: %s: line number overflow: 0x%lx > 0xffff"),
  FUNC_16 (VAR_3),
  VAR_9, VAR_6->s_nlnno);
      FUNC_6 (VAR_3, 0xffff, VAR_7->s_nlnno);
    }

  if (VAR_6->s_nreloc <= VAR_1)
    FUNC_7 (VAR_3, VAR_6->s_nreloc, VAR_7->s_nreloc);
  else
    {
      char VAR_10[sizeof (VAR_6->s_name) + 1];

      FUNC_18 (VAR_10, VAR_6->s_name, sizeof (VAR_6->s_name));
      VAR_10[sizeof (VAR_6->s_name)] = '\0';
      FUNC_14) (FUNC_13("%s: %s: reloc overflow: 0x%lx > 0xffff"),
        FUNC_16 (VAR_3),
        VAR_10, VAR_6->s_nreloc);
      FUNC_17 (VAR_2);
      FUNC_7 (VAR_3, 0xffff, VAR_7->s_nreloc);
      VAR_8 = 0;
    }
  return VAR_8;
}
