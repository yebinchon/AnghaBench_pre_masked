
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_7__ {int coff; int roff; } ;
typedef TYPE_1__ SCR ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,int ,char*,size_t,int ,size_t,int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

int
FUNC_5(SCR *VAR_3, size_t VAR_4, size_t VAR_5)
{
 WINDOW *VAR_6;
 VAR_6 = FUNC_0(VAR_3) ? FUNC_0(VAR_3) : VAR_2;

 if (FUNC_4(VAR_6, FUNC_2(VAR_3, VAR_4), FUNC_1(VAR_3, VAR_5)) == VAR_0) {
  FUNC_3(VAR_3, VAR_1, "Error: move: l(%zu + %zu) c(%zu + %zu)",
      VAR_4, VAR_3->roff, VAR_5, VAR_3->coff);
  return (1);
 }
 return (0);
}
