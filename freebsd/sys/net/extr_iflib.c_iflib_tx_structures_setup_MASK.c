
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int iflib_txq_t ;
typedef TYPE_1__* if_ctx_t ;
struct TYPE_4__ {int ifc_txqs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0)
{
 iflib_txq_t VAR_1 = VAR_0->ifc_txqs;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++, VAR_1++)
  FUNC_1(VAR_1);

 return (0);
}
