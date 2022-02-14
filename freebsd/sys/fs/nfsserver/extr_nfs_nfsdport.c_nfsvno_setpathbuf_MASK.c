
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct componentname {int cn_flags; char* cn_pnbuf; } ;
struct nameidata {struct componentname ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,int ) ;

void
FUNC_1(struct nameidata *VAR_4, char **VAR_5, u_long **VAR_6)
{
 struct componentname *VAR_7 = &VAR_4->ni_cnd;

 VAR_7->cn_flags |= (VAR_2 | VAR_0);
 VAR_7->cn_pnbuf = FUNC_0(VAR_3, VAR_1);
 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);
 *VAR_5 = VAR_7->cn_pnbuf;
}
