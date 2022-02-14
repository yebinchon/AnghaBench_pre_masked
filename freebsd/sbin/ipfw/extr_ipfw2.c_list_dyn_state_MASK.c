
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct format_opts {scalar_t__ last; scalar_t__ first; } ;
struct cmdline_opts {int use_set; } ;
struct buf_pr {char* buf; } ;
typedef int rulenum ;
struct TYPE_3__ {char rule; } ;
typedef TYPE_1__ ipfw_dyn_rule ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct buf_pr*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct cmdline_opts*,struct format_opts*,struct buf_pr*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct cmdline_opts *VAR_0, struct format_opts *VAR_1,
    void *VAR_2, void *VAR_3)
{
 uint16_t VAR_4;
 uint8_t VAR_5;
 ipfw_dyn_rule *VAR_6;
 struct buf_pr *VAR_7;

 VAR_6 = (ipfw_dyn_rule *)VAR_3;
 VAR_7 = (struct buf_pr *)VAR_2;

 FUNC_0(&VAR_6->rule, &VAR_4, sizeof(VAR_4));
 if (VAR_4 > VAR_1->last)
  return;
 if (VAR_0->use_set) {
  FUNC_0((char *)&VAR_6->rule + sizeof(uint16_t),
        &VAR_5, sizeof(uint8_t));
  if (VAR_5 != VAR_0->use_set - 1)
   return;
 }
 if (VAR_4 >= VAR_1->first) {
  FUNC_3(VAR_0, VAR_1, VAR_7, VAR_6);
  FUNC_2("%s\n", VAR_7->buf);
  FUNC_1(VAR_7);
 }
}
