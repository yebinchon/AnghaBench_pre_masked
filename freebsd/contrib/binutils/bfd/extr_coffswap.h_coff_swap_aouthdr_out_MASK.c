
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_aouthdr {int magic; int vstamp; int o_snentry; int o_sntext; int o_sndata; int o_sntoc; int o_snloader; int o_snbss; int o_algntext; int o_algndata; int o_modtype; int o_cputype; int fprmask; int gprmask; int gp_value; int bss_start; int * cprmask; int o_maxdata; int o_maxstack; int o_toc; int tagentries; int data_start; int text_start; int entry; int bsize; int dsize; int tsize; } ;
typedef int bfd ;
struct TYPE_2__ {int fprmask; int gprmask; int gp_value; int bss_start; int padding; int bldrev; int * cprmask; int o_resv3; int o_debugger; int o_resv2; int o_maxdata; int o_maxstack; int o_cputype; int o_modtype; int o_algndata; int o_algntext; int o_snbss; int o_snloader; int o_sntoc; int o_sndata; int o_sntext; int o_snentry; int o_toc; int tagentries; int data_start; int text_start; int entry; int bsize; int dsize; int tsize; int vstamp; int magic; } ;
typedef TYPE_1__ AOUTHDR ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_10 (bfd * VAR_1, void * VAR_2, void * VAR_3)
{
  struct internal_aouthdr *VAR_4 = (struct internal_aouthdr *) VAR_2;
  AOUTHDR *VAR_5 = (AOUTHDR *) VAR_3;

  FUNC_0 (VAR_1, VAR_4->magic, VAR_5->magic);
  FUNC_0 (VAR_1, VAR_4->vstamp, VAR_5->vstamp);
  FUNC_8 (VAR_1, VAR_4->tsize, VAR_5->tsize);
  FUNC_5 (VAR_1, VAR_4->dsize, VAR_5->dsize);
  FUNC_3 (VAR_1, VAR_4->bsize, VAR_5->bsize);
  FUNC_6 (VAR_1, VAR_4->entry, VAR_5->entry);
  FUNC_7 (VAR_1, VAR_4->text_start,
     VAR_5->text_start);
  FUNC_4 (VAR_1, VAR_4->data_start,
     VAR_5->data_start);
  return VAR_0;
}
