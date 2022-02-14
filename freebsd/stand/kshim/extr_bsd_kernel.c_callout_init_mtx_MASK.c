
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct callout {int flags; struct mtx* mtx; } ;


 int VAR_0 ;
 struct mtx VAR_1 ;
 int FUNC_0 (struct callout*,int ,int) ;

void
FUNC_1(struct callout *VAR_2, struct mtx *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_1;

 VAR_2->mtx = VAR_3;
 VAR_2->flags = (VAR_4 & VAR_0);
}
