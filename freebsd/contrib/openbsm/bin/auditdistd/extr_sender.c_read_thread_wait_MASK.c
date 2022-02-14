
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adh_reset; int adh_directory; int adh_trail_offset; int adh_trail_name; int * adh_remote; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

__attribute__((used)) static bool
FUNC_12(void)
{
 bool VAR_4 = 0;

 FUNC_1(&VAR_2);
 if (VAR_0->adh_reset) {
reset:
  VAR_0->adh_reset = 0;
  if (FUNC_5(VAR_3) != -1)
   FUNC_4(VAR_3);
  FUNC_8(VAR_3);
  while (VAR_0->adh_remote == ((void*)0))
   FUNC_0(&VAR_1, &VAR_2);
  FUNC_9(VAR_3, VAR_0->adh_trail_name,
      VAR_0->adh_trail_offset);
  VAR_4 = 1;
 }
 FUNC_2(&VAR_2);
 while (FUNC_5(VAR_3) == -1) {
  VAR_4 = 1;
  FUNC_10();




  FUNC_1(&VAR_2);
  if (VAR_0->adh_reset)
   goto reset;
  FUNC_2(&VAR_2);
  if (FUNC_5(VAR_3) == -1)
   FUNC_7(VAR_3);
 }
 if (VAR_4) {
  FUNC_3(1, "Trail file \"%s/%s\" opened.",
      VAR_0->adh_directory,
      FUNC_6(VAR_3));
  (void)FUNC_11(FUNC_5(VAR_3));
 }
 return (VAR_4);
}
