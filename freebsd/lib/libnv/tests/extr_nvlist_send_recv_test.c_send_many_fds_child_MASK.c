
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_10(int VAR_4)
{
 char VAR_5[16];
 nvlist_t *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_8(VAR_3, VAR_2);
 FUNC_0(VAR_9 >= 0);

 for (VAR_10 = 1; VAR_10 < VAR_1; VAR_10++) {
  VAR_6 = FUNC_5(0);
  VAR_8 = FUNC_3();
  if (VAR_8 == -1)
   FUNC_1(VAR_0, "sysctl");

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   FUNC_9(VAR_5, sizeof(VAR_5), "fd%d", VAR_11);
   FUNC_4(VAR_6, VAR_5, VAR_9);
  }
  FUNC_7(VAR_4, VAR_6);
  FUNC_6(VAR_6);

  VAR_7 = FUNC_3();
  if (VAR_7 == -1)
   FUNC_1(VAR_0, "sysctl");
  if (VAR_7 != VAR_8)
   FUNC_2(VAR_0, "fd count mismatch");
 }
}
