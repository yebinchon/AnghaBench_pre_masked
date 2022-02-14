
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_authentication {int net_access_key; int own_protocol_key; } ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char**) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dpp_authentication *VAR_0)
{
 unsigned char *VAR_1 = ((void*)0);
 int VAR_2;
 EC_KEY *VAR_3;

 VAR_3 = FUNC_1(VAR_0->own_protocol_key);
 if (!VAR_3)
  return;

 VAR_2 = FUNC_3(VAR_3, &VAR_1);
 if (VAR_2 <= 0) {
  FUNC_0(VAR_3);
  return;
 }
 FUNC_5(VAR_0->net_access_key);
 VAR_0->net_access_key = FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1);
 FUNC_0(VAR_3);
}
