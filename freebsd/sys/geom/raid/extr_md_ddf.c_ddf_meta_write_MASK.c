
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct g_provider {int sectorsize; int mediasize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct ddf_vdc_record {int CRC; } ;
struct ddf_meta {struct ddf_vdc_record* bbm; struct ddf_vdc_record* pdd; struct ddf_vdc_record* cr; struct ddf_vdc_record* vdr; struct ddf_vdc_record* pdr; struct ddf_vdc_record* cdr; struct ddf_vdc_record* hdr; } ;
typedef int off_t ;
struct TYPE_12__ {int CRC; } ;
struct TYPE_11__ {int CRC; } ;
struct TYPE_10__ {int bbmlog_section; int bbmlog_length; int pdd_section; int pdd_length; int cr_section; int Configuration_Record_Length; int vdr_section; int vdr_length; int pdr_section; int pdr_length; int cd_section; int cd_length; int CRC; int Header_Type; int Secondary_Header_LBA; int Primary_Header_LBA; } ;
struct TYPE_9__ {int CRC; } ;
struct TYPE_8__ {int CRC; } ;
struct TYPE_7__ {int CRC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 int FUNC_2 (struct ddf_meta*,int ) ;
 int FUNC_3 (struct ddf_meta*) ;
 struct ddf_vdc_record* FUNC_4 (struct ddf_meta*,int) ;
 int FUNC_5 (int,char*,int ,int) ;
 int FUNC_6 (struct ddf_meta*,int ,int) ;
 int FUNC_7 (struct ddf_meta*,int ,int) ;
 int FUNC_8 (struct ddf_meta*,int ,int ) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_9 (struct ddf_vdc_record*,int) ;
 int FUNC_10 (struct g_consumer*,int,struct ddf_vdc_record*,int) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int
FUNC_11(struct g_consumer *VAR_9, struct ddf_meta *VAR_10)
{
 struct g_provider *VAR_11;
 struct ddf_vdc_record *VAR_12;
 off_t VAR_13, VAR_14, VAR_15, VAR_16;
 u_int VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_11 = VAR_9->provider;
 VAR_17 = VAR_11->sectorsize;
 VAR_16 = VAR_13 = VAR_11->mediasize / VAR_17 - 1;
 VAR_14 = FUNC_2(VAR_10, VAR_5->Primary_Header_LBA);
 VAR_15 = FUNC_2(VAR_10, VAR_5->Secondary_Header_LBA);

next:
 FUNC_8(VAR_10, VAR_5->Header_Type, (VAR_16 == VAR_13) ? VAR_0 :
     (VAR_16 == VAR_14) ? VAR_1 : VAR_2);
 FUNC_6(VAR_10, VAR_5->CRC, 0xffffffff);
 FUNC_6(VAR_10, VAR_5->CRC, FUNC_9(VAR_10->hdr, VAR_17));
 VAR_19 = FUNC_10(VAR_9, VAR_16 * VAR_17, VAR_10->hdr, VAR_17);
 if (VAR_19 != 0) {
err:
  FUNC_5(1, "Cannot write metadata to %s (error=%d).",
      VAR_11->name, VAR_19);
  if (VAR_16 != VAR_13)
   goto done;
 }
 if (VAR_16 == VAR_13) {
  VAR_16 = VAR_14;
  goto next;
 }

 VAR_18 = FUNC_1(VAR_10, VAR_5->cd_length) * VAR_17;
 FUNC_6(VAR_10, VAR_4->CRC, 0xffffffff);
 FUNC_6(VAR_10, VAR_4->CRC, FUNC_9(VAR_10->cdr, VAR_18));
 VAR_19 = FUNC_10(VAR_9, (VAR_16 + FUNC_1(VAR_10, VAR_5->cd_section)) * VAR_17,
     VAR_10->cdr, VAR_18);
 if (VAR_19 != 0)
  goto err;

 VAR_18 = FUNC_1(VAR_10, VAR_5->pdr_length) * VAR_17;
 FUNC_6(VAR_10, VAR_7->CRC, 0xffffffff);
 FUNC_6(VAR_10, VAR_7->CRC, FUNC_9(VAR_10->pdr, VAR_18));
 VAR_19 = FUNC_10(VAR_9, (VAR_16 + FUNC_1(VAR_10, VAR_5->pdr_section)) * VAR_17,
     VAR_10->pdr, VAR_18);
 if (VAR_19 != 0)
  goto err;

 VAR_18 = FUNC_1(VAR_10, VAR_5->vdr_length) * VAR_17;
 FUNC_6(VAR_10, VAR_8->CRC, 0xffffffff);
 FUNC_6(VAR_10, VAR_8->CRC, FUNC_9(VAR_10->vdr, VAR_18));
 VAR_19 = FUNC_10(VAR_9, (VAR_16 + FUNC_1(VAR_10, VAR_5->vdr_section)) * VAR_17,
     VAR_10->vdr, VAR_18);
 if (VAR_19 != 0)
  goto err;

 VAR_18 = FUNC_0(VAR_10, VAR_5->Configuration_Record_Length) * VAR_17;
 VAR_21 = FUNC_3(VAR_10);
 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
  VAR_12 = FUNC_4(VAR_10, VAR_20);
  FUNC_7(VAR_10, VAR_12->CRC, 0xffffffff);
  FUNC_7(VAR_10, VAR_12->CRC, FUNC_9(VAR_12, VAR_18));
 }
 VAR_19 = FUNC_10(VAR_9, (VAR_16 + FUNC_1(VAR_10, VAR_5->cr_section)) * VAR_17,
     VAR_10->cr, VAR_18 * VAR_21);
 if (VAR_19 != 0)
  goto err;

 VAR_18 = FUNC_1(VAR_10, VAR_5->pdd_length) * VAR_17;
 FUNC_6(VAR_10, VAR_6->CRC, 0xffffffff);
 FUNC_6(VAR_10, VAR_6->CRC, FUNC_9(VAR_10->pdd, VAR_18));
 VAR_19 = FUNC_10(VAR_9, (VAR_16 + FUNC_1(VAR_10, VAR_5->pdd_section)) * VAR_17,
     VAR_10->pdd, VAR_18);
 if (VAR_19 != 0)
  goto err;

 if (FUNC_1(VAR_10, VAR_5->bbmlog_length) != 0) {
  VAR_18 = FUNC_1(VAR_10, VAR_5->bbmlog_length) * VAR_17;
  FUNC_6(VAR_10, VAR_3->CRC, 0xffffffff);
  FUNC_6(VAR_10, VAR_3->CRC, FUNC_9(VAR_10->bbm, VAR_18));
  VAR_19 = FUNC_10(VAR_9,
      (VAR_16 + FUNC_1(VAR_10, VAR_5->bbmlog_section)) * VAR_17,
      VAR_10->bbm, VAR_18);
  if (VAR_19 != 0)
   goto err;
 }

done:
 if (VAR_16 == VAR_14 && VAR_15 != -1) {
  VAR_16 = VAR_15;
  goto next;
 }

 return (VAR_19);
}
