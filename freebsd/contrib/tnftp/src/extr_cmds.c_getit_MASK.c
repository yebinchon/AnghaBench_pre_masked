
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; scalar_t__ st_size; } ;
typedef int buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 char* FUNC_2 (char*,int,char*,int,int,int) ;
 int * VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char const*,char*,char const*,int,int) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char const*,struct stat*) ;
 int VAR_8 ;
 int FUNC_9 (char*,char const*) ;

int
FUNC_10(int VAR_9, char *VAR_10[], int VAR_11, const char *VAR_12)
{
 int VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 const char *VAR_17;
 char VAR_18[VAR_1];

 VAR_13 = VAR_14 = 0;
 if (VAR_9 == 2) {
  VAR_9++;
  VAR_10[2] = VAR_10[1];
  VAR_13++;
 }
 if (VAR_9 == 0 || (VAR_9 == 1 && !FUNC_1(&VAR_9, &VAR_10, "remote-file")))
  goto usage;
 if ((VAR_9 < 3 && !FUNC_1(&VAR_9, &VAR_10, "local-file")) || VAR_9 > 3) {
 usage:
  FUNC_0("usage: %s remote-file [local-file]\n", VAR_10[0]);
  VAR_2 = -1;
  return (0);
 }
 VAR_15 = VAR_10[1];
 if ((VAR_16 = FUNC_5(VAR_10[2])) == ((void*)0)) {
  VAR_2 = -1;
  return (0);
 }
 VAR_17 = FUNC_2(VAR_18, sizeof(VAR_18), VAR_16,
  VAR_13 && VAR_5, VAR_13 && VAR_6, VAR_13 && VAR_4);
 if (VAR_11) {
  struct stat VAR_19;
  int VAR_20;

  if (! VAR_3[VAR_0]) {
   FUNC_3(VAR_8,
       "Restart is not supported by the remote server.\n");
   return (0);
  }
  VAR_20 = FUNC_8(VAR_17, &VAR_19);
  if (VAR_11 == 1) {
   if (VAR_20 < 0) {
    FUNC_9("Can't stat `%s'", VAR_17);
    goto freegetit;
   }
   VAR_7 = VAR_19.st_size;
  } else {
   if (VAR_20 == 0) {
    time_t VAR_21;

    VAR_21 = FUNC_7(VAR_10[1], 0);
    if (VAR_21 == -1)
     goto freegetit;
    if (VAR_19.st_mtime >= VAR_21) {
     VAR_14 = 1;
     goto freegetit;
    }
   }
  }
 }

 FUNC_6("RETR", VAR_17, VAR_15, VAR_12,
     VAR_15 != VAR_10[1] || VAR_17 != VAR_10[2], VAR_13);
 VAR_7 = 0;
 freegetit:
 (void)FUNC_4(VAR_16);
 return (VAR_14);
}
