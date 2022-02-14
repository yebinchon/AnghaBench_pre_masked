
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 size_t VAR_3;
 size_t VAR_4[12];

 for (VAR_2 = 0; VAR_2 < 12; VAR_2++) {
  VAR_3 = FUNC_1(FUNC_0(VAR_2));
  if (VAR_3 == (size_t)-1) {
   VAR_0 = -1;
   return;
  }
  VAR_4[VAR_2] = VAR_3;
  if (VAR_3 > VAR_0)
   VAR_0 = VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < 12; VAR_2++)
  VAR_1[VAR_2] = VAR_0 - VAR_4[VAR_2];
}
