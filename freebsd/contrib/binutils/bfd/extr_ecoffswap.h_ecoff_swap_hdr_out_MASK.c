
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hdr_ext {int h_cbExtOffset; int h_iextMax; int h_cbRfdOffset; int h_crfd; int h_cbFdOffset; int h_ifdMax; int h_cbSsExtOffset; int h_issExtMax; int h_cbSsOffset; int h_issMax; int h_cbAuxOffset; int h_iauxMax; int h_cbOptOffset; int h_ioptMax; int h_cbSymOffset; int h_isymMax; int h_cbPdOffset; int h_ipdMax; int h_cbDnOffset; int h_idnMax; int h_cbLineOffset; int h_cbLine; int h_ilineMax; int h_vstamp; int h_magic; } ;
typedef int bfd ;
struct TYPE_3__ {int cbExtOffset; int iextMax; int cbRfdOffset; int crfd; int cbFdOffset; int ifdMax; int cbSsExtOffset; int issExtMax; int cbSsOffset; int issMax; int cbAuxOffset; int iauxMax; int cbOptOffset; int ioptMax; int cbSymOffset; int isymMax; int cbPdOffset; int ipdMax; int cbDnOffset; int idnMax; int cbLineOffset; int cbLine; int ilineMax; int vstamp; int magic; } ;
typedef TYPE_1__ HDRR ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0, const HDRR *VAR_1, void * VAR_2)
{
  struct hdr_ext *VAR_3 = (struct hdr_ext *) VAR_2;
  HDRR VAR_4[1];

  *VAR_4 = *VAR_1;

  FUNC_2 (VAR_0, VAR_4->magic, VAR_3->h_magic);
  FUNC_2 (VAR_0, VAR_4->vstamp, VAR_3->h_vstamp);
  FUNC_1 (VAR_0, VAR_4->ilineMax, VAR_3->h_ilineMax);
  FUNC_0 (VAR_0, VAR_4->cbLine, VAR_3->h_cbLine);
  FUNC_0 (VAR_0, VAR_4->cbLineOffset, VAR_3->h_cbLineOffset);
  FUNC_1 (VAR_0, VAR_4->idnMax, VAR_3->h_idnMax);
  FUNC_0 (VAR_0, VAR_4->cbDnOffset, VAR_3->h_cbDnOffset);
  FUNC_1 (VAR_0, VAR_4->ipdMax, VAR_3->h_ipdMax);
  FUNC_0 (VAR_0, VAR_4->cbPdOffset, VAR_3->h_cbPdOffset);
  FUNC_1 (VAR_0, VAR_4->isymMax, VAR_3->h_isymMax);
  FUNC_0 (VAR_0, VAR_4->cbSymOffset, VAR_3->h_cbSymOffset);
  FUNC_1 (VAR_0, VAR_4->ioptMax, VAR_3->h_ioptMax);
  FUNC_0 (VAR_0, VAR_4->cbOptOffset, VAR_3->h_cbOptOffset);
  FUNC_1 (VAR_0, VAR_4->iauxMax, VAR_3->h_iauxMax);
  FUNC_0 (VAR_0, VAR_4->cbAuxOffset, VAR_3->h_cbAuxOffset);
  FUNC_1 (VAR_0, VAR_4->issMax, VAR_3->h_issMax);
  FUNC_0 (VAR_0, VAR_4->cbSsOffset, VAR_3->h_cbSsOffset);
  FUNC_1 (VAR_0, VAR_4->issExtMax, VAR_3->h_issExtMax);
  FUNC_0 (VAR_0, VAR_4->cbSsExtOffset, VAR_3->h_cbSsExtOffset);
  FUNC_1 (VAR_0, VAR_4->ifdMax, VAR_3->h_ifdMax);
  FUNC_0 (VAR_0, VAR_4->cbFdOffset, VAR_3->h_cbFdOffset);
  FUNC_1 (VAR_0, VAR_4->crfd, VAR_3->h_crfd);
  FUNC_0 (VAR_0, VAR_4->cbRfdOffset, VAR_3->h_cbRfdOffset);
  FUNC_1 (VAR_0, VAR_4->iextMax, VAR_3->h_iextMax);
  FUNC_0 (VAR_0, VAR_4->cbExtOffset, VAR_3->h_cbExtOffset);





}
