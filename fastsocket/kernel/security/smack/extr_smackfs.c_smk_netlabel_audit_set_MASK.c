
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_audit {int secid; int sessionid; int loginuid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct netlbl_audit *VAR_1)
{
 VAR_1->loginuid = FUNC_0(VAR_0);
 VAR_1->sessionid = FUNC_1(VAR_0);
 VAR_1->secid = FUNC_3(FUNC_2());
}
