
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {char const* cmd; scalar_t__ pid; int status; } ;
struct job {int nprocs; scalar_t__ state; struct procstat* ps; } ;
typedef int statebuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,int,...) ;
 struct job* FUNC_7 (struct job*) ;
 int FUNC_8 (struct job*) ;
 struct job* VAR_4 ;
 int FUNC_9 (char) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct job*) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct job *VAR_5, int VAR_6)
{
 char VAR_7[64];
 char VAR_8[16];
 const char *VAR_9, *VAR_10;
 struct procstat *VAR_11;
 struct job *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 char VAR_20;

 VAR_18 = (VAR_6 == VAR_1) ? 1 : VAR_5->nprocs;
 VAR_16 = VAR_5 - VAR_4 + 1;
 VAR_14 = VAR_17 = 0;







 VAR_10 = "";
 VAR_19 = FUNC_8(VAR_5);
 if (VAR_5->state == 0) {
  VAR_9 = "Running";
 } else if (FUNC_2(VAR_19)) {
  if (FUNC_1(VAR_19) == 0)
   VAR_9 = "Done";
  else {
   FUNC_6(VAR_8, sizeof(VAR_8), "Done(%d)",
       FUNC_1(VAR_19));
   VAR_9 = VAR_8;
  }
 } else {
  VAR_15 = FUNC_5(VAR_19);
  VAR_9 = FUNC_14(VAR_15);
  if (VAR_9 == ((void*)0))
   VAR_9 = "Unknown signal";
  if (FUNC_0(VAR_19))
   VAR_10 = " (core dumped)";
 }

 for (VAR_11 = VAR_5->ps ; VAR_18 > 0 ; VAR_11++, VAR_18--) {
  if (VAR_6 == VAR_2 || VAR_6 == VAR_1) {
   FUNC_10("%d\n", (int)VAR_11->pid);
   continue;
  }
  if (VAR_6 != VAR_3 && VAR_11 != VAR_5->ps)
   continue;
  if (VAR_16 == VAR_14 && VAR_11 == VAR_5->ps)
   VAR_20 = '+';
  else if (VAR_16 == VAR_17 && VAR_11 == VAR_5->ps)
   VAR_20 = '-';
  else
   VAR_20 = ' ';
  if (VAR_11 == VAR_5->ps)
   FUNC_6(VAR_7, 64, "[%d] %c ", VAR_16, VAR_20);
  else
   FUNC_6(VAR_7, 64, "    %c ", VAR_20);
  FUNC_11(VAR_7);
  VAR_13 = FUNC_13(VAR_7);
  if (VAR_6 == VAR_3) {
   FUNC_6(VAR_7, 64, "%d ", (int)VAR_11->pid);
   FUNC_11(VAR_7);
   VAR_13 += FUNC_13(VAR_7);
  }
  if (VAR_11 == VAR_5->ps) {
   FUNC_11(VAR_9);
   FUNC_11(VAR_10);
   VAR_13 += FUNC_13(VAR_9) + FUNC_13(VAR_10);
  }
  do {
   FUNC_9(' ');
   VAR_13++;
  } while (VAR_13 < 30);
  if (VAR_6 == VAR_3) {
   FUNC_11(VAR_11->cmd);
   FUNC_9('\n');
  } else
   FUNC_12(VAR_5);
 }
}
