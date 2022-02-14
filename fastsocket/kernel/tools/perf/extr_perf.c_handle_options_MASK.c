
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_struct {char* cmd; } ;


 unsigned int FUNC_0 (struct cmd_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cmd_struct* VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int VAR_9 ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*,int) ;
 int VAR_10 ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_14(const char ***VAR_12, int *VAR_13, int *VAR_14)
{
 int VAR_15 = 0;

 while (*VAR_13 > 0) {
  const char *VAR_16 = (*VAR_12)[0];
  if (VAR_16[0] != '-')
   break;






  if (!FUNC_10(VAR_16, "--help") || !FUNC_10(VAR_16, "--version"))
   break;




  if (!FUNC_6(VAR_16, VAR_1)) {
   VAR_16 += FUNC_11(VAR_1);
   if (*VAR_16 == '=')
    FUNC_5(VAR_16 + 1);
   else {
    FUNC_8(FUNC_4());
    FUNC_2(0);
   }
  } else if (!FUNC_10(VAR_16, "--html-path")) {
   FUNC_8(FUNC_12(VAR_5));
   FUNC_2(0);
  } else if (!FUNC_10(VAR_16, "-p") || !FUNC_10(VAR_16, "--paginate")) {
   VAR_11 = 1;
  } else if (!FUNC_10(VAR_16, "--no-pager")) {
   VAR_11 = 0;
   if (VAR_14)
    *VAR_14 = 1;
  } else if (!FUNC_10(VAR_16, "--perf-dir")) {
   if (*VAR_13 < 2) {
    FUNC_3(VAR_10, "No directory given for --perf-dir.\n");
    FUNC_13(VAR_9);
   }
   FUNC_9(VAR_4, (*VAR_12)[1], 1);
   if (VAR_14)
    *VAR_14 = 1;
   (*VAR_12)++;
   (*VAR_13)--;
   VAR_15++;
  } else if (!FUNC_6(VAR_16, VAR_2)) {
   FUNC_9(VAR_4, VAR_16 + FUNC_11(VAR_2), 1);
   if (VAR_14)
    *VAR_14 = 1;
  } else if (!FUNC_10(VAR_16, "--work-tree")) {
   if (*VAR_13 < 2) {
    FUNC_3(VAR_10, "No directory given for --work-tree.\n");
    FUNC_13(VAR_9);
   }
   FUNC_9(VAR_6, (*VAR_12)[1], 1);
   if (VAR_14)
    *VAR_14 = 1;
   (*VAR_12)++;
   (*VAR_13)--;
  } else if (!FUNC_6(VAR_16, VAR_3)) {
   FUNC_9(VAR_6, VAR_16 + FUNC_11(VAR_3), 1);
   if (VAR_14)
    *VAR_14 = 1;
  } else if (!FUNC_10(VAR_16, "--debugfs-dir")) {
   if (*VAR_13 < 2) {
    FUNC_3(VAR_10, "No directory given for --debugfs-dir.\n");
    FUNC_13(VAR_9);
   }
   FUNC_1((*VAR_12)[1]);
   if (VAR_14)
    *VAR_14 = 1;
   (*VAR_12)++;
   (*VAR_13)--;
  } else if (!FUNC_6(VAR_16, VAR_0)) {
   FUNC_1(VAR_16 + FUNC_11(VAR_0));
   FUNC_3(VAR_10, "dir: %s\n", VAR_8);
   if (VAR_14)
    *VAR_14 = 1;
  } else if (!FUNC_10(VAR_16, "--list-cmds")) {
   unsigned int VAR_17;

   for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_7); VAR_17++) {
    struct cmd_struct *VAR_18 = VAR_7+VAR_17;
    FUNC_7("%s ", VAR_18->cmd);
   }
   FUNC_2(0);
  } else {
   FUNC_3(VAR_10, "Unknown option: %s\n", VAR_16);
   FUNC_13(VAR_9);
  }

  (*VAR_12)++;
  (*VAR_13)--;
  VAR_15++;
 }
 return VAR_15;
}
