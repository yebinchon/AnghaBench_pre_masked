
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_priority_queue__t ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(svn_priority_queue__t *VAR_0,
                 int VAR_1)
{
  while (VAR_1 > 0 && FUNC_0(VAR_0, VAR_1, (VAR_1 - 1) / 2))
    {
      FUNC_1(VAR_0, VAR_1, (VAR_1 - 1) / 2);
      VAR_1 = (VAR_1 - 1) / 2;
    }
}
