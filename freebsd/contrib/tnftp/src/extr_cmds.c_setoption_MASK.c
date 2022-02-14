
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; char* value; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 struct option* VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_3 ;

void
FUNC_3(int VAR_4, char *VAR_5[])
{
 struct option *VAR_6;

 VAR_1 = -1;
 if (VAR_4 == 0 || (VAR_4 != 1 && VAR_4 != 3)) {
  FUNC_0("usage: %s [option value]\n", VAR_5[0]);
  return;
 }


 if (VAR_4 == 1) {
  for (VAR_6 = VAR_2; VAR_6->name != ((void*)0); VAR_6++) {
   FUNC_1(VAR_3, "%-*s\t%s\n", ((int) sizeof("http_proxy")),
       VAR_6->name, VAR_6->value ? VAR_6->value : "");
  }
 } else {
  FUNC_2(VAR_5[1], VAR_5[2], 1);
 }
 VAR_1 = 0;
}
