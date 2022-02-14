
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* iflib_txq_t ;
typedef int if_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_9__ {int ifc_flags; TYPE_1__* ifc_txqs; } ;
struct TYPE_8__ {int ift_br; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(if_t VAR_1)
{
 if_ctx_t VAR_2 = FUNC_3(VAR_1);
 iflib_txq_t VAR_3 = VAR_2->ifc_txqs;
 int VAR_4;

 FUNC_1(VAR_2);
 VAR_2->ifc_flags |= VAR_0;
 FUNC_2(VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++, VAR_3++)
  while (!(FUNC_6(VAR_3->ift_br) || FUNC_7(VAR_3->ift_br)))
   FUNC_5(VAR_3, 0);
 FUNC_1(VAR_2);
 VAR_2->ifc_flags &= ~VAR_0;
 FUNC_2(VAR_2);





 FUNC_4(VAR_1);
}
