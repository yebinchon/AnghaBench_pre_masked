
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fdr_ext {int* f_bits1; int* f_bits2; int f_cbLine; int f_cbLineOffset; int f_crfd; int f_rfdBase; int f_caux; int f_iauxBase; int f_cpd; int f_ipdFirst; int f_copt; int f_ioptBase; int f_cline; int f_ilineBase; int f_csym; int f_isymBase; int f_cbSs; int f_issBase; int f_rss; int f_adr; } ;
typedef int bfd ;
struct TYPE_3__ {long rss; int lang; int fMerge; int fReadin; int fBigendian; int glevel; void* cbLine; void* cbLineOffset; scalar_t__ reserved; void* crfd; void* rfdBase; void* caux; void* iauxBase; void* cpd; void* ipdFirst; void* copt; void* ioptBase; void* cline; void* ilineBase; void* csym; void* isymBase; void* cbSs; void* issBase; void* adr; } ;
typedef TYPE_1__ FDR ;


 void* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_14, void * VAR_15, FDR *VAR_16)
{
  struct fdr_ext VAR_17[1];

  *VAR_17 = *(struct fdr_ext *) VAR_15;

  VAR_16->adr = FUNC_0 (VAR_14, VAR_17->f_adr);
  VAR_16->rss = FUNC_2 (VAR_14, VAR_17->f_rss);




  VAR_16->issBase = FUNC_2 (VAR_14, VAR_17->f_issBase);
  VAR_16->cbSs = FUNC_0 (VAR_14, VAR_17->f_cbSs);
  VAR_16->isymBase = FUNC_2 (VAR_14, VAR_17->f_isymBase);
  VAR_16->csym = FUNC_2 (VAR_14, VAR_17->f_csym);
  VAR_16->ilineBase = FUNC_2 (VAR_14, VAR_17->f_ilineBase);
  VAR_16->cline = FUNC_2 (VAR_14, VAR_17->f_cline);
  VAR_16->ioptBase = FUNC_2 (VAR_14, VAR_17->f_ioptBase);
  VAR_16->copt = FUNC_2 (VAR_14, VAR_17->f_copt);
  VAR_16->iauxBase = FUNC_2 (VAR_14, VAR_17->f_iauxBase);
  VAR_16->caux = FUNC_2 (VAR_14, VAR_17->f_caux);
  VAR_16->rfdBase = FUNC_2 (VAR_14, VAR_17->f_rfdBase);
  VAR_16->crfd = FUNC_2 (VAR_14, VAR_17->f_crfd);


  if (FUNC_4 (VAR_14))
    {
      VAR_16->lang = ((VAR_17->f_bits1[0] & VAR_6)
       >> VAR_8);
      VAR_16->fMerge = 0 != (VAR_17->f_bits1[0] & VAR_2);
      VAR_16->fReadin = 0 != (VAR_17->f_bits1[0] & VAR_4);
      VAR_16->fBigendian = 0 != (VAR_17->f_bits1[0] & VAR_0);
      VAR_16->glevel = ((VAR_17->f_bits2[0] & VAR_10)
       >> VAR_12);
    }
  else
    {
      VAR_16->lang = ((VAR_17->f_bits1[0] & VAR_7)
       >> VAR_9);
      VAR_16->fMerge = 0 != (VAR_17->f_bits1[0] & VAR_3);
      VAR_16->fReadin = 0 != (VAR_17->f_bits1[0] & VAR_5);
      VAR_16->fBigendian = 0 != (VAR_17->f_bits1[0] & VAR_1);
      VAR_16->glevel = ((VAR_17->f_bits2[0] & VAR_11)
       >> VAR_13);
    }
  VAR_16->reserved = 0;

  VAR_16->cbLineOffset = FUNC_0 (VAR_14, VAR_17->f_cbLineOffset);
  VAR_16->cbLine = FUNC_0 (VAR_14, VAR_17->f_cbLine);





}
