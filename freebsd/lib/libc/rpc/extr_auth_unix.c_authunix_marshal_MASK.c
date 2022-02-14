
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audata {int au_mpos; int au_marshed; } ;
typedef int bool_t ;
typedef int XDR ;
typedef int AUTH ;


 struct audata* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool_t
FUNC_3(AUTH *VAR_0, XDR *VAR_1)
{
 struct audata *VAR_2;

 FUNC_2(VAR_0 != ((void*)0));
 FUNC_2(VAR_1 != ((void*)0));

 VAR_2 = FUNC_0(VAR_0);
 return (FUNC_1(VAR_1, VAR_2->au_marshed, VAR_2->au_mpos));
}
