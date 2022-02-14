
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,long) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 register int VAR_3;
 register long VAR_4 = 0;




 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_2[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_4);
  VAR_4 = VAR_0[VAR_3] += VAR_4;
 }
}
