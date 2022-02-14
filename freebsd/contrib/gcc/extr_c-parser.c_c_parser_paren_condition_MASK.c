
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_7 (c_parser *VAR_3)
{
  location_t VAR_4;
  tree VAR_5;
  if (!FUNC_5 (VAR_3, VAR_1, "expected %<(%>"))
    return VAR_2;
  VAR_4 = FUNC_4 (VAR_3)->location;
  VAR_5 = FUNC_2
    (FUNC_3 (VAR_3).value);
  if (FUNC_0 (VAR_5))
    FUNC_1 (VAR_5, VAR_4);
  FUNC_6 (VAR_3, VAR_0, "expected %<)%>");
  return VAR_5;
}
