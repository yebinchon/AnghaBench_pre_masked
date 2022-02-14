
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union ipdu_u {int dummy; } ipdu_u ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_size; scalar_t__ ahs_size; int * ds_addr; int * ahs_addr; int ipdu; } ;
typedef TYPE_1__ pdu_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(pdu_t *VAR_0)
{
     if(VAR_0->ahs_size)
   FUNC_1(VAR_0->ahs_addr);
     if(VAR_0->ds_size)
   FUNC_1(VAR_0->ds_addr);
     FUNC_0(&VAR_0->ipdu, sizeof(union ipdu_u));
     VAR_0->ahs_addr = ((void*)0);
     VAR_0->ds_addr = ((void*)0);
     VAR_0->ahs_size = 0;
     VAR_0->ds_size = VAR_0->ds_len = 0;
}
