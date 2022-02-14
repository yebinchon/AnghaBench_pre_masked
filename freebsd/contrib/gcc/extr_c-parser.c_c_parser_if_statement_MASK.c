
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_2__ {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (c_parser *VAR_4)
{
  tree VAR_5;
  location_t VAR_6;
  tree VAR_7;
  bool VAR_8 = 0, VAR_9 = 0;
  tree VAR_10, VAR_11;
  FUNC_9 (FUNC_6 (VAR_4, VAR_2));
  FUNC_4 (VAR_4);
  VAR_5 = FUNC_1 (VAR_3);
  VAR_6 = FUNC_8 (VAR_4)->location;
  VAR_7 = FUNC_7 (VAR_4);
  VAR_10 = FUNC_5 (VAR_4, &VAR_8);
  if (FUNC_6 (VAR_4, VAR_1))
    {
      FUNC_4 (VAR_4);
      VAR_11 = FUNC_5 (VAR_4, &VAR_9);
    }
  else
    VAR_11 = VAR_0;
  FUNC_3 (VAR_6, VAR_7, VAR_10, VAR_11, VAR_8);
  FUNC_0 (FUNC_2 (VAR_5, VAR_3));
}
