
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct xt_set_info_match {TYPE_1__ match_set; } ;
struct xt_mtdtor_param {struct xt_set_info_match* matchinfo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 struct xt_set_info_match *VAR_1 = VAR_0->matchinfo;

 FUNC_0(VAR_1->match_set.index);
}
