
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* flags; } ;
struct TYPE_4__ {int index; TYPE_1__ u; } ;
struct xt_set_info_match_v0 {TYPE_2__ match_set; } ;
struct xt_mtchk_param {struct xt_set_info_match_v0* matchinfo; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool
FUNC_4(const struct xt_mtchk_param *VAR_2)
{
 struct xt_set_info_match_v0 *VAR_3 = VAR_2->matchinfo;
 ip_set_id_t VAR_4;

 VAR_4 = FUNC_1(VAR_3->match_set.index);

 if (VAR_4 == VAR_1) {
  FUNC_3("Cannot find set indentified by id %u to match\n",
      VAR_3->match_set.index);
  return 0;
 }
 if (VAR_3->match_set.u.flags[VAR_0-1] != 0) {
  FUNC_3("Protocol error: set match dimension "
      "is over the limit!\n");
  FUNC_2(VAR_3->match_set.index);
  return 0;
 }


 FUNC_0(&VAR_3->match_set);

 return 1;
}
