
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rowSeparator; int rowSepPrior; int colSeparator; int colSepPrior; int mode; int modePrior; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(ShellState *VAR_0){
  VAR_0->modePrior = VAR_0->mode;
  FUNC_0(VAR_0->colSepPrior, VAR_0->colSeparator, sizeof(VAR_0->colSeparator));
  FUNC_0(VAR_0->rowSepPrior, VAR_0->rowSeparator, sizeof(VAR_0->rowSeparator));
}
