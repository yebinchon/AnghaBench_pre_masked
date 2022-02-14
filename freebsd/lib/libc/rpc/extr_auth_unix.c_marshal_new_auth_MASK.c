
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audata {int au_mpos; int au_marshed; } ;
typedef int XDR ;
struct TYPE_4__ {int ah_verf; int ah_cred; } ;
typedef TYPE_1__ AUTH ;


 struct audata* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(AUTH *VAR_2)
{
 XDR VAR_3;
 XDR *VAR_4 = &VAR_3;
 struct audata *VAR_5;

 FUNC_3(VAR_2 != ((void*)0));

 VAR_5 = FUNC_0(VAR_2);
 FUNC_6(VAR_4, VAR_5->au_marshed, VAR_0, VAR_1);
 if ((! FUNC_5(VAR_4, &(VAR_2->ah_cred))) ||
     (! FUNC_5(VAR_4, &(VAR_2->ah_verf))))
  FUNC_4("auth_none.c - Fatal marshalling problem");
 else
  VAR_5->au_mpos = FUNC_2(VAR_4);
 FUNC_1(VAR_4);
}
