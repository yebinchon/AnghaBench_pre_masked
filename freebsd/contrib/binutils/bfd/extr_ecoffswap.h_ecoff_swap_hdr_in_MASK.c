
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hdr_ext {int h_cbExtOffset; int h_iextMax; int h_cbRfdOffset; int h_crfd; int h_cbFdOffset; int h_ifdMax; int h_cbSsExtOffset; int h_issExtMax; int h_cbSsOffset; int h_issMax; int h_cbAuxOffset; int h_iauxMax; int h_cbOptOffset; int h_ioptMax; int h_cbSymOffset; int h_isymMax; int h_cbPdOffset; int h_ipdMax; int h_cbDnOffset; int h_idnMax; int h_cbLineOffset; int h_cbLine; int h_ilineMax; int h_vstamp; int h_magic; } ;
typedef int bfd ;
struct TYPE_3__ {void* cbExtOffset; void* iextMax; void* cbRfdOffset; void* crfd; void* cbFdOffset; void* ifdMax; void* cbSsExtOffset; void* issExtMax; void* cbSsOffset; void* issMax; void* cbAuxOffset; void* iauxMax; void* cbOptOffset; void* ioptMax; void* cbSymOffset; void* isymMax; void* cbPdOffset; void* ipdMax; void* cbDnOffset; void* idnMax; void* cbLineOffset; void* cbLine; void* ilineMax; void* vstamp; void* magic; } ;
typedef TYPE_1__ HDRR ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0, void * VAR_1, HDRR *VAR_2)
{
  struct hdr_ext VAR_3[1];

  *VAR_3 = *(struct hdr_ext *) VAR_1;

  VAR_2->magic = FUNC_2 (VAR_0, VAR_3->h_magic);
  VAR_2->vstamp = FUNC_2 (VAR_0, VAR_3->h_vstamp);
  VAR_2->ilineMax = FUNC_1 (VAR_0, VAR_3->h_ilineMax);
  VAR_2->cbLine = FUNC_0 (VAR_0, VAR_3->h_cbLine);
  VAR_2->cbLineOffset = FUNC_0 (VAR_0, VAR_3->h_cbLineOffset);
  VAR_2->idnMax = FUNC_1 (VAR_0, VAR_3->h_idnMax);
  VAR_2->cbDnOffset = FUNC_0 (VAR_0, VAR_3->h_cbDnOffset);
  VAR_2->ipdMax = FUNC_1 (VAR_0, VAR_3->h_ipdMax);
  VAR_2->cbPdOffset = FUNC_0 (VAR_0, VAR_3->h_cbPdOffset);
  VAR_2->isymMax = FUNC_1 (VAR_0, VAR_3->h_isymMax);
  VAR_2->cbSymOffset = FUNC_0 (VAR_0, VAR_3->h_cbSymOffset);
  VAR_2->ioptMax = FUNC_1 (VAR_0, VAR_3->h_ioptMax);
  VAR_2->cbOptOffset = FUNC_0 (VAR_0, VAR_3->h_cbOptOffset);
  VAR_2->iauxMax = FUNC_1 (VAR_0, VAR_3->h_iauxMax);
  VAR_2->cbAuxOffset = FUNC_0 (VAR_0, VAR_3->h_cbAuxOffset);
  VAR_2->issMax = FUNC_1 (VAR_0, VAR_3->h_issMax);
  VAR_2->cbSsOffset = FUNC_0 (VAR_0, VAR_3->h_cbSsOffset);
  VAR_2->issExtMax = FUNC_1 (VAR_0, VAR_3->h_issExtMax);
  VAR_2->cbSsExtOffset = FUNC_0 (VAR_0, VAR_3->h_cbSsExtOffset);
  VAR_2->ifdMax = FUNC_1 (VAR_0, VAR_3->h_ifdMax);
  VAR_2->cbFdOffset = FUNC_0 (VAR_0, VAR_3->h_cbFdOffset);
  VAR_2->crfd = FUNC_1 (VAR_0, VAR_3->h_crfd);
  VAR_2->cbRfdOffset = FUNC_0 (VAR_0, VAR_3->h_cbRfdOffset);
  VAR_2->iextMax = FUNC_1 (VAR_0, VAR_3->h_iextMax);
  VAR_2->cbExtOffset = FUNC_0 (VAR_0, VAR_3->h_cbExtOffset);





}
