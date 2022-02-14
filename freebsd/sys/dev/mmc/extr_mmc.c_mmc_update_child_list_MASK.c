
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int child_count; int ** child_list; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ) ;
 int ** FUNC_1 (int **,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mmc_softc *VAR_2)
{
 device_t VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->child_count == 0) {
  FUNC_0(VAR_2->child_list, VAR_0);
  return;
 }
 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_2->child_count; VAR_4++) {
  for (;;) {
   VAR_3 = VAR_2->child_list[VAR_5++];
   if (VAR_3 != ((void*)0))
    break;
  }
  if (VAR_4 != VAR_5)
   VAR_2->child_list[VAR_4] = VAR_3;
 }
 VAR_2->child_list = FUNC_1(VAR_2->child_list, sizeof(device_t) *
     VAR_2->child_count, VAR_0, VAR_1);
}
