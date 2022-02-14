
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ dn_kind; scalar_t__ dn_value; int dn_flags; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(const dt_node_t *VAR_2)
{
 return (VAR_2->dn_kind == VAR_1 && VAR_2->dn_value != 0 && (
     (VAR_2->dn_flags & VAR_0) == 0 || (int64_t)VAR_2->dn_value > 0));
}
