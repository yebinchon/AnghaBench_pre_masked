
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int col; scalar_t__ row; int * width; int * tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(int VAR_2)
{

 FUNC_0(VAR_1 == ((void*)0));
 FUNC_0(VAR_2 > 0);
 if ((VAR_1 = FUNC_1(1, sizeof(*VAR_1))) == ((void*)0))
  FUNC_2(VAR_0, "calloc");
 if ((VAR_1->tbl = FUNC_1(VAR_2, sizeof(*VAR_1->tbl))) == ((void*)0))
  FUNC_2(VAR_0, "calloc");
 if ((VAR_1->width = FUNC_1(VAR_2, sizeof(*VAR_1->width))) == ((void*)0))
  FUNC_2(VAR_0, "calloc");
 VAR_1->col = VAR_2;
 VAR_1->row = 0;
}
