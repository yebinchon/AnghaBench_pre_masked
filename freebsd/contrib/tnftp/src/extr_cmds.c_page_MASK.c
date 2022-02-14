
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int*,char***,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*,char*,char*,int,int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,char const*,size_t) ;
 int FUNC_8 (char const*) ;
 int VAR_4 ;

void
FUNC_9(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8, VAR_9;
 size_t VAR_10;
 const char *VAR_11;
 char *VAR_12;

 if (VAR_5 == 0 || VAR_5 > 2 ||
     (VAR_5 == 1 && !FUNC_2(&VAR_5, &VAR_6, "remote-file"))) {
  FUNC_1("usage: %s remote-file\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 }
 VAR_11 = FUNC_5("pager");
 if (FUNC_0(VAR_11))
  VAR_11 = VAR_0;
 VAR_10 = FUNC_8(VAR_11) + 2;
 VAR_12 = FUNC_4(VAR_10);
 VAR_12[0] = '|';
 (void)FUNC_7(VAR_12 + 1, VAR_11, VAR_10 - 1);

 VAR_7 = VAR_2;
 VAR_8 = VAR_3;
 VAR_9 = VAR_4;
 VAR_2 = VAR_3 = VAR_4 = 0;
 FUNC_6("RETR", VAR_12, VAR_6[1], "r+", 1, 0);
 VAR_2 = VAR_7;
 VAR_3 = VAR_8;
 VAR_4 = VAR_9;
 (void)FUNC_3(VAR_12);
}
