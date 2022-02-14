
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rowSepPrior; int rowSeparator; int colSepPrior; int colSeparator; int modePrior; int mode; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(ShellState *VAR_0){
  VAR_0->mode = VAR_0->modePrior;
  FUNC_0(VAR_0->colSeparator, VAR_0->colSepPrior, sizeof(VAR_0->colSeparator));
  FUNC_0(VAR_0->rowSeparator, VAR_0->rowSepPrior, sizeof(VAR_0->rowSeparator));
}
