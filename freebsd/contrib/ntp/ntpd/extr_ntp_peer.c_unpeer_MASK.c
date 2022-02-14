
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int flags; int srcadr; int associd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct peer*,int ) ;
 int FUNC_1 (int ,struct peer*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct peer*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct peer*,int *) ;

void
FUNC_5(
 struct peer *VAR_7
 )
{
 FUNC_1(VAR_2, VAR_7, "assoc %u", VAR_7->associd);
 FUNC_3(&VAR_7->srcadr, 1, 0);
 FUNC_4(VAR_7, ((void*)0));
 VAR_5++;
 VAR_4--;
 if (VAR_0 & VAR_7->flags)
  VAR_6--;
 FUNC_0(VAR_7, VAR_3);
}
