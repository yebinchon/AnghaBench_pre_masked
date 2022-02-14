
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct ses_elm_ata_hdr {int dummy; } ;
struct TYPE_12__ {struct ses_elm_ata_hdr* ata; } ;
struct TYPE_13__ {TYPE_3__ proto_hdr; } ;
struct TYPE_15__ {TYPE_4__ addl; } ;
typedef TYPE_6__ ses_element_t ;
struct TYPE_16__ {TYPE_2__* ses_types; } ;
typedef TYPE_7__ ses_cache_t ;
typedef int enc_softc_t ;
struct TYPE_17__ {TYPE_5__* elm_map; TYPE_7__* private; } ;
typedef TYPE_8__ enc_cache_t ;
struct TYPE_14__ {scalar_t__ elm_private; } ;
struct TYPE_11__ {TYPE_1__* hdr; } ;
struct TYPE_10__ {int etype_elm_type; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(enc_softc_t *VAR_2, enc_cache_t *VAR_3,
      uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7,
      int VAR_8)
{
 int VAR_9;
 ses_cache_t *VAR_10;

 if (VAR_5 < sizeof(struct ses_elm_ata_hdr)) {
  VAR_9 = VAR_0;
  goto out;
 }

 VAR_10 = VAR_3->private;
 switch(VAR_10->ses_types[VAR_7].hdr->etype_elm_type) {
 case 128:
 case 129:
  break;
 default:
  FUNC_0(VAR_2, "Element %d has Additional Status, "
      "invalid for SES element type 0x%x\n", VAR_8,
      VAR_10->ses_types[VAR_7].hdr->etype_elm_type);
  VAR_9 = VAR_1;
  goto out;
 }

 ((ses_element_t *)VAR_3->elm_map[VAR_8].elm_private)
     ->addl.proto_hdr.ata = (struct ses_elm_ata_hdr *)VAR_4;
 VAR_9 = 0;

out:
 return (VAR_9);
}
