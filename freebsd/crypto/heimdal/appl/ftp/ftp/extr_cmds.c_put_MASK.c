
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*,char*,int) ;
 scalar_t__ VAR_5 ;

void
FUNC_6(int VAR_6, char **VAR_7)
{
 char *VAR_8;
 int VAR_9 = 0;
 char *VAR_10, *VAR_11;

 if (VAR_6 == 2) {
  VAR_6++;
  VAR_7[2] = VAR_7[1];
  VAR_9++;
 }
 if (VAR_6 < 2 && !FUNC_0(&VAR_6, &VAR_7, "local-file"))
  goto usage;
 if (VAR_6 < 3 && !FUNC_0(&VAR_6, &VAR_7, "remote-file")) {
usage:
  FUNC_4("usage: %s local-file remote-file\n", VAR_7[0]);
  VAR_1 = -1;
  return;
 }
 VAR_10 = VAR_7[1];
 VAR_11 = VAR_7[2];
 if (!FUNC_3(&VAR_7[1])) {
  VAR_1 = -1;
  return;
 }




 if (VAR_7[1] != VAR_10 && VAR_7[2] == VAR_10) {
  VAR_7[2] = VAR_7[1];
 }
 VAR_8 = (VAR_7[0][0] == 'a') ? "APPE" : ((VAR_5) ? "STOU" : "STOR");
 if (VAR_9 && VAR_4) {
  VAR_7[2] = FUNC_2(VAR_7[2]);
 }
 if (VAR_9 && VAR_3) {
  VAR_7[2] = FUNC_1(VAR_7[2]);
 }
 FUNC_5(VAR_8, VAR_7[1], VAR_7[2],
      VAR_2 == VAR_0 ? "rb" : "r",
      VAR_7[1] != VAR_10 || VAR_7[2] != VAR_11);
}
