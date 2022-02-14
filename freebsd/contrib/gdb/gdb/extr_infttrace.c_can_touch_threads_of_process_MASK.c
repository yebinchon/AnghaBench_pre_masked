
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttevents_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (int VAR_2, ttevents_t VAR_3)
{
  if (FUNC_1 (VAR_3, VAR_2))
    {
      VAR_1 = VAR_2;
      VAR_0 = 1;
    }

  else if (VAR_0 &&
    (FUNC_2 (VAR_3, VAR_2) ||
     FUNC_0 (VAR_3, VAR_2)))
    {
      VAR_0 = 0;
      VAR_1 = 0;
    }

  return !VAR_0;
}
