
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct permission_set {scalar_t__ all_permitted; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ssh*,int,int,char*,int,char*,int *,int,int *) ;
 struct permission_set* FUNC_3 (struct ssh*,int) ;

void
FUNC_4(struct ssh *VAR_1, int VAR_2, int VAR_3,
    char *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3 == VAR_0;
 struct permission_set *VAR_7 = FUNC_3(VAR_1, VAR_3);

 FUNC_0("allow %s forwarding to host %s port %d",
     FUNC_1(VAR_2, VAR_3), VAR_4, VAR_5);




 FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_6 ? VAR_4 : 0, VAR_6 ? VAR_5 : 0,
     VAR_6 ? ((void*)0) : VAR_4, ((void*)0), VAR_6 ? 0 : VAR_5, ((void*)0));
 VAR_7->all_permitted = 0;
}
