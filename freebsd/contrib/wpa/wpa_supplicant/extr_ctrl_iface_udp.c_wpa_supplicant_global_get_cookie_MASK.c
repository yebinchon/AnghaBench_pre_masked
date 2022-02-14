
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl_iface_global_priv {int cookie; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int ,int) ;

__attribute__((used)) static char *
FUNC_3(struct ctrl_iface_global_priv *VAR_1,
     size_t *VAR_2)
{
 char *VAR_3;
 VAR_3 = FUNC_0(7 + 2 * VAR_0 + 1);
 if (VAR_3 == ((void*)0)) {
  *VAR_2 = 1;
  return ((void*)0);
 }

 FUNC_1(VAR_3, "COOKIE=", 7);
 FUNC_2(VAR_3 + 7, 2 * VAR_0 + 1,
    VAR_1->cookie, VAR_0);

 *VAR_2 = 7 + 2 * VAR_0;
 return VAR_3;
}
