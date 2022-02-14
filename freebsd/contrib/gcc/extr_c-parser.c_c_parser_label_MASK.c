
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {int location; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 TYPE_2__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (c_parser *VAR_7)
{
  location_t VAR_8 = FUNC_9 (VAR_7)->location;
  tree VAR_9 = VAR_4;
  if (FUNC_8 (VAR_7, VAR_5))
    {
      tree VAR_10, VAR_11;
      FUNC_4 (VAR_7);
      VAR_10 = FUNC_6 (VAR_7, ((void*)0)).value;
      if (FUNC_7 (VAR_7, VAR_0))
 {
   FUNC_4 (VAR_7);
   VAR_9 = FUNC_13 (VAR_10, VAR_4);
 }
      else if (FUNC_7 (VAR_7, VAR_1))
 {
   FUNC_4 (VAR_7);
   VAR_11 = FUNC_6 (VAR_7, ((void*)0)).value;
   if (FUNC_10 (VAR_7, VAR_0, "expected %<:%>"))
     VAR_9 = FUNC_13 (VAR_10, VAR_11);
 }
      else
 FUNC_5 (VAR_7, "expected %<:%> or %<...%>");
    }
  else if (FUNC_8 (VAR_7, VAR_6))
    {
      FUNC_4 (VAR_7);
      if (FUNC_10 (VAR_7, VAR_0, "expected %<:%>"))
 VAR_9 = FUNC_13 (VAR_4, VAR_4);
    }
  else
    {
      tree VAR_12 = FUNC_9 (VAR_7)->value;
      tree VAR_13;
      location_t VAR_14;
      tree VAR_15;
      FUNC_14 (FUNC_7 (VAR_7, VAR_2));
      FUNC_4 (VAR_7);
      FUNC_14 (FUNC_7 (VAR_7, VAR_0));
      VAR_14 = FUNC_9 (VAR_7)->location;
      FUNC_4 (VAR_7);
      VAR_15 = FUNC_3 (VAR_7);
      VAR_13 = FUNC_12 (VAR_14, VAR_12);
      if (VAR_13)
 {
   FUNC_11 (&VAR_13, VAR_15, 0);
   VAR_9 = FUNC_1 (FUNC_2 (VAR_3, VAR_13));
 }
    }
  if (VAR_9)
    FUNC_0 (VAR_9, VAR_8);
}
