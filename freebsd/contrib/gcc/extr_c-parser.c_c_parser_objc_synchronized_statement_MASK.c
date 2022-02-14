
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
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (c_parser *VAR_4)
{
  location_t VAR_5;
  tree VAR_6, VAR_7;
  FUNC_7 (FUNC_2 (VAR_4, VAR_2));
  FUNC_0 (VAR_4);
  VAR_5 = FUNC_4 (VAR_4)->location;
  if (FUNC_5 (VAR_4, VAR_1, "expected %<(%>"))
    {
      VAR_6 = FUNC_1 (VAR_4).value;
      FUNC_6 (VAR_4, VAR_0, "expected %<)%>");
    }
  else
    VAR_6 = VAR_3;

  VAR_7 = FUNC_3 (VAR_4);
  FUNC_8 (VAR_5, VAR_6, VAR_7);
}
