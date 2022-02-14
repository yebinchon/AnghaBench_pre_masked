
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int insns; } ;
struct cgraph_node {TYPE_1__ global; scalar_t__ decl; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6 (int VAR_1, struct cgraph_node *VAR_2,
         struct cgraph_node *VAR_3)
{
  int VAR_4;
  tree VAR_5 = VAR_3->decl, VAR_6;
  int VAR_7 = FUNC_1 (VAR_0);

  for (VAR_6 = FUNC_0 (VAR_5); VAR_6; VAR_6 = FUNC_2 (VAR_6))
    VAR_7 += FUNC_4 (FUNC_3 (VAR_6));
  VAR_4 = (VAR_3->global.insns - VAR_7) * VAR_1 + VAR_2->global.insns;
  FUNC_5 (VAR_4 >= 0);
  return VAR_4;
}
