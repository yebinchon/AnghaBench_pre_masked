
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freereg; int ls; } ;
typedef TYPE_1__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

void FUNC_4 (FuncState *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  int VAR_9 = (VAR_7 - 1)/VAR_0 + 1;
  int VAR_10 = (VAR_8 == VAR_1) ? 0 : VAR_8;
  FUNC_3(VAR_8 != 0);
  if (VAR_9 <= VAR_3)
    FUNC_1(VAR_5, VAR_4, VAR_6, VAR_10, VAR_9);
  else if (VAR_9 <= VAR_2) {
    FUNC_1(VAR_5, VAR_4, VAR_6, VAR_10, 0);
    FUNC_0(VAR_5, VAR_9);
  }
  else
    FUNC_2(VAR_5->ls, "constructor too long");
  VAR_5->freereg = VAR_6 + 1;
}
