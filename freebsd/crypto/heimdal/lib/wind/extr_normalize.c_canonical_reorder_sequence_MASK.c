
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(uint32_t * VAR_0, size_t VAR_1)
{
    size_t VAR_2, VAR_3;

    if (VAR_1 <= 1)
 return;

    for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
 for (VAR_3 = VAR_2;
      VAR_3 > 0 &&
   FUNC_0(VAR_0[VAR_3]) < FUNC_0(VAR_0[VAR_3-1]);
      VAR_3--)
     FUNC_1(&VAR_0[VAR_3], &VAR_0[VAR_3-1]);
    }
}
