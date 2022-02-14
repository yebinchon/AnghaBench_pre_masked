
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fdr_ext {int* f_bits1; int* f_bits2; int f_cbLine; int f_cbLineOffset; int f_crfd; int f_rfdBase; int f_caux; int f_iauxBase; int f_cpd; int f_ipdFirst; int f_copt; int f_ioptBase; int f_cline; int f_ilineBase; int f_csym; int f_isymBase; int f_cbSs; int f_issBase; int f_rss; int f_adr; } ;
typedef int bfd ;
struct TYPE_3__ {int lang; int glevel; int cbLine; int cbLineOffset; scalar_t__ fBigendian; scalar_t__ fReadin; scalar_t__ fMerge; int crfd; int rfdBase; int caux; int iauxBase; int cpd; int ipdFirst; int copt; int ioptBase; int cline; int ilineBase; int csym; int isymBase; int cbSs; int issBase; int rss; int adr; } ;
typedef TYPE_1__ FDR ;


 int FUNC_0 (int *,int ,int ) ;
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
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_14, const FDR *VAR_15, void * VAR_16)
{
  struct fdr_ext *VAR_17 = (struct fdr_ext *) VAR_16;
  FDR VAR_18[1];


  *VAR_18 = *VAR_15;

  FUNC_0 (VAR_14, VAR_18->adr, VAR_17->f_adr);
  FUNC_2 (VAR_14, VAR_18->rss, VAR_17->f_rss);
  FUNC_2 (VAR_14, VAR_18->issBase, VAR_17->f_issBase);
  FUNC_0 (VAR_14, VAR_18->cbSs, VAR_17->f_cbSs);
  FUNC_2 (VAR_14, VAR_18->isymBase, VAR_17->f_isymBase);
  FUNC_2 (VAR_14, VAR_18->csym, VAR_17->f_csym);
  FUNC_2 (VAR_14, VAR_18->ilineBase, VAR_17->f_ilineBase);
  FUNC_2 (VAR_14, VAR_18->cline, VAR_17->f_cline);
  FUNC_2 (VAR_14, VAR_18->ioptBase, VAR_17->f_ioptBase);
  FUNC_2 (VAR_14, VAR_18->copt, VAR_17->f_copt);
  FUNC_2 (VAR_14, VAR_18->iauxBase, VAR_17->f_iauxBase);
  FUNC_2 (VAR_14, VAR_18->caux, VAR_17->f_caux);
  FUNC_2 (VAR_14, VAR_18->rfdBase, VAR_17->f_rfdBase);
  FUNC_2 (VAR_14, VAR_18->crfd, VAR_17->f_crfd);


  if (FUNC_4 (VAR_14))
    {
      VAR_17->f_bits1[0] = (((VAR_18->lang << VAR_8)
     & VAR_6)
    | (VAR_18->fMerge ? VAR_2 : 0)
    | (VAR_18->fReadin ? VAR_4 : 0)
    | (VAR_18->fBigendian ? VAR_0 : 0));
      VAR_17->f_bits2[0] = ((VAR_18->glevel << VAR_12)
    & VAR_10);
      VAR_17->f_bits2[1] = 0;
      VAR_17->f_bits2[2] = 0;
    }
  else
    {
      VAR_17->f_bits1[0] = (((VAR_18->lang << VAR_9)
     & VAR_7)
    | (VAR_18->fMerge ? VAR_3 : 0)
    | (VAR_18->fReadin ? VAR_5 : 0)
    | (VAR_18->fBigendian ? VAR_1 : 0));
      VAR_17->f_bits2[0] = ((VAR_18->glevel << VAR_13)
    & VAR_11);
      VAR_17->f_bits2[1] = 0;
      VAR_17->f_bits2[2] = 0;
    }

  FUNC_0 (VAR_14, VAR_18->cbLineOffset, VAR_17->f_cbLineOffset);
  FUNC_0 (VAR_14, VAR_18->cbLine, VAR_17->f_cbLine);





}
