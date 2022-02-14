
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9 (tree *VAR_4)
{
  tree VAR_5 = *VAR_4;
  tree VAR_6, VAR_7;
  location_t VAR_8 = VAR_3;

  VAR_6 = FUNC_4 (VAR_2);

  VAR_7 = FUNC_1 (VAR_5);
  if (!VAR_7)
    VAR_7 = FUNC_6 ();

  *VAR_4 = FUNC_5 (VAR_1, FUNC_3 (VAR_5),
      FUNC_2 (VAR_5), VAR_7, VAR_0);
  FUNC_0 (*VAR_4, VAR_8);
  FUNC_8 (VAR_4);

  *VAR_4 = FUNC_7 (VAR_2, VAR_6, *VAR_4);
}
