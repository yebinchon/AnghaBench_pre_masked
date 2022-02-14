
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ssh*,int ,int *) ;

int
FUNC_2(struct ssh *VAR_2)
{
 FUNC_1(VAR_2, VAR_0,
     &VAR_1);
 FUNC_0("expecting SSH2_MSG_KEX_DH_GEX_REQUEST");
 return 0;
}
