
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_5[VAR_2];
 FILE *VAR_6;
 u8 VAR_7;
 int VAR_8 = 0;

 if (!VAR_4)
  return;

 if (FUNC_3(VAR_5, VAR_2) < 0)
  return;

 VAR_6 = FUNC_1(VAR_4, "wb");
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_1, "random: Could not open entropy file %s "
      "for writing", VAR_4);
  return;
 }

 VAR_7 = VAR_3 > 0xff ? 0xff : VAR_3;
 if (FUNC_2(&VAR_7, 1, 1, VAR_6) != 1 ||
     FUNC_2(VAR_5, VAR_2, 1, VAR_6) != 1)
  VAR_8 = 1;
 FUNC_0(VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_1, "random: Could not write entropy data "
      "to %s", VAR_4);
  return;
 }

 FUNC_4(VAR_0, "random: Updated entropy file %s "
     "(own_pool_ready=%u)",
     VAR_4, VAR_3);
}
