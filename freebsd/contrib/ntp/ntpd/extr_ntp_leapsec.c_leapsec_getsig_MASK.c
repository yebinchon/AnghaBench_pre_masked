
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lsig; } ;
typedef TYPE_1__ leap_table_t ;
typedef int leap_signature_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

void
FUNC_2(
 leap_signature_t * VAR_1)
{
 const leap_table_t * VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, &VAR_2->lsig, sizeof(leap_signature_t));
}
