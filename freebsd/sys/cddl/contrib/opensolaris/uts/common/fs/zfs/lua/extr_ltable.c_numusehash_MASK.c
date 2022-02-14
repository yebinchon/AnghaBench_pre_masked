
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * node; } ;
typedef TYPE_1__ Table ;
typedef int Node ;


 scalar_t__ FUNC_0 (int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (const Table *VAR_0, int *VAR_1, int *VAR_2) {
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = FUNC_3(VAR_0);
  while (VAR_5--) {
    Node *VAR_6 = &VAR_0->node[VAR_5];
    if (!FUNC_4(FUNC_2(VAR_6))) {
      VAR_4 += FUNC_0(FUNC_1(VAR_6), VAR_1);
      VAR_3++;
    }
  }
  *VAR_2 += VAR_4;
  return VAR_3;
}
