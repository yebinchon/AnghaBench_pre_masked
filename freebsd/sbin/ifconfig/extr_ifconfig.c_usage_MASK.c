
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* opt_usage; struct option* next; } ;
typedef int options ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 struct option* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_2[1024];
 struct option *VAR_3;


 VAR_2[0] = '\0';
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  FUNC_2(VAR_2, VAR_3->opt_usage, sizeof(VAR_2));
  FUNC_2(VAR_2, " ", sizeof(VAR_2));
 }

 FUNC_1(VAR_1,
 "usage: ifconfig [-f type:format] %sinterface address_family\n"
 "                [address [dest_address]] [parameters]\n"
 "       ifconfig interface create\n"
 "       ifconfig -a %s[-d] [-m] [-u] [-v] [address_family]\n"
 "       ifconfig -l [-d] [-u] [address_family]\n"
 "       ifconfig %s[-d] [-m] [-u] [-v]\n",
  VAR_2, VAR_2, VAR_2);
 FUNC_0(1);
}
