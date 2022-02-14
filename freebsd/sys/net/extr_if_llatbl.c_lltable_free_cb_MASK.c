
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int dummy; } ;
struct llentry {int dummy; } ;
struct llentries {int dummy; } ;


 int FUNC_0 (struct llentries*,struct llentry*,int ) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct lltable *VAR_1, struct llentry *VAR_2, void *VAR_3)
{
 struct llentries *VAR_4;

 VAR_4 = (struct llentries *)VAR_3;

 FUNC_1(VAR_2);
 FUNC_0(VAR_4, VAR_2, VAR_0);

 return (0);
}
