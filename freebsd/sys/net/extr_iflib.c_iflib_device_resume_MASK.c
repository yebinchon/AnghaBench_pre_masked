
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int iflib_txq_t ;
typedef TYPE_1__* if_ctx_t ;
typedef int device_t ;
struct TYPE_8__ {int ifc_txqs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(device_t VAR_1)
{
 if_ctx_t VAR_2 = FUNC_5(VAR_1);
 iflib_txq_t VAR_3 = VAR_2->ifc_txqs;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_6(VAR_2);
 FUNC_1(VAR_2);
 for (int VAR_4 = 0; VAR_4 < FUNC_3(VAR_2); VAR_4++, VAR_3++)
  FUNC_7(VAR_3, VAR_0);

 return (FUNC_4(VAR_1));
}
