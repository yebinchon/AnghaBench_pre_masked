
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_filehdr {void* f_target_id; void* f_flags; void* f_opthdr; void* f_nsyms; int f_symptr; void* f_timdat; void* f_nscns; void* f_magic; } ;
typedef int bfd ;
struct TYPE_2__ {int f_target_id; int f_flags; int f_opthdr; int f_nsyms; int f_symptr; int f_timdat; int f_nscns; int f_magic; } ;
typedef TYPE_1__ FILHDR ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  FILHDR *VAR_3 = (FILHDR *) VAR_1;
  struct internal_filehdr *VAR_4 = (struct internal_filehdr *) VAR_2;




  VAR_4->f_magic = FUNC_3 (VAR_0, VAR_3->f_magic);
  VAR_4->f_nscns = FUNC_3 (VAR_0, VAR_3->f_nscns);
  VAR_4->f_timdat = FUNC_4 (VAR_0, VAR_3->f_timdat);
  VAR_4->f_symptr = FUNC_2 (VAR_0, VAR_3->f_symptr);
  VAR_4->f_nsyms = FUNC_4 (VAR_0, VAR_3->f_nsyms);
  VAR_4->f_opthdr = FUNC_3 (VAR_0, VAR_3->f_opthdr);
  VAR_4->f_flags = FUNC_3 (VAR_0, VAR_3->f_flags);







}
