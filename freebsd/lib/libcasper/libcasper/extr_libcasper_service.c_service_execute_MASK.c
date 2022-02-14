
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service {int dummy; } ;
struct casper_service {struct service* cs_service; } ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,char*) ;
 struct casper_service* FUNC_6 (char const*) ;
 int FUNC_7 (struct service*,int,int) ;

void
FUNC_8(int VAR_0)
{
 struct casper_service *VAR_1;
 struct service *VAR_2;
 const char *VAR_3;
 nvlist_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_0, 0);
 if (VAR_4 == ((void*)0))
  FUNC_0(1);
 if (!FUNC_2(VAR_4, "service"))
  FUNC_0(1);
 VAR_3 = FUNC_3(VAR_4, "service");
 VAR_1 = FUNC_6(VAR_3);
 if (VAR_1 == ((void*)0))
  FUNC_0(1);
 VAR_2 = VAR_1->cs_service;
 VAR_5 = FUNC_5(VAR_4, "procfd");
 FUNC_1(VAR_4);

 FUNC_7(VAR_2, VAR_0, VAR_5);

 FUNC_0(1);
}
