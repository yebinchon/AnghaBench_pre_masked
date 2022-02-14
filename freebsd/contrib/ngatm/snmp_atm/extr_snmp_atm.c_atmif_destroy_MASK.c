
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmif_reg {int notify; int * ifpreg; } ;
struct atmif_priv {int notify; int * ifpreg; } ;


 int VAR_0 ;
 struct atmif_reg* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct atmif_reg*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct atmif_reg*,int ,uintptr_t) ;
 int FUNC_3 (struct atmif_reg*) ;
 int FUNC_4 (struct atmif_reg*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct atmif_priv *VAR_5)
{
 struct atmif_reg *VAR_6;

 FUNC_2(VAR_5, VAR_0,
     (uintptr_t)0);

 FUNC_3(VAR_5);

 if (VAR_5->ifpreg != ((void*)0))
  FUNC_5(VAR_5->ifpreg);

 while ((VAR_6 = FUNC_0(&VAR_5->notify)) != ((void*)0)) {
  FUNC_1(&VAR_5->notify, VAR_6, VAR_3);
  FUNC_4(VAR_6);
 }

 FUNC_1(&VAR_1, VAR_5, VAR_3);
 FUNC_4(VAR_5);

 VAR_2 = VAR_4;
}
