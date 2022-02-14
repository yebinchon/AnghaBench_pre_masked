
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int c_parser ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_13 (c_parser *VAR_9)
{
  tree VAR_10, VAR_11, VAR_12, VAR_13;
  FUNC_12 (FUNC_8 (VAR_9, VAR_4));
  FUNC_6 (VAR_9);
  VAR_10 = FUNC_2 (VAR_7);
  if (FUNC_9 (VAR_9, VAR_1, "expected %<(%>"))
    {
      VAR_11 = FUNC_7 (VAR_9).value;
      FUNC_10 (VAR_9, VAR_0, "expected %<)%>");
    }
  else
    VAR_11 = VAR_6;
  FUNC_11 (VAR_11);
  VAR_13 = VAR_5;
  VAR_5 = VAR_3;
  VAR_12 = FUNC_5 (VAR_9);
  FUNC_4 (VAR_12);
  if (VAR_5)
    FUNC_0 (FUNC_1 (VAR_2, VAR_8, VAR_5));
  VAR_5 = VAR_13;
  FUNC_0 (FUNC_3 (VAR_10, VAR_7));
}
