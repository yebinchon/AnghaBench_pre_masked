
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int sigfunc ;
typedef int buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_4 ;
 char* FUNC_3 (char*,int,char*,int ,int ,int ) ;
 int * VAR_5 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (char*,char const*,char*,char*,int,int) ;
 char* FUNC_8 (char**,int ,int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int VAR_17 ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(int VAR_18, char *VAR_19[])
{
 sigfunc VAR_20;
 int VAR_21;
 char *VAR_22;
 const char *VAR_23;
 int volatile VAR_24;

 if (VAR_18 == 0 ||
     (VAR_18 == 1 && !FUNC_1(&VAR_18, &VAR_19, "remote-files"))) {
  FUNC_0("usage: %s remote-files\n", VAR_19[0]);
  VAR_3 = -1;
  return;
 }
 VAR_12 = 1;
 VAR_16 = 0;
 VAR_24 = 0;
 if (FUNC_11(VAR_19[0], "mreget") == 0) {
  if (! VAR_5[VAR_0]) {
   FUNC_5(VAR_17,
      "Restart is not supported by the remote server.\n");
   return;
  }
  VAR_24 = 1;
 }
 VAR_20 = FUNC_13(VAR_2, VAR_13);
 if (FUNC_9(VAR_8, 1))
  FUNC_6(VAR_19[0]);
 while ((VAR_22 = FUNC_8(VAR_19, VAR_15, ((void*)0))) != ((void*)0)) {
  char VAR_25[VAR_1];
  if (*VAR_22 == '\0' || !VAR_4) {
   VAR_12 = 0;
   continue;
  }
  if (! VAR_12)
   continue;
  if (! FUNC_4(VAR_22, VAR_9)) {
   FUNC_5(VAR_17, "Skipping non-relative filename `%s'\n",
       VAR_22);
   continue;
  }
  if (!FUNC_2(VAR_19[0], VAR_22))
   continue;
  VAR_23 = FUNC_3(VAR_25, sizeof(VAR_25), VAR_22, VAR_11, VAR_14, VAR_10);
  if (VAR_24) {
   struct stat VAR_26;

   if (FUNC_10(VAR_23, &VAR_26) == 0)
    VAR_16 = VAR_26.st_size;
   else
    FUNC_12("Can't stat `%s'", VAR_23);
  }
  FUNC_7("RETR", VAR_23, VAR_22, VAR_16 ? "r+" : "w",
      VAR_23 != VAR_22 || !VAR_7, 1);
  VAR_16 = 0;
  if (!VAR_12 && VAR_6) {
   VAR_21 = VAR_7;
   VAR_7 = 1;
   if (FUNC_2(VAR_19[0], ((void*)0)))
    VAR_12++;
   VAR_7 = VAR_21;
  }
 }
 (void)FUNC_13(VAR_2, VAR_20);
 VAR_12 = 0;
}
