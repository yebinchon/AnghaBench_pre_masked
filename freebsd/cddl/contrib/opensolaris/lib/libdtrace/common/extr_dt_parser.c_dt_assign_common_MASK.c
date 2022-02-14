
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dn_op; scalar_t__ dn_kind; int dn_flags; int dn_attr; struct TYPE_8__* dn_right; struct TYPE_8__* dn_left; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_6(dt_node_t *VAR_5)
{
 dt_node_t *VAR_6 = VAR_5->dn_left;
 dt_node_t *VAR_7 = VAR_5->dn_right;
 int VAR_8 = VAR_5->dn_op;

 if (VAR_7->dn_kind == VAR_2)
  FUNC_1(VAR_6, VAR_7);

 if (!(VAR_6->dn_flags & VAR_0)) {
  FUNC_5(VAR_3, "operator %s requires modifiable "
      "lvalue as an operand\n", FUNC_4(VAR_8));

 }

 if (!(VAR_6->dn_flags & VAR_1)) {
  FUNC_5(VAR_4, "operator %s can only be applied "
      "to a writable variable\n", FUNC_4(VAR_8));
 }

 FUNC_3(VAR_6, VAR_5);
 FUNC_2(VAR_5, FUNC_0(VAR_6->dn_attr, VAR_7->dn_attr));
}
