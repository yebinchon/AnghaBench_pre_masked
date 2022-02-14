
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buff; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3 (LexState *VAR_2, int *VAR_3, int VAR_4, const char *VAR_5) {
  int VAR_6;
  FUNC_1(VAR_2->buff);
  FUNC_2(VAR_2, '\\');
  for (VAR_6 = 0; VAR_6 < VAR_4 && VAR_3[VAR_6] != VAR_0; VAR_6++)
    FUNC_2(VAR_2, VAR_3[VAR_6]);
  FUNC_0(VAR_2, VAR_5, VAR_1);
}
