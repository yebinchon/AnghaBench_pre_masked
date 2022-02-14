
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
typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ virt; } ;
struct TYPE_13__ {int os; TYPE_3__* bmbx_non_emb_pmd; TYPE_1__ bmbx; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_14__ {scalar_t__ address_high; scalar_t__ address_low; } ;
typedef TYPE_5__ sli4_sli_config_pmd_t ;
struct TYPE_15__ {int request_length; } ;
typedef TYPE_6__ sli4_req_hdr_t ;
struct TYPE_16__ {scalar_t__ command; } ;
typedef TYPE_7__ sli4_mbox_command_header_t ;
struct TYPE_11__ {TYPE_5__ mem; scalar_t__ embed; } ;
struct TYPE_17__ {int pmd_count; TYPE_2__ payload; scalar_t__ emb; } ;
typedef TYPE_8__ sli4_cmd_sli_config_t ;
typedef int label ;
struct TYPE_12__ {int phys; TYPE_6__* virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char const*,int *,int) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_6(sli4_t *VAR_2, void *VAR_3, const char *VAR_4)
{
 uint32_t VAR_5 = 0;
 char VAR_6[64];
 uint32_t VAR_7;

 sli4_mbox_command_header_t *VAR_8 = (sli4_mbox_command_header_t *)VAR_3;

 if (!FUNC_2(VAR_0)) {
  return;
 }

 if (VAR_8->command == VAR_1) {
  sli4_cmd_sli_config_t *VAR_9 = (sli4_cmd_sli_config_t *)VAR_8;
  sli4_req_hdr_t *VAR_10;
  if (VAR_9->emb) {
   FUNC_5(VAR_6, sizeof(VAR_6), "%s (emb)", VAR_4);


   VAR_10 = (sli4_req_hdr_t *)VAR_9->payload.embed;
   VAR_5 = sizeof(*VAR_9) - sizeof(VAR_9->payload) +
    VAR_10->request_length + (4*sizeof(uint32_t));
   FUNC_3(VAR_0, VAR_2->os, VAR_6,
       (uint8_t *)VAR_2->bmbx.virt, VAR_5);
  } else {
   sli4_sli_config_pmd_t *VAR_11;
   FUNC_5(VAR_6, sizeof(VAR_6), "%s (non-emb hdr)", VAR_4);



   VAR_5 = sizeof(*VAR_9) - sizeof(VAR_9->payload) + (12 * VAR_9->pmd_count);
   FUNC_3(VAR_0, VAR_2->os, VAR_6,
       (uint8_t *)VAR_2->bmbx.virt, VAR_5);


   VAR_11 = &VAR_9->payload.mem;
   if ((VAR_11->address_high == FUNC_0(VAR_2->bmbx_non_emb_pmd->phys)) &&
       (VAR_11->address_low == FUNC_1(VAR_2->bmbx_non_emb_pmd->phys))) {
    for (VAR_7 = 0; VAR_7 < VAR_9->pmd_count; VAR_7++, VAR_11++) {
     VAR_10 = VAR_2->bmbx_non_emb_pmd->virt;
     FUNC_5(VAR_6, sizeof(VAR_6), "%s (non-emb pay[%d])",
           VAR_4, VAR_7);
     FUNC_3(VAR_0, VAR_2->os, VAR_6,
         (uint8_t *)VAR_2->bmbx_non_emb_pmd->virt,
         VAR_10->request_length + (4*sizeof(uint32_t)));
    }
   } else {
    FUNC_4(VAR_2->os, "pmd addr does not match pmd:%x %x (%x %x)\n",
     VAR_11->address_high, VAR_11->address_low,
     FUNC_0(VAR_2->bmbx_non_emb_pmd->phys),
     FUNC_1(VAR_2->bmbx_non_emb_pmd->phys));
   }

  }
 } else {


  VAR_5 = 64;
  FUNC_3(VAR_0, VAR_2->os, VAR_4,
      (uint8_t *)VAR_3, VAR_5);
 }
}
