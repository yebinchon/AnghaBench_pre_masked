
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct format_opts {scalar_t__ show_counters; int pcwidth; int bcwidth; int dcnt; } ;
struct cmdline_opts {int use_set; } ;
struct TYPE_2__ {int bcnt; int pcnt; int rule; } ;
typedef TYPE_1__ ipfw_dyn_rule ;


 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct cmdline_opts *VAR_0, struct format_opts *VAR_1,
    void *VAR_2, void *VAR_3)
{
 ipfw_dyn_rule *VAR_4;
 int VAR_5;
 uint8_t VAR_6;

 VAR_4 = (ipfw_dyn_rule *)VAR_3;

 VAR_1->dcnt++;

 if (VAR_1->show_counters == 0)
  return;

 if (VAR_0->use_set) {

  FUNC_0((char *)&VAR_4->rule + sizeof(uint16_t), &VAR_6,
      sizeof(uint8_t));
  if (VAR_6 != VAR_0->use_set - 1)
   return;
 }

 VAR_5 = FUNC_1(((void*)0), &VAR_4->pcnt, 0);
 if (VAR_5 > VAR_1->pcwidth)
  VAR_1->pcwidth = VAR_5;

 VAR_5 = FUNC_1(((void*)0), &VAR_4->bcnt, 0);
 if (VAR_5 > VAR_1->bcwidth)
  VAR_1->bcwidth = VAR_5;
}
