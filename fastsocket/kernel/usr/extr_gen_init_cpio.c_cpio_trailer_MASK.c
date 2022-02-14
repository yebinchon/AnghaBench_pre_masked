
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,int ,int ,long,long,int,long,int ,int ,int ,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_1[256];
 const char VAR_2[] = "TRAILER!!!";

 FUNC_3(VAR_1, "%s%08X%08X%08lX%08lX%08X%08lX"
        "%08X%08X%08X%08X%08X%08X%08X",
  "070701",
  0,
  0,
  (long) 0,
  (long) 0,
  1,
  (long) 0,
  0,
  0,
  0,
  0,
  0,
  (unsigned)FUNC_4(VAR_2)+1,
  0);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2);

 while (VAR_0 % 512) {
  FUNC_2(0);
  VAR_0++;
 }
}
