
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int VAR_0 ;

FUNC_4()
{
 union { long long q; unsigned long v[2]; } VAR_1, VAR_2, VAR_3, VAR_4;
 char VAR_5[300];
 extern long long FUNC_5(unsigned long long, unsigned long long,
     unsigned long long *);

 for (;;) {
  FUNC_2("> ");
  if (FUNC_1(VAR_5, sizeof VAR_5, VAR_0) == ((void*)0))
   break;
  if (FUNC_3(VAR_5, "%lu:%lu %lu:%lu",
       &VAR_1.v[0], &VAR_1.v[1], &VAR_2.v[0], &VAR_2.v[1]) != 4 &&
      FUNC_3(VAR_5, "0x%lx:%lx 0x%lx:%lx",
       &VAR_1.v[0], &VAR_1.v[1], &VAR_2.v[0], &VAR_2.v[1]) != 4) {
   FUNC_2("eh?\n");
   continue;
  }
  VAR_3.q = FUNC_5(VAR_1.q, VAR_2.q, &VAR_4.q);
  FUNC_2("%lx:%lx /%% %lx:%lx => q=%lx:%lx r=%lx:%lx\n",
      VAR_1.v[0], VAR_1.v[1], VAR_2.v[0], VAR_2.v[1],
      VAR_3.v[0], VAR_3.v[1], VAR_4.v[0], VAR_4.v[1]);
  FUNC_2("  = %lX%08lX / %lX%08lX => %lX%08lX\n  = %lX%08lX %% %lX%08lX => %lX%08lX\n",

      VAR_1.v[0], VAR_1.v[1], VAR_2.v[0], VAR_2.v[1], VAR_3.v[0], VAR_3.v[1],
      VAR_1.v[0], VAR_1.v[1], VAR_2.v[0], VAR_2.v[1], VAR_4.v[0], VAR_4.v[1]);
 }
 FUNC_0(0);
}
