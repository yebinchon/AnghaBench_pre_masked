
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct alias_link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct alias_link*,struct in_addr,int ) ;
 struct alias_link* FUNC_1 (int ,struct in_addr,struct in_addr) ;
 int FUNC_2 (char*,struct in_addr*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char*) ;

void FUNC_9 (const char* VAR_2)
{
 char *VAR_3;
 char* VAR_4;
 char* VAR_5;
 struct in_addr VAR_6;
 struct in_addr VAR_7;
 char* VAR_8;
 struct alias_link *VAR_9;

 VAR_3 = FUNC_7 (VAR_2);
 if (!VAR_3)
  FUNC_3 (1, "redirect_port: strdup() failed");



 VAR_4 = FUNC_8 (VAR_3, " \t");
 if (!VAR_4)
  FUNC_3 (1, "redirect_address: missing local address");

 VAR_5 = FUNC_6(VAR_4, ',');
 if (VAR_5) {
  VAR_6.s_addr = VAR_0;
  VAR_8 = VAR_4;
 } else {
  FUNC_2 (VAR_4, &VAR_6);
  VAR_8 = ((void*)0);
 }



 VAR_4 = FUNC_8 (((void*)0), " \t");
 if (!VAR_4)
  FUNC_3 (1, "redirect_address: missing public address");

 FUNC_2 (VAR_4, &VAR_7);
 VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_7);




 if (VAR_8 != ((void*)0) && VAR_9 != ((void*)0)) {
  VAR_4 = FUNC_8(VAR_8, ",");
  while (VAR_4 != ((void*)0)) {
   FUNC_2(VAR_4, &VAR_6);
   FUNC_0(VAR_1, VAR_9, VAR_6, FUNC_5(~0));
   VAR_4 = FUNC_8(((void*)0), ",");
  }
 }

 FUNC_4 (VAR_3);
}
