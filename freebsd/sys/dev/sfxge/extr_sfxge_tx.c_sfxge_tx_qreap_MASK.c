
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {int completed; int reaped; } ;


 int FUNC_0 (struct sfxge_txq*) ;

__attribute__((used)) static void
FUNC_1(struct sfxge_txq *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->reaped = VAR_0->completed;
}
