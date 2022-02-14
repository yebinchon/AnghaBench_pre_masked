
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct timespec {int dummy; } ;
struct ddf_vol_meta {int sectorsize; TYPE_2__* vde; TYPE_2__* vdc; void* cdr; void* hdr; int bigendian; } ;
struct ddf_vd_entry {int dummy; } ;
struct ddf_meta {int sectorsize; void* cdr; void* hdr; int bigendian; } ;
struct clocktime {int year; int mon; int day; } ;
struct TYPE_6__ {int Configuration_Record_Length; int cd_length; } ;
struct TYPE_5__ {void* VD_GUID; } ;
struct TYPE_4__ {int Sequence_Number; int Signature; } ;


 int VAR_0 ;
 int FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ddf_vol_meta*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timespec*,struct clocktime*) ;
 int FUNC_5 (struct timespec*) ;
 TYPE_3__* VAR_3 ;
 void* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (void*,int,char*,int,int,int,int,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_10(struct ddf_vol_meta *VAR_5, struct ddf_meta *VAR_6)
{
 struct timespec VAR_7;
 struct clocktime VAR_8;
 u_int VAR_9, VAR_10;

 VAR_5->bigendian = VAR_6->bigendian;
 VAR_9 = VAR_5->sectorsize = VAR_6->sectorsize;
 VAR_5->hdr = FUNC_6(VAR_9, VAR_1, VAR_2);
 FUNC_7(VAR_5->hdr, VAR_6->hdr, VAR_9);
 VAR_5->cdr = FUNC_6(FUNC_1(VAR_6, VAR_3->cd_length) * VAR_9, VAR_1, VAR_2);
 FUNC_7(VAR_5->cdr, VAR_6->cdr, FUNC_1(VAR_6, VAR_3->cd_length) * VAR_9);
 VAR_5->vde = FUNC_6(sizeof(struct ddf_vd_entry), VAR_1, VAR_2);
 FUNC_8(VAR_5->vde, 0xff, sizeof(struct ddf_vd_entry));
 FUNC_5(&VAR_7);
 FUNC_4(&VAR_7, &VAR_8);
 FUNC_9(VAR_5->vde->VD_GUID, 25, "FreeBSD%04d%02d%02d%08x%01x",
     VAR_8.year, VAR_8.mon, VAR_8.day,
     FUNC_3(), FUNC_3() & 0xf);
 VAR_10 = FUNC_0(VAR_6, VAR_3->Configuration_Record_Length) * VAR_9;
 VAR_5->vdc = FUNC_6(VAR_10, VAR_1, VAR_2);
 FUNC_8(VAR_5->vdc, 0xff, VAR_10);
 FUNC_2(VAR_5, VAR_4->Signature, VAR_0);
 FUNC_7(VAR_5->vdc->VD_GUID, VAR_5->vde->VD_GUID, 24);
 FUNC_2(VAR_5, VAR_4->Sequence_Number, 0);
}
