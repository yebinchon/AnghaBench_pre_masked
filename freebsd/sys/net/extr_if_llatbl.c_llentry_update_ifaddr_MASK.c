
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct lltable {int llt_af; } ;
struct llentry {int la_flags; int r_linkdata; int * ll_addr; } ;
struct ifnet {int dummy; } ;
typedef int linkhdr ;


 int * FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct llentry*) ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct ifnet*,int ,int *,int *,size_t*,int*) ;
 int FUNC_4 (int ,int *,size_t) ;

__attribute__((used)) static int
FUNC_5(struct lltable *VAR_3, struct llentry *VAR_4, void *VAR_5)
{
 struct ifnet *VAR_6;
 u_char VAR_7[VAR_1];
 size_t VAR_8;
 u_char *VAR_9;
 int VAR_10;

 VAR_6 = (struct ifnet *)VAR_5;

 VAR_9 = VAR_4->ll_addr;

 FUNC_1(VAR_4);
 if ((VAR_4->la_flags & VAR_2) == 0) {
  FUNC_2(VAR_4);
  return (0);
 }

 if ((VAR_4->la_flags & VAR_0) != 0)
  VAR_9 = FUNC_0(VAR_6);

 VAR_8 = sizeof(VAR_7);
 FUNC_3(VAR_6, VAR_3->llt_af, VAR_9, VAR_7, &VAR_8,
     &VAR_10);
 FUNC_4(VAR_4->r_linkdata, VAR_7, VAR_8);
 FUNC_2(VAR_4);

 return (0);
}
