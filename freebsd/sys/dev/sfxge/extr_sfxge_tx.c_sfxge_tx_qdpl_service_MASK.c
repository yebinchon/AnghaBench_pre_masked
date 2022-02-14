
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {int blocked; } ;


 int FUNC_0 (struct sfxge_txq*) ;
 scalar_t__ FUNC_1 (struct sfxge_txq*) ;
 int FUNC_2 (struct sfxge_txq*) ;
 scalar_t__ FUNC_3 (struct sfxge_txq*) ;
 int FUNC_4 (struct sfxge_txq*) ;
 int FUNC_5 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_6(struct sfxge_txq *VAR_0)
{
 FUNC_0(VAR_0);

 do {
  if (FUNC_3(VAR_0))
   FUNC_5(VAR_0);

  if (!VAR_0->blocked)
   FUNC_4(VAR_0);

  FUNC_2(VAR_0);
 } while (FUNC_3(VAR_0) &&
   FUNC_1(VAR_0));
}
