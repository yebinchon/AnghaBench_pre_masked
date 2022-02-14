
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbm_page {char* name; char* sect; char* arch; int addr; int desc; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int ) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t*,char const*,char*) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char**,char*,char const*,char const*,char*) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static char *
FUNC_9(size_t VAR_0, struct dbm_page *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;

 switch (VAR_0) {
 case 131:
  return FUNC_8(VAR_1->desc);
 case 130:
  VAR_4 = VAR_1->name;
  break;
 case 128:
  VAR_4 = VAR_1->sect;
  break;
 case 129:
  VAR_4 = VAR_1->arch;
  if (VAR_4 == ((void*)0))
   VAR_4 = "all\0";
  break;
 default:
  VAR_4 = ((void*)0);
  break;
 }

 if (VAR_4 != ((void*)0)) {
  VAR_8 = FUNC_5(VAR_4, 3) + 1;
  VAR_5 = FUNC_7(VAR_8);
  VAR_9 = 0;
  FUNC_4(VAR_5, &VAR_9, VAR_4, " # ");
  VAR_5[VAR_9++] = '\0';
  FUNC_0(VAR_9 == VAR_8);
  return VAR_5;
 }

 VAR_5 = ((void*)0);
 FUNC_1(VAR_0 - 2, VAR_1->addr);
 while ((VAR_7 = FUNC_2()) != ((void*)0)) {
  if (VAR_5 == ((void*)0)) {
   VAR_2 = "";
   VAR_3 = "";
  } else {
   VAR_2 = VAR_5;
   VAR_3 = " # ";
  }
  FUNC_6(&VAR_6, "%s%s%s", VAR_2, VAR_3, VAR_7);
  FUNC_3(VAR_5);
  VAR_5 = VAR_6;
 }
 return VAR_5;
}
