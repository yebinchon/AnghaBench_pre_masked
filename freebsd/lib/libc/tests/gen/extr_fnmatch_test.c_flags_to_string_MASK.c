
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagnames ;







 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static const char *
FUNC_3(int VAR_0)
{
 static const int VAR_1[] = { 130, 129,
  128, 131, 132, 0 };
 static const char VAR_2[] = "FNM_NOESCAPE\0FNM_PATHNAME\0FNM_PERIOD\0FNM_LEADING_DIR\0FNM_CASEFOLD\0";
 static char VAR_3[sizeof(VAR_2) + 3 * sizeof(int) + 2];
 char *VAR_4;
 size_t VAR_5, VAR_6;
 const char *VAR_7;

 VAR_4 = VAR_3;
 VAR_7 = VAR_2;
 for (VAR_5 = 0; VAR_1[VAR_5] != 0; VAR_5++) {
  VAR_6 = FUNC_2(VAR_7);
  if (VAR_0 & VAR_1[VAR_5]) {
   if (VAR_4 != VAR_3)
    *VAR_4++ = '|';
   FUNC_0(VAR_4, VAR_7, VAR_6);
   VAR_4 += VAR_6;
   VAR_0 &= ~VAR_1[VAR_5];
  }
  VAR_7 += VAR_6 + 1;
 }
 if (VAR_4 == VAR_3)
  FUNC_0(VAR_4, "0", 2);
 else if (VAR_0 != 0)
  FUNC_1(VAR_4, "%d", VAR_0);
 else
  *VAR_4 = '\0';
 return VAR_3;
}
