
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_filehdr {int f_target_id; int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef int bfd ;
struct TYPE_2__ {int f_target_id; int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef TYPE_1__ FILHDR ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static unsigned int
FUNC_6 (bfd *VAR_0, void * VAR_1, void * VAR_2)
{
  struct internal_filehdr *VAR_3 = (struct internal_filehdr *) VAR_1;
  FILHDR *VAR_4 = (FILHDR *) VAR_2;




  FUNC_2 (VAR_0, VAR_3->f_magic, VAR_4->f_magic);
  FUNC_2 (VAR_0, VAR_3->f_nscns, VAR_4->f_nscns);
  FUNC_3 (VAR_0, VAR_3->f_timdat, VAR_4->f_timdat);
  FUNC_4 (VAR_0, VAR_3->f_symptr, VAR_4->f_symptr);
  FUNC_3 (VAR_0, VAR_3->f_nsyms, VAR_4->f_nsyms);
  FUNC_2 (VAR_0, VAR_3->f_opthdr, VAR_4->f_opthdr);
  FUNC_2 (VAR_0, VAR_3->f_flags, VAR_4->f_flags);







  return FUNC_5 (VAR_0);
}
