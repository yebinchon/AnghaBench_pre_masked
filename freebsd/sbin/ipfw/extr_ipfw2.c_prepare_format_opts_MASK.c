
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw_rule {int set; } ;
struct ip_fw_bcounter {int bcnt; int pcnt; scalar_t__ size; } ;
struct format_opts {scalar_t__ show_counters; int bcwidth; int pcwidth; scalar_t__ dcnt; } ;
struct cmdline_opts {int use_set; scalar_t__ do_dynamic; } ;
struct TYPE_3__ {scalar_t__ length; } ;
typedef TYPE_1__ ipfw_obj_tlv ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct cmdline_opts*,struct format_opts*,scalar_t__,size_t,int ,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct cmdline_opts *VAR_1, struct format_opts *VAR_2,
    ipfw_obj_tlv *VAR_3, int VAR_4, caddr_t VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 struct ip_fw_bcounter *VAR_11;
 struct ip_fw_rule *VAR_12;

 VAR_7 = 0;
 VAR_8 = 0;
 if (VAR_2->show_counters != 0) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++,
      VAR_3 = (ipfw_obj_tlv *)((caddr_t)VAR_3 + VAR_3->length)) {
   VAR_11 = (struct ip_fw_bcounter *)(VAR_3 + 1);
   VAR_12 = (struct ip_fw_rule *)((caddr_t)VAR_11 + VAR_11->size);

   if (VAR_1->use_set && VAR_12->set != VAR_1->use_set - 1)
    continue;


   VAR_9 = FUNC_1(((void*)0), &VAR_11->pcnt, 0);
   if (VAR_9 > VAR_8)
    VAR_8 = VAR_9;


   VAR_9 = FUNC_1(((void*)0), &VAR_11->bcnt, 0);
   if (VAR_9 > VAR_7)
    VAR_7 = VAR_9;
  }
 }
 VAR_2->bcwidth = VAR_7;
 VAR_2->pcwidth = VAR_8;

 VAR_2->dcnt = 0;
 if (VAR_1->do_dynamic && VAR_6 > 0)
  FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6, VAR_0, ((void*)0));
}
