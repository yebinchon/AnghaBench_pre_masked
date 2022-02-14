
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (LexState *VAR_1) {
  int VAR_2[3], VAR_3;
  int VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < 3 && FUNC_1(VAR_1->current); VAR_3++) {
    VAR_2[VAR_3] = VAR_1->current;
    VAR_4 = 10*VAR_4 + VAR_2[VAR_3] - '0';
    FUNC_2(VAR_1);
  }
  if (VAR_4 > VAR_0)
    FUNC_0(VAR_1, VAR_2, VAR_3, "decimal escape too large");
  return VAR_4;
}
