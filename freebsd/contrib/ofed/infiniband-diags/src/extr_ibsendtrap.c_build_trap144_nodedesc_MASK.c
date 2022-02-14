
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ib_portid_t ;
struct TYPE_6__ {int change_flgs; } ;
struct TYPE_7__ {TYPE_1__ ntc_144; } ;
struct TYPE_8__ {TYPE_2__ data_details; } ;
typedef TYPE_3__ ib_mad_notice_attr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_1(ib_mad_notice_attr_t * VAR_1, ib_portid_t * VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 VAR_1->data_details.ntc_144.change_flgs =
     VAR_0;
}
