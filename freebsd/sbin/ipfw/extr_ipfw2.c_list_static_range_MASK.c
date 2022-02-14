
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw_rule {scalar_t__ rulenum; int set; } ;
struct ip_fw_bcounter {scalar_t__ size; } ;
struct format_opts {int show_counters; int show_time; scalar_t__ last; scalar_t__ first; } ;
struct cmdline_opts {int use_set; } ;
struct buf_pr {char* buf; } ;
struct TYPE_3__ {scalar_t__ length; } ;
typedef TYPE_1__ ipfw_obj_tlv ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct buf_pr*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct cmdline_opts*,struct format_opts*,struct buf_pr*,struct ip_fw_rule*,struct ip_fw_bcounter*) ;

__attribute__((used)) static int
FUNC_3(struct cmdline_opts *VAR_0, struct format_opts *VAR_1,
    struct buf_pr *VAR_2, ipfw_obj_tlv *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct ip_fw_rule *VAR_7;
 struct ip_fw_bcounter *VAR_8;
 int VAR_9 = 0;

 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_4; VAR_5++,
     VAR_3 = (ipfw_obj_tlv *)((caddr_t)VAR_3 + VAR_3->length)) {

  if ((VAR_1->show_counters | VAR_1->show_time) != 0) {
   VAR_8 = (struct ip_fw_bcounter *)(VAR_3 + 1);
   VAR_7 = (struct ip_fw_rule *)((caddr_t)VAR_8 + VAR_8->size);
  } else {
   VAR_8 = ((void*)0);
   VAR_7 = (struct ip_fw_rule *)(VAR_3 + 1);
  }
  if (VAR_7->rulenum > VAR_1->last)
   break;
  if (VAR_0->use_set && VAR_7->set != VAR_0->use_set - 1)
   continue;
  if (VAR_7->rulenum >= VAR_1->first && VAR_7->rulenum <= VAR_1->last) {
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_7, VAR_8);
   FUNC_1("%s", VAR_2->buf);
   VAR_9 += VAR_3->length;
   FUNC_0(VAR_2);
   VAR_6++;
  }
 }

 return (VAR_6);
}
