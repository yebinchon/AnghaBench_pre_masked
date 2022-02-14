
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
struct TYPE_8__ {int k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef scalar_t__ OpCode ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int,int,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3 (FuncState *VAR_2, OpCode VAR_3, int VAR_4, expdesc *VAR_5,
                                                          expdesc *VAR_6) {
  int VAR_7 = FUNC_2(VAR_2, VAR_5);
  int VAR_8 = FUNC_2(VAR_2, VAR_6);
  FUNC_1(VAR_2, VAR_6);
  FUNC_1(VAR_2, VAR_5);
  if (VAR_4 == 0 && VAR_3 != VAR_0) {
    int VAR_9;
    VAR_9 = VAR_7; VAR_7 = VAR_8; VAR_8 = VAR_9;
    VAR_4 = 1;
  }
  VAR_5->u.info = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8);
  VAR_5->k = VAR_1;
}
