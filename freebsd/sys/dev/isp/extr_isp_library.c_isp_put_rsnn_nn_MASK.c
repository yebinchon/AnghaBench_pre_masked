
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rsnnnn_length; int * rsnnnn_nodename; int rsnnnn_hdr; } ;
typedef TYPE_1__ rsnn_nn_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, rsnn_nn_t *VAR_1, rsnn_nn_t *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_0, &VAR_1->rsnnnn_hdr, &VAR_2->rsnnnn_hdr);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_0(VAR_0, VAR_1->rsnnnn_nodename[VAR_3], &VAR_2->rsnnnn_nodename[VAR_3]);
 FUNC_0(VAR_0, VAR_1->rsnnnn_length, &VAR_2->rsnnnn_length);


}
