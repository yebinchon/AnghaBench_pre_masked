
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nprim; } ;
struct policydb {struct cond_bool_datum** bool_val_to_struct; TYPE_1__ p_bools; } ;
struct cond_bool_datum {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cond_bool_datum**) ;
 scalar_t__ FUNC_1 (int,int ) ;

int FUNC_2(struct policydb *VAR_1)
{
 FUNC_0(VAR_1->bool_val_to_struct);
 VAR_1->bool_val_to_struct = (struct cond_bool_datum **)
  FUNC_1(VAR_1->p_bools.nprim * sizeof(struct cond_bool_datum *), VAR_0);
 if (!VAR_1->bool_val_to_struct)
  return -1;
 return 0;
}
