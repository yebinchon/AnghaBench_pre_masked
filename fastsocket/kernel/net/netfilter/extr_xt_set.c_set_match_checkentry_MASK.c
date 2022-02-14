
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dim; int index; } ;
struct xt_set_info_match {TYPE_1__ match_set; } ;
struct xt_mtchk_param {struct xt_set_info_match* matchinfo; } ;
typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool
FUNC_3(const struct xt_mtchk_param *VAR_2)
{
 struct xt_set_info_match *VAR_3 = VAR_2->matchinfo;
 ip_set_id_t VAR_4;

 VAR_4 = FUNC_0(VAR_3->match_set.index);

 if (VAR_4 == VAR_1) {
  FUNC_2("Cannot find set indentified by id %u to match\n",
      VAR_3->match_set.index);
  return 0;
 }
 if (VAR_3->match_set.dim > VAR_0) {
  FUNC_2("Protocol error: set match dimension "
      "is over the limit!\n");
  FUNC_1(VAR_3->match_set.index);
  return 0;
 }

 return 1;
}
