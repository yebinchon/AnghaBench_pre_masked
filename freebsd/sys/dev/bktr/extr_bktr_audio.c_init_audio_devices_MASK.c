
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_6__ {scalar_t__ dpl3518a; scalar_t__ msp3400c; scalar_t__ dbx; } ;
struct TYPE_7__ {int dpl_addr; TYPE_1__ card; int msp_addr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2( bktr_ptr_t VAR_0 ) {


        if ( VAR_0->card.dbx )
                FUNC_0( VAR_0 );


        if ( VAR_0->card.msp3400c )
                FUNC_1( VAR_0, VAR_0->msp_addr );


        if ( VAR_0->card.dpl3518a )
                FUNC_1( VAR_0, VAR_0->dpl_addr );

}
