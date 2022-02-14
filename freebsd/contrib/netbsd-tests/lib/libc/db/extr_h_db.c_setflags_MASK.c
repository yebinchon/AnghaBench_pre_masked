
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int ,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_9 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static u_int
FUNC_4(char *VAR_10)
{
 char *VAR_11;

 for (; FUNC_1((unsigned char)*VAR_10); ++VAR_10);
 if (*VAR_10 == '\n' || *VAR_10 == '\0')
  return 0;
 if ((VAR_11 = FUNC_2(VAR_10, '\n')) != ((void*)0))
  *VAR_11 = '\0';
 if (!FUNC_3(VAR_10, "R_CURSOR")) return VAR_0;
 if (!FUNC_3(VAR_10, "R_FIRST")) return VAR_1;
 if (!FUNC_3(VAR_10, "R_IAFTER")) return VAR_2;
 if (!FUNC_3(VAR_10, "R_IBEFORE")) return VAR_3;
 if (!FUNC_3(VAR_10, "R_LAST")) return VAR_4;
 if (!FUNC_3(VAR_10, "R_NEXT")) return VAR_5;
 if (!FUNC_3(VAR_10, "R_NOOVERWRITE")) return VAR_6;
 if (!FUNC_3(VAR_10, "R_PREV")) return VAR_7;
 if (!FUNC_3(VAR_10, "R_SETCURSOR")) return VAR_8;

 FUNC_0(1, "line %zu: %s: unknown flag", VAR_9, VAR_10);

}
