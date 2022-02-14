
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
struct ses_elm_sas_port_phy {int phy_addr; int other_index; int connector_index; int phy_id; } ;
struct ses_elm_sas_expander_phy {int other_index; int connector_index; } ;
struct TYPE_11__ {struct ses_elm_sas_port_phy* sasport_phys; struct ses_elm_sas_expander_phy* sasexp_phys; } ;
struct TYPE_10__ {TYPE_2__* sas; } ;
struct ses_addl_status {TYPE_4__ proto_data; TYPE_3__ proto_hdr; } ;
struct sbuf {int dummy; } ;
struct TYPE_12__ {struct ses_addl_status addl; } ;
typedef TYPE_5__ ses_element_t ;
struct TYPE_13__ {scalar_t__ elm_type; TYPE_5__* elm_private; } ;
typedef TYPE_6__ enc_element_t ;
struct TYPE_8__ {int num_phys; } ;
struct TYPE_9__ {TYPE_1__ base_hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, struct sbuf *VAR_2,
         enc_element_t *VAR_3)
{
 int VAR_4, VAR_5;
 ses_element_t *VAR_6;
 struct ses_addl_status *VAR_7;
 struct ses_elm_sas_expander_phy *VAR_8;
 struct ses_elm_sas_port_phy *VAR_9;

 VAR_6 = VAR_3->elm_private;
 VAR_7 = &(VAR_6->addl);
 FUNC_0(VAR_2, ", SAS ");
 if (VAR_3->elm_type == VAR_0) {
  VAR_5 = VAR_7->proto_hdr.sas->base_hdr.num_phys;
  FUNC_0(VAR_2, "Expander: %d phys", VAR_5);
  if (VAR_7->proto_data.sasexp_phys == ((void*)0))
   return;
  for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++) {
   VAR_8 = &VAR_7->proto_data.sasexp_phys[VAR_4];
   FUNC_0(VAR_2, "%s:  phy %d: connector %d other %d\n",
       VAR_1, VAR_4, VAR_8->connector_index,
       VAR_8->other_index);
  }
 } else {
  VAR_5 = VAR_7->proto_hdr.sas->base_hdr.num_phys;
  FUNC_0(VAR_2, "Port: %d phys", VAR_5);
  if (VAR_7->proto_data.sasport_phys == ((void*)0))
   return;
  for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++) {
   VAR_9 = &VAR_7->proto_data.sasport_phys[VAR_4];
   FUNC_0(VAR_2,
       "%s:  phy %d: id %d connector %d other %d\n",
       VAR_1, VAR_4, VAR_9->phy_id,
       VAR_9->connector_index, VAR_9->other_index);
   FUNC_0(VAR_2, "%s:  phy %d: addr %jx\n", VAR_1, VAR_4,
       (uintmax_t)FUNC_1(VAR_9->phy_addr));
  }
 }
}
