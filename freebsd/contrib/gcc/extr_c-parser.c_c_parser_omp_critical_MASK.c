
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
typedef int c_parser ;
struct TYPE_2__ {int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static tree
FUNC_9 (c_parser *VAR_4)
{
  tree VAR_5, VAR_6 = ((void*)0);

  if (FUNC_3 (VAR_4, VAR_2))
    {
      FUNC_1 (VAR_4);
      if (FUNC_3 (VAR_4, VAR_1))
 {
   VAR_6 = FUNC_6 (VAR_4)->value;
   FUNC_1 (VAR_4);
   FUNC_7 (VAR_4, VAR_0, "expected %<)%>");
 }
      else
 FUNC_2 (VAR_4, "expected identifier");
    }
  else if (FUNC_4 (VAR_4, VAR_3))
    FUNC_2 (VAR_4, "expected %<(%> or end of line");
  FUNC_8 (VAR_4);

  VAR_5 = FUNC_5 (VAR_4);
  return FUNC_0 (VAR_5, VAR_6);
}
