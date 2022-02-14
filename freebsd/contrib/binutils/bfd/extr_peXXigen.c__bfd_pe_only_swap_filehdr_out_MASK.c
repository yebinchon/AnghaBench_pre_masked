
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_filehdr {int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef int bfd ;
struct TYPE_2__ {int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef TYPE_1__ FILHDR ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

unsigned int
FUNC_3 (bfd * VAR_1, void * VAR_2, void * VAR_3)
{
  struct internal_filehdr *VAR_4 = (struct internal_filehdr *) VAR_2;
  FILHDR *VAR_5 = (FILHDR *) VAR_3;

  FUNC_0 (VAR_1, VAR_4->f_magic, VAR_5->f_magic);
  FUNC_0 (VAR_1, VAR_4->f_nscns, VAR_5->f_nscns);
  FUNC_1 (VAR_1, VAR_4->f_timdat, VAR_5->f_timdat);
  FUNC_2 (VAR_1, VAR_4->f_symptr, VAR_5->f_symptr);
  FUNC_1 (VAR_1, VAR_4->f_nsyms, VAR_5->f_nsyms);
  FUNC_0 (VAR_1, VAR_4->f_opthdr, VAR_5->f_opthdr);
  FUNC_0 (VAR_1, VAR_4->f_flags, VAR_5->f_flags);

  return VAR_0;
}
