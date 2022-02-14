
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr {int dummy; } ;
struct lltable {int (* llt_delete_entry ) (struct lltable*,struct llentry*) ;struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct llentry*) ;
 struct llentry* FUNC_3 (struct lltable*,int ,struct sockaddr const*) ;
 int FUNC_4 (struct lltable*,struct llentry*) ;
 int FUNC_5 (struct lltable*,struct llentry*) ;

int
FUNC_6(struct lltable *VAR_4, u_int VAR_5,
    const struct sockaddr *VAR_6)
{
 struct llentry *VAR_7;
 struct ifnet *VAR_8;

 VAR_8 = VAR_4->llt_ifp;
 FUNC_0(VAR_8);
 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_6);

 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_8);
  return (VAR_0);
 }
 if ((VAR_7->la_flags & VAR_3) != 0 && (VAR_5 & VAR_3) == 0) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_7);
  return (VAR_1);
 }

 FUNC_4(VAR_4, VAR_7);
 FUNC_1(VAR_8);

 VAR_4->llt_delete_entry(VAR_4, VAR_7);

 return (0);
}
