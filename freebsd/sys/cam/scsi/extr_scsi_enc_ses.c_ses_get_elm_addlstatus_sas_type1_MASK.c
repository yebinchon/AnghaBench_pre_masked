
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
struct ses_elm_sas_type1_nonexpander_hdr {int dummy; } ;
struct ses_elm_sas_type1_expander_hdr {int dummy; } ;
struct ses_elm_sas_port_phy {int dummy; } ;
struct ses_elm_sas_expander_phy {int dummy; } ;
struct TYPE_13__ {struct ses_elm_sas_port_phy* sasport_phys; struct ses_elm_sas_expander_phy* sasexp_phys; } ;
struct TYPE_9__ {union ses_elm_sas_hdr* sas; } ;
struct ses_addl_status {TYPE_7__ proto_data; TYPE_2__ proto_hdr; } ;
struct TYPE_10__ {struct ses_addl_status addl; } ;
typedef TYPE_3__ ses_element_t ;
typedef int enc_softc_t ;
struct TYPE_11__ {scalar_t__ elm_type; TYPE_3__* elm_private; } ;
typedef TYPE_4__ enc_element_t ;
struct TYPE_12__ {TYPE_4__* elm_map; } ;
typedef TYPE_5__ enc_cache_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_2, enc_cache_t *VAR_3,
            uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 enc_element_t *VAR_11;
 ses_element_t *VAR_12;
 struct ses_addl_status *VAR_13;

 VAR_8 = VAR_9 = 0;


 VAR_11 = &(VAR_3->elm_map[VAR_7]);
 VAR_12 = VAR_11->elm_private;
 VAR_13 = &(VAR_12->addl);

 VAR_13->proto_hdr.sas = (union ses_elm_sas_hdr *)&VAR_4[VAR_9];


 FUNC_1(&VAR_13->proto_data, sizeof(VAR_13->proto_data));
 if (VAR_13->proto_hdr.sas->base_hdr.num_phys == 0)
  goto out;


 if (VAR_11->elm_type == VAR_1) {
  VAR_9 += sizeof(struct ses_elm_sas_type1_expander_hdr);
  VAR_10 = VAR_13->proto_hdr.sas->base_hdr.num_phys *
      sizeof(struct ses_elm_sas_expander_phy);
  if (VAR_10 > (VAR_5 - VAR_9)) {
   FUNC_0(VAR_2, "Element %d: Expander Phy List Beyond "
       "End Of Buffer\n", VAR_7);
   VAR_8 = VAR_0;
   goto out;
  }
  VAR_13->proto_data.sasexp_phys =
      (struct ses_elm_sas_expander_phy *)&VAR_4[VAR_9];
 } else {
  VAR_9 += sizeof(struct ses_elm_sas_type1_nonexpander_hdr);
  VAR_10 = VAR_13->proto_hdr.sas->base_hdr.num_phys *
      sizeof(struct ses_elm_sas_port_phy);
  if (VAR_10 > (VAR_5 - VAR_9 + 4)) {
   FUNC_0(VAR_2, "Element %d: Port Phy List Beyond End "
       "Of Buffer\n", VAR_7);
   VAR_8 = VAR_0;
   goto out;
  }
  VAR_13->proto_data.sasport_phys =
      (struct ses_elm_sas_port_phy *)&VAR_4[VAR_9];
 }

out:
 return (VAR_8);
}
