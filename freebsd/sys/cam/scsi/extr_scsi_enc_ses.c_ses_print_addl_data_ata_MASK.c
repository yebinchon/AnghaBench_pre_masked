
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ses_elm_ata_hdr {int target; int bus; } ;
struct TYPE_5__ {struct ses_elm_ata_hdr* ata; } ;
struct ses_addl_status {TYPE_1__ proto_hdr; } ;
struct sbuf {int dummy; } ;
struct TYPE_6__ {struct ses_addl_status addl; } ;
typedef TYPE_2__ ses_element_t ;
struct TYPE_7__ {TYPE_2__* elm_private; } ;
typedef TYPE_3__ enc_element_t ;


 int FUNC_0 (struct sbuf*,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_0, enc_element_t *VAR_1)
{
 ses_element_t *VAR_2 = VAR_1->elm_private;
 struct ses_addl_status *VAR_3 = &VAR_2->addl;
 struct ses_elm_ata_hdr *VAR_4 = VAR_3->proto_hdr.ata;

 FUNC_0(VAR_0, ", SATA Slot: scbus%d target %d\n",
     FUNC_1(VAR_4->bus), FUNC_1(VAR_4->target));
}
