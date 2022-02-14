
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cam_pinfo ;


 scalar_t__ FUNC_0 (int **,int,int) ;
 int FUNC_1 (int **,int,int) ;

__attribute__((used)) static void
FUNC_2(cam_pinfo **VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4 << 1;
 for (; VAR_3 <= VAR_2; VAR_3 = VAR_4 << 1) {

  if (VAR_3 < VAR_2) {

   if (FUNC_0(VAR_0, VAR_3 + 1, VAR_3) < 0)
    VAR_3++;
  }

  if (FUNC_0(VAR_0, VAR_4, VAR_3) <= 0)
   break;
  FUNC_1(VAR_0, VAR_3, VAR_4);
  VAR_4 = VAR_3;
 }
}
