
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int num_phys; } ;
union ses_elm_sas_hdr {TYPE_1__ base_hdr; } ;
typedef int uint8_t ;
struct ses_elm_sas_type0_eip_hdr {int dummy; } ;
struct ses_elm_sas_type0_base_hdr {int dummy; } ;
struct ses_elm_sas_device_phy {int dummy; } ;
struct TYPE_13__ {struct ses_elm_sas_device_phy* sasdev_phys; } ;
struct TYPE_9__ {union ses_elm_sas_hdr* sas; } ;
struct ses_addl_status {TYPE_7__ proto_data; TYPE_2__ proto_hdr; } ;
struct TYPE_10__ {struct ses_addl_status addl; } ;
typedef TYPE_3__ ses_element_t ;
typedef int enc_softc_t ;
struct TYPE_11__ {TYPE_3__* elm_private; } ;
typedef TYPE_4__ enc_element_t ;
struct TYPE_12__ {TYPE_4__* elm_map; } ;
typedef TYPE_5__ enc_cache_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_1, enc_cache_t *VAR_2,
     uint8_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 enc_element_t *VAR_10;
 ses_element_t *VAR_11;
 struct ses_addl_status *VAR_12;

 VAR_7 = VAR_8 = 0;


 VAR_10 = &(VAR_2->elm_map[VAR_6]);
 VAR_11 = VAR_10->elm_private;
 VAR_12 = &(VAR_11->addl);

 VAR_12->proto_hdr.sas = (union ses_elm_sas_hdr *)&VAR_3[VAR_8];


 FUNC_1(&VAR_12->proto_data, sizeof(VAR_12->proto_data));
 if (VAR_12->proto_hdr.sas->base_hdr.num_phys == 0)
  goto out;


 if (VAR_5)
  VAR_8 += sizeof(struct ses_elm_sas_type0_eip_hdr);
 else
  VAR_8 += sizeof(struct ses_elm_sas_type0_base_hdr);


 VAR_9 = VAR_12->proto_hdr.sas->base_hdr.num_phys;
 VAR_9 *= sizeof(struct ses_elm_sas_device_phy);
 if (VAR_9 > (VAR_4 - VAR_8 + 4)) {
  FUNC_0(VAR_1, "Element %d Device Phy List Beyond End Of Buffer\n",
      VAR_6);
  VAR_7 = VAR_0;
  goto out;
 }


 VAR_12->proto_data.sasdev_phys =
     (struct ses_elm_sas_device_phy *)&VAR_3[VAR_8];

out:
 return (VAR_7);
}
