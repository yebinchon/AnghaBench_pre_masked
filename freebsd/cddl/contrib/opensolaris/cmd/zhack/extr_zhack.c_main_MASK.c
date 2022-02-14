
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** path; int paths; void* cachefile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,char**) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char**) ;

int
FUNC_11(int VAR_11, char **VAR_12)
{
 extern void FUNC_0(void);

 char *VAR_13[VAR_3];
 const char *VAR_14;
 int VAR_15 = 0;
 char VAR_16;

 VAR_4.path = VAR_13;

 FUNC_1(&VAR_11, VAR_12);
 FUNC_0();

 while ((VAR_16 = FUNC_4(VAR_11, VAR_12, "c:d:")) != -1) {
  switch (VAR_16) {
  case 'c':
   VAR_4.cachefile = VAR_8;
   break;
  case 'd':
   FUNC_0(VAR_4.paths < VAR_3);
   VAR_4.path[VAR_4.paths++] = VAR_8;
   break;
  default:
   FUNC_9();
   break;
  }
 }

 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;
 VAR_9 = 1;

 if (VAR_11 == 0) {
  (void) FUNC_3(VAR_10, "error: no command specified\n");
  FUNC_9();
 }

 VAR_14 = VAR_12[0];

 if (FUNC_8(VAR_14, "feature") == 0) {
  VAR_15 = FUNC_10(VAR_11, VAR_12);
 } else {
  (void) FUNC_3(VAR_10, "error: unknown subcommand: %s\n",
      VAR_14);
  FUNC_9();
 }

 if (!VAR_6 && FUNC_7(VAR_5, ((void*)0), VAR_1, VAR_0) != 0) {
  FUNC_2(((void*)0), VAR_2, "pool export failed; "
      "changes may not be committed to disk\n");
 }

 FUNC_6(VAR_7);
 FUNC_5();

 return (VAR_15);
}
