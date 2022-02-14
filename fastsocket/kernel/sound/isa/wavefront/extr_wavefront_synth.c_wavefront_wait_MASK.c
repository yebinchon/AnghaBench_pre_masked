
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_4, int VAR_5)

{
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 5) {
  if (FUNC_2 (VAR_4) & VAR_5) {
   return 1;
  }
  FUNC_0(5);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  if (FUNC_2 (VAR_4) & VAR_5) {
   return 1;
  }

  if (FUNC_1 (VAR_0/VAR_1)) {
   return (0);
  }
 }

 return (0);
}
