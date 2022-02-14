
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,...) ;
 char* VAR_3 ;
 int FUNC_3 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 int VAR_4 ;

void
FUNC_4(int VAR_5, char **VAR_6)
{
 int VAR_7;

 if (VAR_5 < 2 && !FUNC_0(&VAR_5, &VAR_6, "filename")) {
  FUNC_2("usage: %s filename\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 }
 VAR_7 = VAR_4;
 if (VAR_2 == 0)
  VAR_4 = -1;
 if (FUNC_1("MDTM %s", VAR_6[1]) == VAR_0) {
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  FUNC_3(VAR_3, "%*s %04d%02d%02d%02d%02d%02d", &VAR_8, &VAR_9,
   &VAR_10, &VAR_11, &VAR_12, &VAR_13);

  FUNC_2("%s\t%02d/%02d/%04d %02d:%02d:%02d GMT\n", VAR_6[1],
   VAR_9, VAR_10, VAR_8, VAR_11, VAR_12, VAR_13);
 } else
  FUNC_2("%s\n", VAR_3);
 VAR_4 = VAR_7;
}
