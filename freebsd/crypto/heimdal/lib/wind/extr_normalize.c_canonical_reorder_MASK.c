
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, size_t VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
 int VAR_3 = FUNC_0(VAR_0[VAR_2]);
 if (VAR_3) {
     size_t VAR_4;
     for (VAR_4 = VAR_2 + 1;
   VAR_4 < VAR_1 && FUNC_0(VAR_0[VAR_4]);
   ++VAR_4)
  ;
     FUNC_1(&VAR_0[VAR_2], VAR_4 - VAR_2);
     VAR_2 = VAR_4;
 }
    }
}
