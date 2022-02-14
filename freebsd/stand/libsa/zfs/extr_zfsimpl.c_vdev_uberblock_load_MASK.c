
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_t ;
typedef int uberblock_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(vdev_t *VAR_1, uberblock_t *VAR_2)
{
 uberblock_t *VAR_3;

 VAR_3 = FUNC_4(FUNC_2(VAR_1));
 if (VAR_3 == ((void*)0))
  return;

 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (int VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   if (FUNC_6(VAR_1, VAR_4, VAR_3,
       FUNC_1(VAR_1, VAR_5),
       FUNC_2(VAR_1)))
    continue;
   if (FUNC_5(VAR_3) != 0)
    continue;

   if (FUNC_7(VAR_3, VAR_2) > 0)
    *VAR_2 = *VAR_3;
  }
 }
 FUNC_3(VAR_3);
}
