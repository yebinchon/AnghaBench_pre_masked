
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysevent_t ;
struct sysevent {int se_pub; int se_subclass; int se_class; int * se_nvl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sysevent* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int) ;

sysevent_t *
FUNC_3(char *VAR_2, char *VAR_3, char *VAR_4, int VAR_5)
{
 struct sysevent *VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 == VAR_1);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 VAR_6->se_nvl = ((void*)0);
 FUNC_2(VAR_6->se_class, VAR_2, sizeof(VAR_6->se_class));
 FUNC_2(VAR_6->se_subclass, VAR_3, sizeof(VAR_6->se_subclass));
 FUNC_2(VAR_6->se_pub, VAR_4, sizeof(VAR_6->se_pub));

 return ((sysevent_t *)VAR_6);
}
