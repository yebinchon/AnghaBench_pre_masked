
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlbl_domhsh_walk_arg {scalar_t__ doi; int audit_info; } ;
struct TYPE_4__ {TYPE_1__* cipsov4; } ;
struct netlbl_dom_map {scalar_t__ type; TYPE_2__ type_def; } ;
struct TYPE_3__ {scalar_t__ doi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netlbl_dom_map*,int ) ;

__attribute__((used)) static int FUNC_1(struct netlbl_dom_map *VAR_1, void *VAR_2)
{
 struct netlbl_domhsh_walk_arg *VAR_3 = VAR_2;

 if (VAR_1->type == VAR_0 &&
     VAR_1->type_def.cipsov4->doi == VAR_3->doi)
  return FUNC_0(VAR_1, VAR_3->audit_info);

 return 0;
}
