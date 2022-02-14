
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cclass {char* name; } ;
typedef char Char ;


 int VAR_0 ;
 struct cclass* VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(const Char **VAR_2, Char **VAR_3)
{
 const Char *VAR_4 = *VAR_2 + 1;
 Char *VAR_5 = *VAR_3;
 const Char *VAR_6;
 struct cclass *VAR_7;
 size_t VAR_8;

 if ((VAR_6 = FUNC_0(VAR_4, ':')) == ((void*)0) || VAR_6[1] != ']')
  return 1;

 VAR_8 = (size_t)(VAR_6 - VAR_4);
 for (VAR_7 = VAR_1; VAR_7->name != ((void*)0); VAR_7++) {
  if (!FUNC_1(VAR_4, VAR_7->name, VAR_8) && VAR_7->name[VAR_8] == '\0')
   break;
 }
 if (VAR_7->name == ((void*)0))
  return -1;
 *VAR_5++ = VAR_0;
 *VAR_5++ = (Char)(VAR_7 - &VAR_1[0]);
 *VAR_3 = VAR_5;
 *VAR_2 += VAR_8 + 3;

 return 0;
}
