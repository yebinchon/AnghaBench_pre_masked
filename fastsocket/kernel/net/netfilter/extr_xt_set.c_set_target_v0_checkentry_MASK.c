
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {struct xt_set_info_target_v0* targinfo; } ;
struct TYPE_3__ {scalar_t__* flags; } ;
struct TYPE_4__ {scalar_t__ index; TYPE_1__ u; } ;
struct xt_set_info_target_v0 {TYPE_2__ del_set; TYPE_2__ add_set; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool
FUNC_4(const struct xt_tgchk_param *VAR_2)
{
 struct xt_set_info_target_v0 *VAR_3 = VAR_2->targinfo;
 ip_set_id_t VAR_4;

 if (VAR_3->add_set.index != VAR_1) {
  VAR_4 = FUNC_1(VAR_3->add_set.index);
  if (VAR_4 == VAR_1) {
   FUNC_3("Cannot find add_set index %u as target\n",
       VAR_3->add_set.index);
   return 0;
  }
 }

 if (VAR_3->del_set.index != VAR_1) {
  VAR_4 = FUNC_1(VAR_3->del_set.index);
  if (VAR_4 == VAR_1) {
   FUNC_3("Cannot find del_set index %u as target\n",
       VAR_3->del_set.index);
   if (VAR_3->add_set.index != VAR_1)
    FUNC_2(VAR_3->add_set.index);
   return 0;
  }
 }
 if (VAR_3->add_set.u.flags[VAR_0-1] != 0 ||
     VAR_3->del_set.u.flags[VAR_0-1] != 0) {
  FUNC_3("Protocol error: SET target dimension "
      "is over the limit!\n");
  if (VAR_3->add_set.index != VAR_1)
   FUNC_2(VAR_3->add_set.index);
  if (VAR_3->del_set.index != VAR_1)
   FUNC_2(VAR_3->del_set.index);
  return 0;
 }


 FUNC_0(&VAR_3->add_set);
 FUNC_0(&VAR_3->del_set);

 return 1;
}
