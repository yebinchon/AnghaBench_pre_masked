
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2]) {
   FUNC_1("%s", VAR_1[VAR_2]);
   VAR_3 += FUNC_3(VAR_1[VAR_2]);
  } else {
   FUNC_1("%d", VAR_2);
   VAR_3 += 3;
  }
  ++VAR_3;
  if (VAR_3 > 71 || VAR_2 == VAR_0 - 1) {
   FUNC_2("\n");
   VAR_3 = 0;
  } else {
   FUNC_0(' ');
  }
 }
}
