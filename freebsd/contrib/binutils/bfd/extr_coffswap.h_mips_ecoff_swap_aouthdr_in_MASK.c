
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_aouthdr {void* fprmask; void* gprmask; void* gp_value; void* bss_start; void** cprmask; void* o_maxdata; void* o_maxstack; void* o_cputype; void* o_modtype; void* o_algndata; void* o_algntext; void* o_snbss; void* o_snloader; void* o_sntoc; void* o_sndata; void* o_sntext; void* o_snentry; void* o_toc; int * vid; int o_sri; int o_inlib; void* tagentries; int data_start; int text_start; int entry; int bsize; int dsize; int tsize; void* vstamp; void* magic; } ;
typedef int bfd ;
struct TYPE_2__ {int fprmask; int gprmask; int gp_value; int bss_start; int * cprmask; int o_maxdata; int o_maxstack; int o_cputype; int o_modtype; int o_algndata; int o_algntext; int o_snbss; int o_snloader; int o_sntoc; int o_sndata; int o_sntext; int o_snentry; int o_toc; scalar_t__ vid; scalar_t__ o_sri; scalar_t__ o_inlib; int tagentries; int data_start; int text_start; int entry; int bsize; int dsize; int tsize; int vstamp; int magic; } ;
typedef TYPE_1__ AOUTHDR ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  AOUTHDR *VAR_3;
  struct internal_aouthdr *VAR_4;

  VAR_3 = (AOUTHDR *) VAR_1;
  VAR_4 = (struct internal_aouthdr *) VAR_2;
  VAR_4->magic = FUNC_6 (VAR_0, VAR_3->magic);
  VAR_4->vstamp = FUNC_6 (VAR_0, VAR_3->vstamp);
  VAR_4->tsize = FUNC_5 (VAR_0, VAR_3->tsize);
  VAR_4->dsize = FUNC_2 (VAR_0, VAR_3->dsize);
  VAR_4->bsize = FUNC_0 (VAR_0, VAR_3->bsize);
  VAR_4->entry = FUNC_3 (VAR_0, VAR_3->entry);
  VAR_4->text_start =
    FUNC_4 (VAR_0, VAR_3->text_start);
  VAR_4->data_start =
    FUNC_1 (VAR_0, VAR_3->data_start);
}
