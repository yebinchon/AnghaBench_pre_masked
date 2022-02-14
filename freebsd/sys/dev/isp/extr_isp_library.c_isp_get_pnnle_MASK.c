
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int pnnle_reserved; int pnnle_handle; int * pnnle_name; } ;
typedef TYPE_1__ isp_pnnle_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(ispsoftc_t *VAR_0, isp_pnnle_t *VAR_1, isp_pnnle_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_1(VAR_0, &VAR_1->pnnle_name[VAR_3], VAR_2->pnnle_name[VAR_3]);
 FUNC_0(VAR_0, &VAR_1->pnnle_handle, VAR_2->pnnle_handle);
 FUNC_0(VAR_0, &VAR_1->pnnle_reserved, VAR_2->pnnle_reserved);
}
