
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmif_reg {int data; int (* func ) (int *,int,uintptr_t,int ) ;} ;
struct atmif_priv {int pub; int notify; } ;
typedef enum atmif_notify { ____Placeholder_atmif_notify } atmif_notify ;


 struct atmif_reg* FUNC_0 (int *) ;
 struct atmif_reg* FUNC_1 (struct atmif_reg*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,uintptr_t,int ) ;

void
FUNC_3(struct atmif_priv *VAR_1, enum atmif_notify VAR_2,
    uintptr_t VAR_3)
{
 struct atmif_reg *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(&VAR_1->notify);
 while (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_4, VAR_0);
  VAR_4->func(&VAR_1->pub, VAR_2, VAR_3, VAR_4->data);
  VAR_4 = VAR_5;
 }
}
