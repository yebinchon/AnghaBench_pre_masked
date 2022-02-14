
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {size_t if_type; int os; } ;
typedef TYPE_1__ sli4_t ;
typedef size_t sli4_regname_e ;
struct TYPE_6__ {scalar_t__ rset; scalar_t__ off; } ;
typedef TYPE_2__ sli4_reg_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 TYPE_2__** VAR_1 ;

void
FUNC_2(sli4_t *VAR_2, sli4_regname_e VAR_3, uint32_t VAR_4)
{
 const sli4_reg_t *VAR_5 = &(VAR_1[VAR_3][VAR_2->if_type]);

 if ((VAR_0 == VAR_5->rset) || (VAR_0 == VAR_5->off)) {
  FUNC_0(VAR_2->os, "regname %d not defined for if_type %d\n", VAR_3, VAR_2->if_type);
  return;
 }

 FUNC_1(VAR_2->os, VAR_5->rset, VAR_5->off, VAR_4);
}
