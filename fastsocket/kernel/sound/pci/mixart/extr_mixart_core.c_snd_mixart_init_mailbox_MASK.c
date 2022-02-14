
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixart_mgr {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mixart_mgr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mixart_mgr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct mixart_mgr *VAR_4)
{
 FUNC_2( 0, FUNC_0( VAR_4, VAR_3 ) );
 FUNC_2( 0, FUNC_0( VAR_4, VAR_2 ) );


 if(VAR_4->irq >= 0) {
  FUNC_3( VAR_0, FUNC_1( VAR_4, VAR_1));
 }
 return;
}
