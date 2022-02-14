
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2[] = { 1, 2, 3, 4, 5, 6, 0 };
 int VAR_3[] = { 1, -1, 0 };
 int VAR_4[] = { 1, 1, 1, -1, 2, 3, 4, 1, 2, 0 };
 int VAR_5[] = { -1, 1, 2, 3, 4, 0 };
 int VAR_6 = 0;
 int VAR_7;

 FUNC_3(VAR_1, "int_array tests");

 if (FUNC_0(VAR_2) != 6 ||
     FUNC_0(VAR_3) != 2)
  VAR_6++;

 FUNC_1(VAR_4);
 VAR_7 = FUNC_0(VAR_5);
 if (FUNC_0(VAR_4) != VAR_7)
  VAR_6++;
 else if (FUNC_2(VAR_4, VAR_5, VAR_7 * sizeof(int)) != 0)
  VAR_6++;

 if (VAR_6) {
  FUNC_3(VAR_0, "%d int_array test(s) failed", VAR_6);
  return -1;
 }

 return 0;
}
