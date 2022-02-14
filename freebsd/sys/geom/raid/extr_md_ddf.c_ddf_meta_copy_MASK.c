
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ddf_meta {int sectorsize; int * bbm; int * pdd; int * cr; int * vdr; int * pdr; int * cdr; int * hdr; int bigendian; } ;
struct TYPE_2__ {int bbmlog_length; int pdd_length; int cr_length; int vdr_length; int pdr_length; int cd_length; } ;


 int FUNC_0 (struct ddf_meta*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct ddf_meta *VAR_3, struct ddf_meta *VAR_4)
{
 u_int VAR_5;

 VAR_3->bigendian = VAR_4->bigendian;
 VAR_5 = VAR_3->sectorsize = VAR_4->sectorsize;
 VAR_3->hdr = FUNC_1(VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->hdr, VAR_4->hdr, VAR_5);
 VAR_3->cdr = FUNC_1(FUNC_0(VAR_4, VAR_2->cd_length) * VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->cdr, VAR_4->cdr, FUNC_0(VAR_4, VAR_2->cd_length) * VAR_5);
 VAR_3->pdr = FUNC_1(FUNC_0(VAR_4, VAR_2->pdr_length) * VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->pdr, VAR_4->pdr, FUNC_0(VAR_4, VAR_2->pdr_length) * VAR_5);
 VAR_3->vdr = FUNC_1(FUNC_0(VAR_4, VAR_2->vdr_length) * VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->vdr, VAR_4->vdr, FUNC_0(VAR_4, VAR_2->vdr_length) * VAR_5);
 VAR_3->cr = FUNC_1(FUNC_0(VAR_4, VAR_2->cr_length) * VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->cr, VAR_4->cr, FUNC_0(VAR_4, VAR_2->cr_length) * VAR_5);
 VAR_3->pdd = FUNC_1(FUNC_0(VAR_4, VAR_2->pdd_length) * VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->pdd, VAR_4->pdd, FUNC_0(VAR_4, VAR_2->pdd_length) * VAR_5);
 if (VAR_4->bbm != ((void*)0)) {
  VAR_3->bbm = FUNC_1(FUNC_0(VAR_4, VAR_2->bbmlog_length) * VAR_5, VAR_0, VAR_1);
  FUNC_2(VAR_3->bbm, VAR_4->bbm, FUNC_0(VAR_4, VAR_2->bbmlog_length) * VAR_5);
 }
}
