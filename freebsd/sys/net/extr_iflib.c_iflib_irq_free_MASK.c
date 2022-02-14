
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_irq_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_6__ {int ifc_dev; } ;
struct TYPE_5__ {scalar_t__ ii_res; scalar_t__ ii_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(if_ctx_t VAR_1, if_irq_t VAR_2)
{

 if (VAR_2->ii_tag)
  FUNC_1(VAR_1->ifc_dev, VAR_2->ii_res, VAR_2->ii_tag);

 if (VAR_2->ii_res)
  FUNC_0(VAR_1->ifc_dev, VAR_0,
      FUNC_2(VAR_2->ii_res), VAR_2->ii_res);
}
