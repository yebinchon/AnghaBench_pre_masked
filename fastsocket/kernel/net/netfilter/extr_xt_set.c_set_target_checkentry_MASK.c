
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {struct xt_set_info_target* targinfo; } ;
struct TYPE_4__ {scalar_t__ index; scalar_t__ dim; } ;
struct TYPE_3__ {scalar_t__ index; scalar_t__ dim; } ;
struct xt_set_info_target {TYPE_2__ del_set; TYPE_1__ add_set; } ;
typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool
FUNC_3(const struct xt_tgchk_param *VAR_2)
{
 const struct xt_set_info_target *VAR_3 = VAR_2->targinfo;
 ip_set_id_t VAR_4;

 if (VAR_3->add_set.index != VAR_1) {
  VAR_4 = FUNC_0(VAR_3->add_set.index);
  if (VAR_4 == VAR_1) {
   FUNC_2("Cannot find add_set index %u as target\n",
       VAR_3->add_set.index);
   return 0;
  }
 }

 if (VAR_3->del_set.index != VAR_1) {
  VAR_4 = FUNC_0(VAR_3->del_set.index);
  if (VAR_4 == VAR_1) {
   FUNC_2("Cannot find del_set index %u as target\n",
       VAR_3->del_set.index);
   if (VAR_3->add_set.index != VAR_1)
    FUNC_1(VAR_3->add_set.index);
   return 0;
  }
 }
 if (VAR_3->add_set.dim > VAR_0 ||
     VAR_3->del_set.dim > VAR_0) {
  FUNC_2("Protocol error: SET target dimension "
      "is over the limit!\n");
  if (VAR_3->add_set.index != VAR_1)
   FUNC_1(VAR_3->add_set.index);
  if (VAR_3->del_set.index != VAR_1)
   FUNC_1(VAR_3->del_set.index);
  return 0;
 }

 return 1;
}
