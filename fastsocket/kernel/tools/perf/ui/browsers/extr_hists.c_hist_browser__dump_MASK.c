
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_browser {int print_seq; } ;
typedef int filename ;
typedef int bf ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (struct hist_browser*,int *) ;
 int FUNC_4 (char*,int,char*,int) ;
 char* FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct hist_browser *VAR_2)
{
 char VAR_3[64];
 FILE *VAR_4;

 while (1) {
  FUNC_4(VAR_3, sizeof(VAR_3), "perf.hist.%d", VAR_2->print_seq);
  if (FUNC_0(VAR_3, VAR_0))
   break;



  if (++VAR_2->print_seq == 8192) {
   FUNC_6("Too many perf.hist.N files, nothing written!");
   return -1;
  }
 }

 VAR_4 = FUNC_2(VAR_3, "w");
 if (VAR_4 == ((void*)0)) {
  char VAR_5[64];
  const char *VAR_6 = FUNC_5(VAR_1, VAR_5, sizeof(VAR_5));
  FUNC_6("Couldn't write to %s: %s", VAR_3, VAR_6);
  return -1;
 }

 ++VAR_2->print_seq;
 FUNC_3(VAR_2, VAR_4);
 FUNC_1(VAR_4);
 FUNC_6("%s written!", VAR_3);

 return 0;
}
