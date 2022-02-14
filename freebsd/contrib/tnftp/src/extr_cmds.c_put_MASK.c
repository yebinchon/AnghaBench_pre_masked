
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_1 ;
 char* FUNC_2 (char*,int,char const*,int ,int,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char const*,char*,char const*,int) ;
 scalar_t__ VAR_4 ;

void
FUNC_6(int VAR_5, char *VAR_6[])
{
 char VAR_7[VAR_0];
 const char *VAR_8;
 int VAR_9 = 0;
 char *VAR_10;
 const char *VAR_11;

 if (VAR_5 == 2) {
  VAR_5++;
  VAR_6[2] = VAR_6[1];
  VAR_9++;
 }
 if (VAR_5 == 0 || (VAR_5 == 1 && !FUNC_1(&VAR_5, &VAR_6, "local-file")))
  goto usage;
 if ((VAR_5 < 3 && !FUNC_1(&VAR_5, &VAR_6, "remote-file")) || VAR_5 > 3) {
 usage:
  FUNC_0("usage: %s local-file [remote-file]\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 }
 if ((VAR_10 = FUNC_4(VAR_6[1])) == ((void*)0)) {
  VAR_1 = -1;
  return;
 }
 VAR_11 = VAR_6[2];
 if (VAR_9)
  VAR_11 = VAR_10;
 VAR_8 = (VAR_6[0][0] == 'a') ? "APPE" : ((VAR_4) ? "STOU" : "STOR");
 VAR_11 = FUNC_2(VAR_7, sizeof(VAR_7), VAR_11,
  0, VAR_9 && VAR_3, VAR_9 && VAR_2);
 FUNC_5(VAR_8, VAR_10, VAR_11,
     VAR_10 != VAR_6[1] || VAR_11 != VAR_6[2]);
 FUNC_3(VAR_10);
}
