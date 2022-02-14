
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_rxq {scalar_t__ init_state; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sfxge_rxq*,int ,int ) ;

void
FUNC_3(struct sfxge_rxq *VAR_2)
{

 if (FUNC_1(VAR_2->init_state != VAR_1))
  return;


 FUNC_2(VAR_2, FUNC_0(VAR_2->entries), VAR_0);
}
