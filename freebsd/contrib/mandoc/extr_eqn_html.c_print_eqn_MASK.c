
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct html {int flags; } ;
struct eqn_box {int * first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct html*,struct eqn_box const*) ;
 struct tag* FUNC_1 (struct html*,int ,char*,char*) ;
 int FUNC_2 (struct html*,struct tag*) ;

void
FUNC_3(struct html *VAR_2, const struct eqn_box *VAR_3)
{
 struct tag *VAR_4;

 if (VAR_3->first == ((void*)0))
  return;

 VAR_4 = FUNC_1(VAR_2, VAR_1, "c", "eqn");

 VAR_2->flags |= VAR_0;
 FUNC_0(VAR_2, VAR_3);
 VAR_2->flags &= ~VAR_0;

 FUNC_2(VAR_2, VAR_4);
}
